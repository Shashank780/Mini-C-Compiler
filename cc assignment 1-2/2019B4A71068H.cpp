#include <bits/stdc++.h>
#include <fstream>
#include <stack>
#include <string.h>
#define col 5
#define _s 30

using namespace std;

int init[20],fin[20],a=0,b=0;
string init_dfa[_s],fin_dfa[_s];
int _a = 0, _b = 0;

void initialise(int nfa_table[][col]){
    for(int i=0;i<1000;i++){
        for(int j=0;j<col;j++){
            nfa_table[i][j]=-1; //-1 represents no change for a given input, we'll modify the entries whenever there is a change
        }
    }
}

void print_initial_final(){
    cout<<"Initial States : ";
    for(int i=0;i<a;i++)
        cout<<init[i]<<" ";
        cout<<endl;
        cout<<"Final States : ";
    for(int i=0;i<b;i++)
        cout<<fin[i]<<" ";
        cout<<endl;
}

void print_initial_final_dfa(){
    cout<<"Initial States : ";
    for(int i=0;i<_a;i++)
        cout<<init_dfa[i]<<" ";
        cout<<endl;
        cout<<"Final States : ";
    for(int i=0;i<_b;i++)
        cout<<fin_dfa[i]<<" ";
        cout<<endl<<endl;
    for(int i=0;i<60;i++)
            cout<<"-";
    cout<<endl<<endl;
}

void reduce_fin(int x){
    for(int i=x; i<b-1; i++)
        fin[i] = fin[i+1];
        b -= 1;
}

/*

 Concatenation usually doesn't have an explicit symbol. In order to simplify calculations,we preprocess the string
 using the function below. Let's use "?" to represent concatenation. 
 
 We add concatentation symbols in the following cases:
 1. Between two letters
 2. Between ) and (
 3. Between a letter and (
 4. Between ) and a letter
 5. Between * and )
 6. Between * and a letter
 
 
*/

int FindMatchingBracket(string s, int pos)
{
    stack<char> st;
    st.push(s[pos]);
    int j=pos-1;
    while(!(st.empty()))
    {
        if(s[j]==')')
        {
            st.push(s[j]);
        }
        else
        {
            if(s[j]=='(')
            {
                st.pop();
            }
            
        }
        j--;
    }
    int store_opening_bracket_pos=j+1;
    return store_opening_bracket_pos;
}

string PositiveClosureToKleeneClosure(string s)
{
    int l=s.length();
    int i=0;
    int opening_bracket_pos;
    string word1;
    while(i<s.length())
    {
        if(s[i]=='+')
        {
           opening_bracket_pos=FindMatchingBracket(s,i-1);
           word1 = s.substr(opening_bracket_pos,i-opening_bracket_pos);
           s[i]='*';
           s.insert(opening_bracket_pos,word1);
           i+=(i-opening_bracket_pos);//shift i because we have added new characters
        }
        i+=1;
    }
    //cout<<"Converting Positive Closure to Kleene Closure:"<<s<<endl;
    return s;
}

string AddConcatenationSymbol(string s){
    char x[6000];
    int l=s.length();
    int j=0;
    x[j]='(';
    j += 1;
    for(int i=0;i<l;i++)
    {
        x[j]=s[i];
        j++;
        if((s[i]==97||s[i]==98)&&(s[i+1]==97||s[i+1]==98))
        {
            //checking if s[i],s[i+1] are letters 'a' or 'b'
            x[j]='?';
            j++;
        }
        else if(s[i]==')'&&s[i+1]=='(')
        {
            x[j]='?';
            j++;
        }
        else if((s[i]==97||s[i]==98)&&s[i+1]=='(')
        {
            x[j]='?';
            j++;
        }
        else if(s[i]==')'&&(s[i+1]==97||s[i+1]==98))
        {
            x[j]='?';
            j++;
        }
        else if(s[i]=='*'&&(s[i+1]=='(' || (s[i+1]==97||s[i+1]==98)))
        {
            x[j]='?';
            j++;
        }
    }
    x[j] = ')';
    j += 1;
    string p;
    for(int i=0;i<j;i++)
       p += x[i];
    return p;
}

/*
   We use Shunting Yard Algorithm below to convert the given regular expression to its postfix notation.
   
   The order of precedence of operations is as follows:
   1.Closure *
   2.Concatenation ?
   3.Union +
   
*/

string postfix(string s){
    int l=s.length();
    char a[6000]; //let a be the output 
    stack <char> ch;
    int j=0;
    for(int i=0;i<l;i++)
    {
         char x = s[i];
         switch(x)
         {
            case 'a':   a[j]='a'; // If the input is a letter, append it to the output
                        j ++;
                        break;
            case 'b':   a[j]='b'; // If the input is a letter, append it to the output
                        j++;
                        break;
            case '(':   ch.push('('); // If the input is '(', push it to the stack
                        break;
            case ')':   while(!ch.empty())
                        {
                            /* If the input is ')',pop all the characters and append them to the output till 
                            you encounter a '(' . Once you encounter ')', pop it off and continue with the algorithm*/
                            
                            if(ch.top()=='(')
                            {
                                ch.pop();
                                break;
                            }
                            else
                            {
                                a[j]=ch.top();
                                ch.pop();
                                j += 1;
                            }
                        }
                        break;
            case '?':   if(ch.empty())
                        {
                            //If the stack is empty,push it
                            ch.push('?');
                        }
                        else 
                        {
                            char temp = ch.top();
                            if(temp=='(')
                                //If there is a '(' on top of the stack,push '?'
                                ch.push('?');
                            else if(temp=='*')
                            {
                                /* If the operator on top of the stack has higher or equal precedence
                                i.e. * or ? in this case, then pop it and append to the output queue. Repeat till
                                we see that the top of the stack has lower precedence than ?*/
                                a[j]=ch.top();
                                ch.pop();
                                j++;
                                if(ch.top()== '?')
                                {
                                    a[j] = '?';
                                    j += 1;
                                }
                                else{
                                    ch.push('?');
                                }
                            }
                            else if(temp=='?')
                            {
                                a[j]=ch.top();
                                ch.pop();
                                j += 1;
                                ch.push('?');
                            }
                            else if(temp == '|')
                            {
                                   ch.push('?');
                            }
                        }
                        break;
            case '|':   if(ch.empty())
            {
                            //If the stack is empty,push it
                            ch.push('|');
                        }
                        else
                        {
                            char temp = ch.top();
                            if(temp == '(')
                                //if there's a left paranthesis on top of the stack,push it
                                ch.push('|');
                            else if(temp == '*')
                            {
                                /* and ? have higher precedence than +, so pop them and append to the output before
                                pushing +*/
                                a[j] = ch.top();
                                ch.pop();
                                j++;
                                ch.push('|');
                            }
                            else if(temp == '?')
                            {
                                a[j] = ch.top();
                                j++;
                                ch.pop();
                                ch.push('|');
                            }
                        }
                            break;
            case '*':   if(ch.empty())
                        {
                            //if stack is empty,push it
                            ch.push('*');
                        }
                        else
                        {
                            char temp = ch.top();
                            if(temp == '(' || temp == '?' || temp == '|' )
                                // if top of the stack is ( or lower precedence,then push
                                ch.push('*');
                            else{
                                a[j] = ch.top();
                                ch.pop();
                                j += 1;
                                ch.push('*');
                            }
                        }
                        break;
         }
    }
    string p;
    for(int i=0;i<j;i++){
        p += a[i];
    }
    return p;
}

/*
    We now use Thompson's Construction Algo to convert the regular expression in its postfix form to NFA.
*/

int reg_nfa(string s,int nfa_table[][col]){
    int l = s.length();
    int states = 1;
    int m,n,j,counter;
    for(int i=0;i<l;i++)
    {
        char x = s[i];
        switch(x)
        {
            case 'a': nfa_table[states][0] = states;
                      init[a] = states;
                      a++;
                      states++;
                      nfa_table[states-1][1] = states;
                      fin[b] = states;
                      b++;
                      nfa_table[states][0] = states;
                      states++;
                      break;
            case 'b': nfa_table[states][0] = states;
                      init[a] = states;
                      a++;
                      states++;
                      nfa_table[states-1][2] = states;
                      fin[b] = states;
                      b++;
                      nfa_table[states][0] = states;
                      states++;
                      break;
            case '?': m = fin[b-2];
                      n = init[a-1];
                      nfa_table[m][3]=n;
                      reduce_fin(b-2);  //reduces final state
                      a -= 1;           //reduces initial states
                      break;
            case '|': for(j=a-1,counter=0;counter<2;counter++)
                      {
                        m = init[j-counter];
                        nfa_table[states][3+counter]=m;
                      }
                      a=a-2;
                      init[a]=states;
                      a += 1;
                      nfa_table[states][0] = states;
                      states += 1;
                      for(j=b-1,counter=0;counter<2;counter++)
                      {
                        m = fin[j-counter];
                        nfa_table[m][3]=states;
                      }
                      b=b-2;
                      fin[b]=states;
                      b += 1;
                      nfa_table[states][0] = states;
                      states += 1;
                      break;
            case '*': m = init[a-1];
                      nfa_table[states][3] = m;
                      nfa_table[states][0] = states;
                      init[a-1] = states;

                      states += 1;
                      n = fin[b-1];
                      nfa_table[n][3]=m;
                      nfa_table[n][4]=states;
                      nfa_table[states-1][4]=states;
                      fin[b-1]=states;
                      nfa_table[states][0]=states;
                      states += 1;
                        break;
        }
    }
  return states;
}

void print_nfa_table(int nfa_table[][col],int states)
{
    cout<<endl;
    for(int i=0;i<60;i++)
        cout<<"*";
        cout<<endl<<endl;
    cout<<setw(43)<<"TRANSITION TABLE FOR NFA"<<endl<<endl;
    cout<<setw(10)<<"States"<<setw(10)<<"a"<<setw(10)<<"b"<<setw(10)<<"e"<<setw(10)<<"e"<<endl;
    for(int i=0;i<60;i++)
        cout<<"-";
        cout<<endl;
    for(int i=1;i<states;i++){
        for(int j=0;j<col;j++){
            if(nfa_table[i][j]==-1)
                cout<<setw(10)<<"--";
            else
                cout<<setw(10)<<nfa_table[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<60;i++)
        cout<<"*";
    cout<<endl;
    print_initial_final();
}

void print_dfa_table(string dfa_tab[][3],int state)
{
    cout<<"DFA transitions"<<endl<<endl;
    cout<<setw(15)<<"States"<<setw(15)<<"a"<<setw(15)<<"b"<<endl;
    for(int i=0;i<60;i++)
        cout<<"_";
    cout<<endl;
    for(int i=0;i<state;i++){
        for(int j=0;j<3;j++){
            cout<<setw(15)<<dfa_tab[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    print_initial_final_dfa();
}


vector <int> eclosure(int nfa_table[][col], int x){
    stack <int> s;
    map <int, int> m;
    vector <int> v;
    int y;

    s.push(x);
    m[x] = 1;

    while(!s.empty())
    {
        y = s.top();
        s.pop();
        if(nfa_table[y][3] == -1)
            continue;
        else
        {
            s.push(nfa_table[y][3]);
            m[nfa_table[y][3]] = 1;

            if(nfa_table[y][4] == -1)
                continue;
            else{
                s.push(nfa_table[y][4]);
                m[nfa_table[y][4]] == -1;
            }
        }
    }

    map <int, int> ::iterator itr;
    itr = m.begin();

    while(itr != m.end())
    {
        v.push_back(itr->first);
        itr++;
    }
    return v;
}

long long int map_it(vector <int> v, int y)
{
    long long int x=0,m=1;
    while(y--)
    {
        m *=10;
    }

    vector<int> ::iterator it=v.begin();
    while(it != v.end())
    {
        x += *it*m;
        m /=10;
        it += 1;
    }
  return x/10;
}

/*
    The function below is to rename DFA states
*/
string state_name(int i){
    char s = 'q';
    string p ;
    p += s;
    if(i==0)
    {
        p += '0';
        return p;
    }
   int a[100];
   int j=0;
    while(i>0)
    {
        int x = i%10;
        a[j]=x;
        j += 1;
        i = i/10;
    }
    for(int i=j-1;i>=0;i--)
    {
            int x = a[i];
        switch(x){
            case 0: p += '0';
                    break;
            case 1: p += '1';
                    break;
            case 2: p += '2';
                    break;
            case 3: p += '3';
                    break;
            case 4: p += '4';
                    break;
            case 5: p += '5';
                    break;
            case 6: p += '6';
                    break;
            case 7: p += '7';
                    break;
            case 8: p += '8';
                    break;
            case 9: p += '9';
                    break;

        }
    }
    return p;
}

void check_init(vector <int> v, string s){
    for(int i=0;i<v.size();i++){
        if(v[i] == init[0]){
            init_dfa[_a] = s;
            _a += 1;
        }
    }
}

void check_fin(vector <int> v, string s){
    for(int i=0;i<v.size();i++){
        if(v[i] == fin[0]){
            fin_dfa[_b] = s;
            _b += 1;
        }
    }
}

bool check_valid(string word){
    int len = word.length();
    int i = 0;
    for(i=0;i<len;i++){
        if(word[i] == 'a' || word[i] == 'b')
            continue;
        else
            return false;

    }

    if(i==len)
        return true;
}

int nfa_dfa(int nfa_table[][col],int states,string dfa_tab[][3]){
    bool flag[states];
    memset(flag,true,sizeof(flag)); //to make sure all states E-closure found

    int state = 0,j = 0;
    map <vector<int>,string> map_state;
    vector <int> v,v1,v2,v3,v4;

    v = eclosure(nfa_table,init[0]);
    flag[init[a]] = false;

    map_state[v] = state_name(j++);
    check_init(v,map_state[v]);  //to check whether current state is initial or not
    check_fin(v,map_state[v]);

   /* cout<<endl<<map_state[v]<<"represents :- ";
                for(int i=0;i<v.size();i++)
                    cout<<v[i]<<" ";
                cout<<endl; */

    stack < vector<int> > st;
    st.push(v);
    // transition of e-closure to over input symbol a
    int counter = 0;
    while(true){

       while(!st.empty()){
        vector <int> v ;
        v  = st.top();
             st.pop();
        counter += 1;
        dfa_tab[state][0] = map_state[v];       //find transition of a state over input symbol 'a' and 'b'

        for(int i=0;i<v.size();i++){
            flag[v[i]] = false;
            int temp = nfa_table[v[i]][1];      //over input symbol a
            int temp1 = nfa_table[v[i]][2];     //over input symbol b
            if(temp>=0)
                v1.push_back(temp);
            if(temp1>=0)
                v3.push_back(temp1);
        }

        map <int,int> map_temp,map_temp1;  //to remove duplicate state
        map <int,int> ::iterator it;

        for(int i=0;i<v1.size();i++){
            v2 = eclosure(nfa_table,v1[i]);
            for(int j=0;j<v2.size();j++){
                map_temp[v2[j]] = 1;
            }
            v2.clear();
        }

        for(int i=0;i<v3.size();i++){
            v4 = eclosure(nfa_table,v3[i]);
            for(int j=0;j<v4.size();j++){
                map_temp1[v4[j]] = 1;
            }
            v4.clear();
        }


        for(it = map_temp.begin(); it != map_temp.end(); it++){
            v2.push_back(it->first);
            flag[it->first] = false;
        }

        for(it = map_temp1.begin(); it != map_temp1.end(); it++){
            v4.push_back(it->first);
            flag[it->first] = false;
        }

        if(v2.empty()){
            dfa_tab[state][1] = "--";
        } else {
            string t = map_state[v2];
            char flag1 = t[0];
            if( flag1 == 'q'){
                dfa_tab[state][1] = map_state[v2];   //checking v2 has already been mapped or not
            } else {
                dfa_tab[state][1] = state_name(j++);
                map_state[v2] = dfa_tab[state][1];
                check_init(v2,map_state[v2]);
                check_fin(v2,map_state[v2]);
           /*-     cout<<endl<<map_state[v2]<<" represents :- ";
                for(int i=0;i<v2.size();i++)
                    cout<<v2[i]<<" ";
                cout<<endl; */
                st.push(v2);                //not mapped state will be pushed into stack
            }
        }

        if(v4.empty()){
            dfa_tab[state][2] = "--";
        } else {
            string t = map_state[v4];
            char flag1 = t[0];
            if( flag1 == 'q'){
                dfa_tab[state][2] = map_state[v4];
            } else {
                dfa_tab[state][2] = state_name(j++);
                map_state[v4] = dfa_tab[state][2];
                check_init(v4,map_state[v4]);
                check_fin(v4,map_state[v4]);
               /* cout<<endl<<map_state[v4]<<" represents :- ";
                for(int i=0;i<v4.size();i++)
                    cout<<v4[i]<<" ";
                cout<<endl; */
                st.push(v4);
            }
        }
        v1.clear();
        v2.clear();
        v3.clear();
        v4.clear();
       state += 1;
    }

        int k = 1;
        for(k=1;k<states;k++){
            if(flag[k]){
                v = eclosure(nfa_table,k);
                map_state[v] = state_name(j++);
                check_init(v,map_state[v]);
                check_fin(v,map_state[v]);
                cout<<endl<<map_state[v]<<" represents :- ";
                for(int i=0;i<v.size();i++)
                    cout<<v[i]<<" ";
                cout<<endl;
                st.push(v);
                break;
            }
        }

        if(k == states)
                break;

    }

    //print_dfa_table(dfa_tab,state);     //function to print dfa table

    return state;


}

int simulator(string dfa_tab[][3],string word,int state)
{
    int len = word.length();
    string temp = init_dfa[0];
    bool check = check_valid(word); 
    if(!check){
        temp = "--";
    }

    int i=0;
    for(i=0;i<len;i++){
        if(temp == "--"){
            //cout<<endl<<"String does not belong to given regular expression."<<endl<<endl;
            return 0;
            break;
        } else {
            int _xtate;
            int j=0;

            for(j=0;j<state;j++){       //to find the index over which transition need to be performed.
                if(temp == dfa_tab[j][0])
                    break;
            }

            if(word[i]=='a'){
                temp = dfa_tab[j][1];
            } else if(word[i]=='b'){
                temp = dfa_tab[j][2];
            }
        }
    }

    if(i == len){
            int j=0;
        for(j=0;j<_b;j++){
            if(temp == fin_dfa[j]){
                //cout<<endl<<"String belongs to given regular expression."<<endl<<endl;
                return 1;
                //break;
            }
        }
        if(j==_b){
            //cout<<endl<<"String does not belongs to given regular expression."<<endl<<endl;
            return 0;
        }
    }/*else{
        cout<<endl<<"String does not belong to given regular expression."<<endl<<endl;
    }*/

}


int main(){
    
    int nfa_table[1000][col];
    initialise(nfa_table);
    int states=0;
    string s,word;
    ifstream file;
    string filename="input.txt";
    int line_number;
    file.open(filename);
    if(file.fail())
    {
        cout<<"File failed to open"<<endl;
    }
    int current_line=0;//to keep track of the line we're currently reading
    getline(file,s);
    current_line++;
    getline(file,word);
    file.close();
    //cout << "s is: " << s<<endl; 
    
    s=PositiveClosureToKleeneClosure(s);//(a)+ if exists gets replaced by (a)(a)*
    
    s=AddConcatenationSymbol(s);
    //cout<<"With question marks added to denote concatenation,the RE is "<<s;
    //cout<<endl;

    s=postfix(s);
    //cout<<"PostFix notation for the given RE is "<<s<<endl;

    states = reg_nfa(s,nfa_table);
    //print_nfa_table(nfa_table,states);

    string dfa_tab[states][3];
    int dfa_state = 0;
    dfa_state = nfa_dfa(nfa_table,states,dfa_tab);
    
    string word1;
    string ValidTokens_Echos;
    int bound=word.length();
    int i=0;
    while(i<word.length())
    {
        for(int j=0;j<bound;j++)
        {
            word1 = word.substr(i,bound-j);
            //cout << "String is: " << word1<<endl;
            //cout<<"does this satisfy?"<<simulator(dfa_tab,word1,dfa_state)<<endl;
            if(simulator(dfa_tab,word1,dfa_state))
            {
                ValidTokens_Echos.push_back('$');
                ValidTokens_Echos=ValidTokens_Echos.append(word1);
                //cout << "Output is: " << ValidTokens_Echos;
                i=word.length()-j;
                bound=j;
                break;
            }
            else
            {
                if(word1.length()==1)
            {
                ValidTokens_Echos.push_back('@');
                ValidTokens_Echos.append(word1);
                i=word.length()-j;
                bound=j;
                break;
            }
                
            }
            
        }
    }
    ValidTokens_Echos.push_back('#');
    ofstream file1;
    string filename1="output.txt";
    file1.open(filename1);
    file1 <<ValidTokens_Echos;
    
 return 0;
}



