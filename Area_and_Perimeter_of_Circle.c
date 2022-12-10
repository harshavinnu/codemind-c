#include<stdio.h>
float area(int r)
{
    float c;
    c=3.14*r*r;
    return c;
}
    float perimeter(int r)
{
    float c;
    c=2*3.14*r;
    return c;
}
int main()
{
    int r;
    scanf("%d",&r);
    float x1=area(r);
    printf("%.2f
",x1);
    float x2=perimeter(r);
    printf("%.2f
",x2);
}

