#include<iostream>
#include<cmath>
using namespace std;
const int MAX=1000000;
bool snt[MAX+1];
void sang(){
    for(int i=0;i<=MAX;i++){
        snt[i]=true;
    }
    snt[0]=snt[1]=false;
    for (int i=2;i*i<=MAX;i++){
        if(snt[i]){
            for(int j=i*i;j<=MAX;j+=i){
                snt[j]=false;
            }
        }
    }
}
int main(){
    sang();
    int n;
    cin>>n;
    while(n--){
        long long N;
        cin>>N;
        int k=0;
        for(long long a=2;a<=MAX;a++){
            if(snt[a]){
                long long c=a*a;
                if (c<=N){
                    k++;
                }
                else{
                    break;
                }
            }
        }
        cout<<k<<endl;
    }
}
