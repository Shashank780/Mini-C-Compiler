#include <bits/stdc++.h>
#include <fstream>
#include <stack>
#include <string.h>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int binary1=1;
int binary0=0;
vector<vector<int>> init(50,vector<int> (20)),fin(50,vector<int> (20));
vector<int> a(50,0);
vector<int> b(50,0);
vector<vector<std::string>> init_dfa(50,vector<std::string>(30)),fin_dfa(50,vector<std::string>(30));
vector<int> abc1(50,0),abc2(50,0);

void reduce_fin(int x,int z){
    for(int i=x; i<b[z]-1; i++)
        fin[z][i] = fin[z][i+1];
        b[z] -= binary1;
        int final=0;
        for(int i=0;i<10;i++)final++;
}

int nineseven=97;
int nineeight=98;
char lbracket='(';
char rbracket=')';
char star='*';
char pole='|';
char plus='+';
char aaaa='a';
char bbbb='b';
char dot='.';

int bracketpos(const std::string& s, int pos) {
    std::stack<char> st;
    st.push(s[pos]);

    int j = pos - 1;

    while (!st.empty()) {
        if (s[j] == rbracket) {
            st.push(s[j]);
        } else if (s[j] == lbracket) {
            st.pop();
        }
        j--;
    }

    int opening_bracket_pos = j + 1;
    return opening_bracket_pos;
}

std::string removeplus(std::string s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == '+') {
            int opening_bracket_pos = bracketpos(s, i - 1);
            std::string word1 = s.substr(opening_bracket_pos, i - opening_bracket_pos);
            s.replace(opening_bracket_pos, i - opening_bracket_pos, word1 + star);
            i += 1;
        }
    }
    return s;
}

std::string processregex(const std::string& s) {
    std::string x;
    x.reserve(s.length() * 2); // Reserve space for the worst-case scenario

    x += lbracket;
    for (size_t i = 0; i < s.length() - 1; i++) {
        x += s[i];

        if ((s[i] == aaaa || s[i] == bbbb) && (s[i+1] == aaaa || s[i+1] == bbbb) ||
            s[i] == rbracket && s[i+1] == lbracket ||
            (s[i] == aaaa || s[i] == bbbb) && s[i+1] == lbracket ||
            s[i] == rbracket && (s[i+1] == aaaa || s[i+1] == bbbb) ||
            s[i] == star && (s[i+1] == lbracket || s[i+1] == aaaa || s[i+1] == bbbb))
        {
            x += dot;
        }
    }
    x += s.back();
    x += rbracket;

    return x;
}

string reg2postfix(const string& s) {
    const int l = s.length();
    string a;
    stack<char> ch;
    int j = binary0;
    for (int i = binary0; i < l; i++) {
        const char x = s[i];
        if (x == aaaa || x == bbbb) {
            a.push_back(x);
            j++;
        } else if (x == lbracket) {
            ch.push(x);
        } else if (x == rbracket) {
            while (!ch.empty() && ch.top() != lbracket) {
                a.push_back(ch.top());
                ch.pop();
                j++;
            }
            if (!ch.empty()) {
                ch.pop();
            }
        } else if (x == dot) {
            while (!ch.empty() && (ch.top() == dot || ch.top() == star || ch.top() == ' ')) {
                a.push_back(ch.top());
                ch.pop();
                j++;
            }
            ch.push(x);
        } else if (x == pole) {
            while (!ch.empty() && (ch.top() == dot || ch.top() == star || ch.top() == pole || ch.top() == ' ')) {
                a.push_back(ch.top());
                ch.pop();
                j++;
            }
            ch.push(x);
        } else if (x == '*') {
            while (!ch.empty() && (ch.top() == '*' || ch.top() == ' ')) {
                a.push_back(ch.top());
                ch.pop();
                j++;
            }
            ch.push(x);
        }
    }
    while (!ch.empty()) {
        a.push_back(ch.top());
        ch.pop();
        j++;
    }
    return a;
}

int reg_nfa(string s,vector<vector<int>>& nfa_table,int z){
    int two=2,three=3;
    int l = s.length();
    int states = binary1;
    int m,n,j,counter;
    for(int i=binary0;i<l;i++)
    {
        char x = s[i];
        if(x==aaaa){
                nfa_table[states][binary0] = states;
                init[z][a[z]++] = states++;
                nfa_table[states-binary1][binary1] = states;
                fin[z][b[z]++] = states;
                nfa_table[states][binary0] = states++;
        }
        else if(x==bbbb){
            nfa_table[states][binary0] = states;
            init[z][a[z]++] = states++;
            nfa_table[states-binary1][two] = fin[z][b[z]++] = states;
            nfa_table[states][binary0] = states++;
        }
        else if(x==dot){
            int m = fin[z][b[z]-2];
            int n = init[z][--a[z]];
            nfa_table[m][3] = n;
            reduce_fin(b[z]-2,z);
        }
        else if(x==pole){
            for(j=a[z]-binary1,counter=binary0;counter<two;counter++)
                      {
                        m = init[z][j-counter];
                        nfa_table[states][three+counter]=m;
                      }
                      a[z]=a[z]-two;
                      init[z][a[z]]=states;
                      a[z] += binary1;
                      nfa_table[states][binary0] = states;
                      states += binary1;
                      for(j=b[z]-binary1,counter=binary0;counter<2;counter++)
                      {
                        m = fin[z][j-counter];
                        nfa_table[m][three]=states;
                      }
                      b[z]=b[z]-two;
                      fin[z][b[z]]=states;
                      b[z] += binary1;
                      nfa_table[states][binary0] = states;
                      states += binary1;
        }
        else if(x==star){
            m = init[z][a[z]-binary1];
                      nfa_table[states][three] = m;
                      nfa_table[states][binary0] = states;
                      init[z][a[z]-binary1] = states;
                      int four=4;
                      states += binary1;
                      n = fin[z][b[z]-binary1];
                      nfa_table[n][three]=m;
                      nfa_table[n][four]=states;
                      nfa_table[states-binary1][four]=states;
                      fin[z][b[z]-binary1]=states;
                      nfa_table[states][binary0]=states;
                      states += binary1;
        }
    }
  return states;
}

vector<int> EpsilonClosure(const vector<vector<int>>& nfa_table, const int start_state) {
    vector<int> result;
    stack<int> state_stack;
    unordered_set<int> visited_states;

    state_stack.push(start_state);

    while (!state_stack.empty()) {
        int current_state = state_stack.top();
        state_stack.pop();

        if (visited_states.find(current_state) != visited_states.end()) {
            continue;
        }
        visited_states.insert(current_state);
        result.push_back(current_state);

        if (nfa_table[current_state][3] != -1) {
            state_stack.push(nfa_table[current_state][3]);
        }
        if (nfa_table[current_state][4] != -1) {
            state_stack.push(nfa_table[current_state][4]);
        }
    }

    return result;
}

long long int map_it(const vector<int>& v, int y) {
    long long int result = 0;
    long long int base = 1;

    // Compute the base for each digit.
    for (int i = 0; i < y; i++) {
        base *= 10;
    }

    // Multiply each element of the vector by the appropriate base and add to result.
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        result += *it * base;
        base *= 10;
    }

    return result;
}

string getStateName(int number) {
    const int base = 10;
    const char prefix = 'q';
    std::string result = { prefix };

    if (number == 0) {
        result += '0';
        return result;
    }

    while (number > 0) {
        int digit = number % base;
        result += static_cast<char>(digit + '0');
        number /= base;
    }

    std::reverse(result.begin() + 1, result.end());
    return result;
}

void check_initialstate(vector <int> v, string s,int z){
    for(int i=binary0;i<v.size();i++){
        if(v[i] == init[z][0]){
            init_dfa[z][abc1[z]] = s;
            abc1[z] += binary1;
        }
    }
}

void check_finalstate(vector <int> v, string s,int z){
    for(int i=binary0;i<v.size();i++){
        if(v[i] == fin[z][0]){
            fin_dfa[z][abc2[z]] = s;
            abc2[z] += binary1;
        }
    }
}

bool check_valid(const string& word) {
    for (const char& c : word) {
        if (c != 'a' && c != 'b') {
            return false;
        }
    }
    return true;
}

string dashh="--";
bool FFFF=false;
bool TTTT=true;
int hehe2=2;

int nfa_dfa(vector<vector<int>>& nfa_table,int goofyahh,vector<vector<std::string>>& dfa_tab,int z){
    int states=goofyahh;
    int goofball=goofyahh;
    bool flag[goofball];
    memset(flag,true,sizeof(flag));

    int state = binary0,j = binary0;
    map <vector<int>,string> map_state;
    vector <int> v,v1,v2,v3,v4;

    v = EpsilonClosure(nfa_table,init[z][binary0]);
    flag[init[z][a[z]]] = FFFF;

    map_state[v] = getStateName(j++);
    check_initialstate(v,map_state[v],z);
    check_finalstate(v,map_state[v],z);


    stack < vector<int> > st;
    st.push(v);
    int counter = binary0;
    while(TTTT){

       while(!st.empty()){
        vector <int> v ;
        v  = st.top();
             st.pop();
        counter += binary1;
        dfa_tab[state][binary0] = map_state[v];

        int i = binary0;
        while(i < v.size()) {
            flag[v[i]] = FFFF;
            int temp = nfa_table[v[i]][binary1];      
            int temp1 = nfa_table[v[i]][hehe2];     
            if(temp>=binary0)
                v1.push_back(temp);
            if(temp1>=binary0)
                v3.push_back(temp1);
            i++;
        }

        map <int,int> map_temp,map_temp1;
        map <int,int> ::iterator it;

            i = binary0;
            while(i < v1.size()){
                v2 = EpsilonClosure(nfa_table, v1[i]);
                int j = binary0;
                while(j < v2.size()){
                    map_temp[v2[j]] = binary1;
                    j++;
                }
                v2.clear();
                i++;
            }

        i = binary0;
        while (i < v3.size()) {
            v4 = EpsilonClosure(nfa_table, v3[i]);
            int j = binary0;
            while (j < v4.size()) {
                map_temp1[v4[j]] = binary1;
                j++;
            }
            v4.clear();
            i++;
        }

        for(auto const& [key, value] : map_temp) {
            v2.push_back(key);
            flag[key] = FFFF;
        }

        for(auto const& [key, value] : map_temp1){
            v4.push_back(key);
            flag[key] = FFFF;
        }

        if(v2.empty()){
            dfa_tab[state][binary1] = dashh;
        } else {
            string t = map_state[v2];
            char flag1 = t[binary0];
            if( flag1 == 'q'){
                dfa_tab[state][binary1] = map_state[v2]; 
            } else {
                dfa_tab[state][binary1] = getStateName(j++);
                map_state[v2] = dfa_tab[state][binary1];
                check_initialstate(v2,map_state[v2],z);
                check_finalstate(v2,map_state[v2],z);
                st.push(v2);
            }
        }
        
        int binary2=2;
        
        if(v4.empty()){
            dfa_tab[state][binary2] = dashh;
        } else {
            string t = map_state[v4];
            char flag1 = t[binary0];
            switch(flag1){
                case 'q':
                    dfa_tab[state][binary2] = map_state[v4];
                    break;
                default:
                    dfa_tab[state][binary2] = getStateName(j++);
                    map_state[v4] = dfa_tab[state][binary2];
                    check_initialstate(v4,map_state[v4],z);
                    check_finalstate(v4,map_state[v4],z);
                    st.push(v4);
                    break;
            }
        }
        v3.clear();
        v4.clear();
        v1.clear();
        v2.clear();
       state += binary1;
    }

        int k = binary1;
        for(k=binary1;k<states;k++){
            if(flag[k]){
                v = EpsilonClosure(nfa_table,k);
                map_state[v] = getStateName(j++);
                check_initialstate(v,map_state[v],z);
                check_finalstate(v,map_state[v],z);
                cout<<endl<<map_state[v]<<" represents :- ";
                for(int i=binary0;i<v.size();i++)
                    cout<<v[i]<<" ";
                cout<<endl;
                st.push(v);
                break;
            }
        }

        if(k == states)
                break;

    }
    goofyahh=states;
    return goofyahh;
}

int simulator(vector<vector<string>>& dfaTab, string word, int state,int z) {
    int len = word.length();
    string temp = init_dfa[z][binary0];
    bool isValid = check_valid(word); 

    if (!isValid) {
        temp = "--";
    }

    for (int i = 0; i < len; i++) {
        if (temp == "--") {
            return 0;
        } else {
            int j = 0;
            for (j = 0; j < state; j++) {
                if (temp == dfaTab[j][0]) {
                    break;
                }
            }

            if (word[i] == 'a') {
                temp = dfaTab[j][1];
            } else if (word[i] == 'b') {
                temp = dfaTab[j][2];
            }
        }
    }

    for (int j = 0; j < abc2[z]; j++) {
        if (temp == fin_dfa[z][j]) {
            return 1;
        }
    }

    return 0;
}

void regexbettererererererererer(string& sus){
    string betterthis=sus;
    betterthis=removeplus(betterthis);
    betterthis=processregex(betterthis);
    betterthis=reg2postfix(betterthis);
    sus=betterthis;
}

const int BINARY_ZERO = 0;
const int BINARY_ONE = 1;

// Open the input file and return whether the file was opened successfully
bool open_input_file(std::ifstream& file, const std::string& fname) {
    file.open(fname);
    if(file.fail()) {
        std::cerr << "Failed to open file " << fname << '\n';
        return false;
    }
    return true;
}

// Read a line of input from the input file
std::string read_input(std::ifstream& file) {
    std::string input;
    std::getline(file, input);
    return input;
}

int main(){
    std::vector<int> final_states;
    std::vector<int> initial_states;
    std::set<int> total_states;
    std::ifstream file;
    std::string input_file_name = "input.txt";
    if(!open_input_file(file, input_file_name)) {
        return 1;
    }
    int total=std::stoi(read_input(file));
    vector<std::string> regex(total);
    for(int i=0;i<total;i++)regex[i]=read_input(file);
    std::string word=read_input(file);
    file.close();
    
    vector<vector<vector<int>>> nfa_table(total,vector<vector<int>> (5000,vector<int> (5,-1)));
    
    for(int i=0;i<total;i++)regexbettererererererererer(regex[i]);
    
    vector<int> nfa_states(total,1);
    for(int i=0;i<total;i++)nfa_states[i]=reg_nfa(regex[i],nfa_table[i],i);
    
    vector<vector<vector<std::string>>> dfa_table (total,vector<vector<std::string>>(100,vector<std::string>(3)));
    vector<int> dfa_state(total,0);
    for(int i=0;i<total;i++)dfa_state[i]=nfa_dfa(nfa_table[i],nfa_states[i],dfa_table[i],i);
    
    std::string valid_tokens_echos;
    int word_length = word.length();
    int i = BINARY_ZERO;
    int bound = word_length;
    while(i < word_length) {
        int hell=0;
        for(int j = BINARY_ZERO; j < bound; ++j) {
            hell=0;
            std::string current_word = word.substr(i, bound - j);
            for(int z=0;z<total;z++){
                if(simulator(dfa_table[z], current_word, dfa_state[z],z)) {
                    // Match found, add to output string and update loop variables
                    valid_tokens_echos += '$';
                    valid_tokens_echos += (char)(z+49);
                    i = word_length - j;
                    bound = j;
                    hell=1;
                    break;
                } else if(current_word.length() == BINARY_ONE) {
                    // Single character token, add to output string and update loop variables
                    valid_tokens_echos += '@';
                    valid_tokens_echos += current_word;
                    i = word_length - j;
                    bound = j;
                    hell=1;
                    break;
                }
            }
            if(hell==1)break;
        }
    }
    // Add end of output delimiter
    valid_tokens_echos += '#';

    // Write output to file
    std::ofstream output_file;
    std::string output_file_name = "output.txt";
    output_file.open(output_file_name);
    output_file << valid_tokens_echos;
    return 0;    
}





