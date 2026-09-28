#include<bits/stdc++.h>
using namespace std;
struct Node{
    char c;
    Node *left,*right;
    Node(char x){
        c=x;
        left=right=NULL;
    }
};
bool check(char c){
    return c=='+'|| c=='-'||c=='*'||c=='/';
}
void isOder(Node *root){
    if(root==NULL)   return;
    isOder(root->left);
    cout<<root->c;
    isOder(root->right);
}
void slove(string s){
    stack<Node *> st;
    Node *pt;
    for(int i=s.length()-1;i>=0;i--){
        if(!check(s[i])){
            st.push(new Node(s[i]));
        }
        else{
            Node *tmp=new Node(s[i]);
            Node *t1=st.top();st.pop();
            Node *t2=st.top();st.pop();
            tmp->left=t1;
            tmp->right=t2;
            st.push(tmp);
        }
    }
    pt=st.top();
    isOder(pt);
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        slove(s);
        cout<<endl;
    }
    return 0;
}
