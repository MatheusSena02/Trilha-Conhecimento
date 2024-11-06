#include <stdio.h>

float maior(float num1, float num2)
    {
        if(num1 > num2)
        {
            return num1;
        }else 
        {
            return num2;
        }
    }

int main()
{
    float x, y, m;
    printf("Insira dois valores : ");
    scanf("%f %f", &x, &y);
    m = maior(x,y);
    printf("Maior : %2.f\n", m);
}