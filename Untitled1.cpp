int thuannghich(long long n){
    long long m=0,ss=n;
    while(n!=0){
        m=m*10+n%10;
        n=n/10;
    }
    if(m==ss) return 1;
    return 0;
}
int main(){
    int x;
    scanf("%d",&x);
    if(thuannghich(x)){
        printf("YES");
    }
    else{printf("NO");}
}

