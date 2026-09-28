long long sothuannghich(int n[]){
    int m=0,so=n;
    while(n!=0){
        m=m*10+n%10;
        n=n/10;
    }
    if(m==so){return 1;}
    return 0;
}
long long sochan(int k[]){
    int
}
int main(){
    int x;
    scanf("%d",&x);
    if(sothuannghich(x))
        printf("YES");
    
    else
        printf("NO");
    
}