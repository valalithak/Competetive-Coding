#include <stdio.h>
int main(){
    int n,i,countp=0,countn=0;
    long long x,y;
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        scanf ("%lld %lld", &x, &y);
        if (x>0)
        countp++;
        else
        countn++;
    }
    if (countp<=1 || countn<=1)
    printf("Yes\n");
    else
    printf ("No\n");
    return 0;
}