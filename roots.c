#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, dis, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = pow(b,2)-4*a*c;

    
    if (dis > 0) {    // real and different roots
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    
    else // for 2 equals roots

     if (dis == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    
    else {  // roots are not defined
        realPart = -b / (2 * a);
        imagPart = sqrt(-dis) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 