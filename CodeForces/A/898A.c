#include<stdio.h>
int main(){
    long long n,rem,q,ans;
    scanf("%lld", &n);
    rem=n%10;
    q=n/10;
    if (rem<=5){
        ans=q*10;
    }
    else{
        ans=(q+1)*10;
    }
    printf("%lld\n",ans);
    return 0;
}