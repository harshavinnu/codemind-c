#include<stdio.h>
int main()
{
    int m,n,i; 
    scanf("%d%d",&n,&m); 
    for(i=1;i<=m;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,n*i);
            } 
    }
}