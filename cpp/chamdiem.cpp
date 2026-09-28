#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;
int main (){
    int t;
    cin>>t;
    char de101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    char de102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    while (t--)
    {
        int made;
        char s[15]; 
        double k=0;
        int n=15;
        cin>>made;
        for(int j=0;j<n;j++){
            cin>>s[j];
        }
        if(made==101){
            for(int i=0;i<n;i++){
                if(s[i]==de101[i]){
                    k++;
                }
            }
        }
        else if(made==102){
            for(int i=0;i<n;i++){
                if(s[i]==de102[i]){
                    k++;
                }
            }
        }
        double diem=(k/n)*10;
        cout<<fixed<<setprecision(2)<<diem<<endl;
    }
    return 0;
}