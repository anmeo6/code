#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int A[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<3;j++)
            if(A[i][j]-1==0){
                k++;
            }
        if(k>=2){
            count++;
        }
    }
    cout<<count;

}