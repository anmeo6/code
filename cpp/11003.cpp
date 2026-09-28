#include <bits/stdc++.h>
using namespace std;
int n,in[1000],pre[1000];
struct Node{
    int val;
    Node *left,*right;
    Node(int x){
        val=x;
        left=right=NULL;
    }
};
int timkiem(int in[],int x,int n){
    for(int i=0;i<n;i++){
        if(in[i]==x)
            return i;
    }
    return -1;
}
void postOrder(int in[],int pre[],int n){
    int root=timkiem(in,pre[0],n);
    if(root!=0) postOrder(in, pre+1,root);
    if(root!=n-1)   postOrder(in+root+1,pre+1+root,n-root-1);
    cout<<pre[0]<<" ";
}
void makeNode(Node *root,int u,int v,char c){
    if(c=='L')  root->left=new Node(v);
    if(c=='R')  root->right=new Node(v);
}
void insert(Node *root,int u,int v,char c){
    if(root==NULL)  return;
    if(root->val==u)    makeNode(root,u,v,c);
    insert(root->left,u,v,c);
    insert(root->right,u,v,c);
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>in[i];
        }
        for(int i=0;i<n;i++){
            cin>>pre[i];
        }
        postOrder(in,pre,n);
        cout<<'\n';
    }
}
