#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n , m ,a;
    cin>>n>>m>>a;
    ll row , col;
    if(a>n) row =1;
    else {
        row = n/a;
        if(n%a>0 && n%a<a)  row++;
    }
    if(a>m) col =1;
    else{
        col = m/a;
        if(m%a>0 && m%a<a)  col++;
    }

    cout<< row*col;
    return 0;

}