#include<stdio.h>
#include<math.h>
int main(){
    float x,y,z,dutmoi;
    int k;
    scanf("%f %f %f %d",&x,&y,&z,&k);
    float tong=x+y+z;
    float m=30-tong;
    printf("%f\n",tong);
    if(tong<22.5){
        if(k==1) printf("0.75");
        else if(k==2) printf("0.5");
        else printf("0");
    }
    else{
        if(k==1){
            float dut=0.75;
            dutmoi=(m/7.5)*dut;
            printf("%.2f",dutmoi);
        }
        else if(k==2){
            float dut=0.5;
            dutmoi=(m/7.5)*dut;
            dutmoi=round(dutmoi*100)/100;
            printf("%.2f",dutmoi);
        }
        else{
            float dut=0;
            dutmoi=dut;
            printf("%.2f",dutmoi);
        }
    }
}