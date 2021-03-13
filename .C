#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
while(t--){
    int n,l,f,sum=0;
    scanf("%d",&n);
    l=n%10;
    while(n>10){
        n=n/10;
    }
    f=n;
    sum=l+f;
    printf("%d\n",sum);
    
}
    return 0;
}
