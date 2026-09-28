#include <stdio.h>
int main(){
    int a;
    int ngay,tuan,nam;
    scanf("%d",&a);
    if(a>365){
        nam=a/365;
        int b=a%365;
        if(b!=0 && b<=7){
            ngay=a%356;
            tuan=0;
        }
        else if(b!=0 && b>7){
            tuan=b/7;
            int c=tuan%7;
            if(c!=0){
                ngay=c;
            }
            else{
                ngay=0;
            }
        }
        else{
            ngay=0;
            tuan=0;
        }
    }
    else{
        nam=0;
        tuan=a/7;
        int b=a%7;
        if(b!=0){
            ngay=b;
        }
        else{ngay=0;}
    }
    printf("%d %d %d",nam,tuan,ngay);

}