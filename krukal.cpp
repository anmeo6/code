#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000][1000];
int parent[100],sz[1000];
struct edge{
    int u,v,w;
};
void make_set(int n){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int find_set(int v){
    if(v==parent[v])    return v;
    return parent[v]=find_set(parent[v]);
}
bool union_set(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a==b)    return false;
    if(sz[a]<sz[b]) swap(a,b);
    parent[b]=a;
    sz[a]=sz[a]+sz[b];
    return true;
}
bool cmp(edge a,edge b){
    return a.w<b.w;
}
int main(){
    cin>>n>>m;
    vector<edge> E(m);
    for(int i=0;i<m;i++){
        cin>>E[i].u>>E[i].v>>E[i].w;
    }
    vector<edge> T;
    int total=0;
    make_set(n);
    sort(E.begin(),E.end(),cmp);
    for(auto e:E){
        if(T.size()==n-1)   break;
        if(union_set(e.u,e.v)){
            T.push_back(e);
            total += e.w;
        }
    }
    if(T.size()<n-1){
        cout<<"Do thi khong lien thong\n";
    }
    else{
        for(auto e:T){
            cout<<e.u<<" "<<e.v<<" "<<e.w<<endl;
        }
        cout<<"Trong so "<<total<<endl;
    }
    return 0;
}
