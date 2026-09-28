#include <bits/stdc++.h>
using namespace std;
vector<int>b;
vector<vector<int>> edge;
int a[101][101];
int main(){
    ifstream inp("DT.INP");
    ofstream out("DT.OUT");
    int t;
    int n;
    inp>>t>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            inp>>a[i][j];
        }
    }
    if(t==1){
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int j=1;j<=n;j++){
                if(a[i][j]==1)  cnt++;
            }
            out<<cnt<<" ";
        }
    }
    else if(t==2){
        edge.clear();
        int cnt=0;
        out<<n<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]==1){
                    b.push_back(j);
                    cnt++;
                }
            }
            edge.push_back(b);
            for(auto x:edge){
                out<<cnt<<" ";
                for(int i=0;i<x.size();i++){
                    out<<x[i]<<" ";
                }
                out<<endl;
                edge.clear();b.clear();cnt=0;
            }
        }
    }
    inp.close();
    out.close();
    return 0;
}
