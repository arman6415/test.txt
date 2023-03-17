#include<stdio.h>
#include<math.h>

int main ()
{
    int num,originalnum,remainder,n=0,result=0;
    printf("enter the integer: ");
    scanf("%d",&num);
    
    originalnum=num;

    while (originalnum!=0){
        originalnum/=10;
        ++n;
    }
    originalnum=num;

    while(originalnum!=0){
        remainder = originalnum %10;
        result+=pow(remainder,n);
        originalnum/=10;
    }
    if (result == num)
        printf("%d is armstrong number\n",num);
    else
        printf("%d is not an arrmstrong number\n",num);
    return 0;
}