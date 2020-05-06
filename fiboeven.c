#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    long int sum,n;
    a=1;
    b=1;
    printf("Enter the range :\n");
    scanf("%ld",&n);
    for(c=1,sum=0;c<=n;c=a+b)
    {
        if(c%2==0)
        {
            sum+=c;
        }
        a=b;
        b=c;
    }
 printf("sum=%ld",sum);
    
    return 0;
}
