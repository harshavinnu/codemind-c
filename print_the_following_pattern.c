#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)//row
    {
        for(j=n;j>=1;j--)//column
        {
            printf("%d ",j);
        }
        printf("
");
    }
}