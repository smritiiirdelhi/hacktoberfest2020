#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float a1,b1;
    
    scanf("%d%d",&a,&b);
    scanf("%f%f",&a1,&b1);
    printf("%d",a+b);
    printf(" ");
    printf("%d\n",a-b);
    printf("%.1f",a1+b1);
    printf(" ");
    printf("%.1f\n",a1-b1);
    
    return 0;
}

