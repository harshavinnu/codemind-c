#include<stdio.h>
int main()
{
    float g,b,p,d,h;
    scanf("%f%f%f",&b,&d,&h);
    p=(b)*0.12;
    g=b+p+d+h;
    printf("%0.2f
%.2f",p,g);
}