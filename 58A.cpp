#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector <char> vector;
    for(char c: s){
        if(c=='h' && vector.empty())    vector.push_back(c);
        else if(c=='e' && vector.size()==1) vector.push_back(c);
        else if(c=='l' && vector.size()==2) vector.push_back(c);
        else if(c=='l' && vector.size()==3) vector.push_back(c);
        else if(c=='o' && vector.size()==4){
            vector.push_back(c);
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}