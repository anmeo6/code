#include <bits/stdc++.h>
using namespace std;
int K,N;
int A[100];
vector<int> currect_path;
int count=0;
void tapcon(){
    cin >>N>>K;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    for(int i=0;i<N;i++){
        cout<<A[i];
    }
}
int main(){
    tapcon();
}
