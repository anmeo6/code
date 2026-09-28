#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream inp("DT.INP");
    ofstream out("DT.OUT");
    int t,n;
    inp>>t;
    if(t==1){
        inp>>n;
        int a[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                inp>>a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int j=1;j<=n;j++){
                if(a[i][j]==1) cnt++;
            }
            out<<cnt<<" ";
        }
    }
    else if(t==2){
        inp>>n;
        int a[n+1][n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                inp>>a[i][j];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i][j]==1){
                    cnt++;
                }
            }
        }
        int b[n][cnt]={0};int k=0;
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i][j]==1){
                    b[i][k]=1;
                    b[j][k]=1;
                    k++;
                }
            }
        }
        out<<n<<" "<<cnt<<endl;
        for(int u=0;u<n;u++){
            for(int v=0;v<cnt;v++){
                out<<b[u][v]<<" ";
            }
            out<<endl;
        }
    }
    inp.close();
    out.close();
    return 0;
}
