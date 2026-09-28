#include <bits/stdc++.h>
using  namespace std;
struct Node{
    int val;
    Node *left,*right;
    Node(int v){
        val=v;
        left=right=NULL;
    }
};
void makeNode(Node *root,int u,int v,char c){
    if(c=='L')  root->left=new Node(v);
    if(c=='R')  root->right=new Node(v);
}
void insert(Node *root,int u,int v,char c){
    if(root==NULL)  return;
    if(root->val==u){
        makeNode(root,u,v,c);
    }
    insert(root->left,u,v,c);
    insert(root->right,u,v,c);
}
int hight(Node *root){
    if(root==NULL)  return 0;
    return 1+max(hight(root->left),hight(root->right));
}
bool check(Node *root,int lv,int h){
    if(root==NULL)  return true;
    if(root->left==NULL && root->right==NULL && lv<h)   return false;
    return check(root->left,lv+1,h)&& check(root->right,lv+1,h);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        Node *root=NULL;
        while(n--){
            int u,v;char c;
            cin>>u>>v>>c;
            if(root==NULL){
                root=new Node(u);
                makeNode(root,u,v,c);
            }
            else{
                insert(root,u,v,c);
            }
        }
        int h=hight(root);
        if(check(root,1,h)){
            cout<<1;
        }
        else    cout<<0;
        cout<<'\n';
    }
}
