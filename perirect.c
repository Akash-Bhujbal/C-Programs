#include<stdio.h>
int main()
{
    float l,b,perimeter;
    printf("enter l an b");
    scanf("%f%f",&l,&b);
    perimeter=2*(l+b);
    printf("perimeter is %f",perimeter);
    return 0;
}