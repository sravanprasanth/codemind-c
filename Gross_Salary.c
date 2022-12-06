#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    float b;
    scanf("%d",&a);
    if(a<=10000)
    {
        b=a+a*0.8+a*0.2;
        printf("%0.2f",b);
    }
    else if(a<=20000)
    {
        b=a+a*0.9+a*0.25;
        printf("%0.2f",b);
    }
    else if(a>20000)
    {
         b=a+a*0.95+a*0.3;
         printf("%0.2f",b);
    }
}

