#include<stdio.h> 
int main() 
{     
    int a,hr,min,sec;    
    scanf("%d",&a);    
    hr=a/3600;     
    min=(a%3600)/60;     
    sec=a%60;    
    printf("H:M:S-%d:%d:%d",hr,min,sec); 
    
}