#include<stdio.h>
int factorial(int a)
{
    if(a==1)
     return 1;
     else 
     return a*factorial(a-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=factorial(n);
    printf("%d",x);
}