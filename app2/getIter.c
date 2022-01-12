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

    printf("il y a %d args: %s et %s\n", argc, argv[1], argv[2]);
    c.real = atof(argv[1]);
    c.imag = atof(argv[2]);

    printf("x = %f et y = %f\n", c.real, c.imag);

    int count, max;
    float temp, lengthsq;
    max = 1000;
    z.real = 0;
    z.imag = 0;
    count = 0; /* number of iterations */
    do
    {
        temp = z.real * z.real - z.imag * z.imag + c.real;
        z.imag = 2 * z.real * z.imag + c.imag;
        z.real = temp;
        lengthsq = z.real * z.real + z.imag * z.imag;
        // printf("%d\n",lengthsq);
        count++;
    } while ((lengthsq < 4.0) && (count < max));
    printf("Il y a %d itérations", count);
    return count;
}