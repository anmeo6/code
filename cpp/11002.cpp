#include <bits/stdc++.h>
using namespace std;
struct Node{
    string val;
    Node *left,*right;
    Node(string x){
        val=x;
        left=right=NULL;
    }
};
int tinh(Node *root){
    if(root->left==NULL&& root->right==NULL)
        return stoi(root->val);
    int l=tinh(root->left);
    int r=tinh(root->right);
    if(root->val == "+")    return l+r;
    if(root->val == "-")    return l-r;
    if(root->val == "*")    return l*r;
    return l/r;
}
void solve(vector<string>s){

    stack<Node *> st;
    Node *root;
    for(int i=(int)s.size()-1;i>=0;i--){
        if(s[i]=="+"||s[i]=="-"||s[i]=="*"||s[i]=="/"){
            Node *t1=st.top();st.pop();
            Node *t2=st.top();st.pop();
            Node *tmp=new Node(s[i]);
            tmp->left=t1;
            tmp->right=t2;
            st.push(tmp);
        }
        else{
            st.push(new Node(s[i]));
        }
    }
    root=st.top();
    cout<<tinh(root);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> s;
        string x;
        for(int i=0;i<n;i++){
            cin>>x;
            s.push_back(x);
        }
        solve(s);
        cout<<'\n';
    }
}
