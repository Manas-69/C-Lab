#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, dis, r1, r2, real, imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = pow(b,2)-4*a*c;

    
    if (dis > 0) {    // real and different roots
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("root 1 = %.2lf and root 2 = %.2lf", r1, r2);
    }

    
    else // for 2 equals roots

     if (dis == 0) {
        r1 = r2 = -b / (2 * a);
        printf("root 1 = root 2 = %.2lf;", r1);
    }

    
    else {  // roots are not defined
        real = -b / (2 * a);
        imag = sqrt(-dis) / (2 * a);
        printf("root 1 = %.2lf+%.2lfi and root 2 = %.2f-%.2fi", real, imag, real, imag);
    }

    return 0;
} 