#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    long long int i,n,arr[100],sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&arr[i]);
}
    
    for(i=0;i<n;i++){
        sum=sum+arr[i];
}
    
        printf("%lld",sum);
}
