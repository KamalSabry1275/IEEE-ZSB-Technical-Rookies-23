#include <stdio.h>
int n,t,cost=0,x,cont=0;
int main(){
    scanf("%i%i", &n, &t);
    while(n--){
            scanf("%i", &x);
            if(cost<t)cont++,cost+=(86400-x);
    }
    printf("%i\n", cont);
}
