#include <stdio.h>
#include <math.h>
    int main()
{
    float x,y,f;
    printf("x=");
    scanf("%g",&x);
    printf("y=");
    scanf("%g",&y);
    f=(x*x+log2(x*y)-y*y)/(1+x*x+y*y);
    printf("f=%g", f); 
    return 0;

}
