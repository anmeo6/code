#include <stdio.h>
void sapxep(int mangso[],int n){
    int k;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (mangso[j]>mangso[j+1]){
                k=mangso[j];
                mangso[j]=mangso[j+1];
                mangso[j+1]=k;
            }
        }
    }
}
int main (){
    int n;
    scanf("%d",&n);
    int sogoc[100];
    int chan[100];
    int le[100];
    int sochan=0,sole=0;
    for(int i=0;i<n;i++){
        scanf("%d",&sogoc[i]);
    }
    for(int i=0;i<n;i++){
        if(sogoc[i]%2==0){
            chan[sochan]=sogoc[i];
            sochan++;
        }
        else{
            le[sole]=sogoc[i];
            sole++;
        }
    }
    sapxep(chan,sochan);
    sapxep(le,sole);
    for(int i=0;i<sochan;i++){
        printf("%d ",chan[i]);
    }
    for(int i=0;i<sole;i++){
        printf("%d ",le[i]);
    }
}