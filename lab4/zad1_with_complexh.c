#include <stdio.h>
#include <complex.h>

int main() {

    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;

    double complex suma = z1 + z2;
    double complex roznica = z1 - z2;
    double complex iloczyn = z1 * z2;
    double complex sprz_z1 = conj(z1);
    double complex sprz_z2 = conj(z2);

    printf( "z1 = %.2f%+.2fi\t\tz2 = %.2f%+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));
    printf("z1 + z2 = %.2f%+.2fi\n", creal(suma), cimag(suma));
    printf("z1 - z2 = %.2f%+.2fi\n", creal(roznica), cimag(roznica));
    printf("z1 * z2 = %.2f%+.2fi\n", creal(iloczyn), cimag(iloczyn));
    printf("z1 = %.2f%+.2fi\n", creal(sprz_z1), cimag(sprz_z1));
    printf("z2 = %.2f%+.2fi\n", creal(sprz_z2), cimag(sprz_z2));

    return 0;
}
