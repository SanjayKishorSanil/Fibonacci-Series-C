#include <stdio.h>

int main()
{
    
    int i=0,x;
    printf("enter fibo num:\n");
    scanf("%d",&x);
    printf("Fibonacci series\n");
    for(c=1;c<=x;c++){
        printf("%d\t",Fibonacci(i));
        i++
    }
    return 0;
}

int Fibonacci(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (Fibonacci(n-1)+Fibonacci(n-2));
}
    
