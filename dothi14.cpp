#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t>>n;
    int matrix[n+1][n+1];
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>> matrix[i][j];
            if(matrix[i][j]==1) k++;
        }
    }
    if(t==1){
        vector<int> a;
        vector<int> b;
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int j=1;j<=n;j++){
                if(matrix[i][j]==1)
                    cnt++;
            }
            b.push_back(cnt);
        }
        for(int j=1;j<=n;j++){
            int cnt=0;
            for(int i=1;i<=n;i++){
                if(matrix[i][j]==1)  cnt++;
            }
            a.push_back(cnt);
        }
        for(int k=0;k<n;k++){
            cout<<a[k]<<" "<<b[k]<<endl;
        }
    }
    else if(t==2){
        cout<<n<<" "<<k<<endl;
        int mx[n+1][k+1];
        memset(mx,0,sizeof(mx));
        vector<pair<int,int>> edge;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(matrix[i][j]==1){
                    edge.push_back({i,j});
                }
            }
        }
        for(int i=1;i<=k;i++){
            int m=1;
            for(auto x:edge){
                if(x.first==i){
                    mx[i][m]=1;
                    m++;
                }
                else if(x.second==i){
                    mx[i][m]=-1;
                    m++;
                }
                else{
                    m++;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                cout <<mx[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}