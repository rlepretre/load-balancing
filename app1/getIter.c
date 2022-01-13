#include <stdio.h>
#include <stdlib.h>

struct complex
{
    float real;
    float imag;
};

int main(int argc, char *argv[])
{
    struct complex z;
    struct complex c;

    c.real = atof(argv[1]);
    c.imag = atof(argv[2]);

    int count, max;
    float temp, lengthsq;
    max = 100;
    z.real = 0;
    z.imag = 0;
    count = 0; /* number of iterations */
    do
    {
        temp = z.real * z.real - z.imag * z.imag + c.real;
        z.imag = 2 * z.real * z.imag + c.imag;
        z.real = temp;
        lengthsq = z.real * z.real + z.imag * z.imag;
        count++;
    } while ((lengthsq < 4.0) && (count < max));
    if(count < max){
        printf("0,%d", count);
    } else {
        printf("1,%d", count);

    }
    return count;
}