#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans = "";
    unordered_set<char> set;
    set.insert('a');
    set.insert('e');
    set.insert('i');
    set.insert('o');
    set.insert('u');
    set.insert('y');
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(char c: s){
        if(set.find(c)==set.end()){
            ans = ans + '.' + c;
        }
    }
    cout<<ans;
}