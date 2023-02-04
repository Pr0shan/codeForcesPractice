#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int vectors[n][3];
    for(int i=0;i<n;i++){
        cin>>vectors[i][0]>>vectors[i][1]>>vectors[i][2];
    }
    int sum=0;
    for(int i =0 ;i<3;i++){
        for(int j=0;j<n;j++){
            sum+=vectors[j][i];
        }
        if(sum!=0) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}