#include <iostream>
#include <stack>
#include <unordered_map>

// INFIX TO POSTFIX....

using namespace std;

int main() {
    stack<char> s;
    unordered_map<char, int> mp = {
        {'(', 0}, 
        {'+', 1}, {'-', 1}, 
        {'*', 2}, {'/', 2}, 
        {'^', 3}
    };
    
    string post;
    cin >> post;
    
    post = "(" + post + ")";
    string res; 
    
    for(auto ch : post) {
        if(ch == '(') {
            s.push('(');
        } 
        else if(ch == ')') {
            while(!s.empty() && s.top() != '(') {
                res.push_back(s.top());
                s.pop();
            }
            if(!s.empty()) s.pop(); 
        } 
        else if(mp.find(ch) != mp.end()) {
           
            while(!s.empty() && s.top() != '(' && mp[s.top()] >= mp[ch]) {
                res.push_back(s.top());
                s.pop();
            }
            s.push(ch);
        } 
        else {
            res.push_back(ch);
        }
    }
    
    cout << res;
    return 0;
}
