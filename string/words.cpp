#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string word="";
    vector<string> words;
    string result;
    string s;
    int c=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            if(!word.empty()){
            words.push_back(word);
            word.clear();
            }
        
        }
        else{
            word+=s[i];
        }
        if(i==s.length()-1){
            words.push_back(word);
            word.clear();
        }
    }
    cout<<words.size();
    return 0;
}