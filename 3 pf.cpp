#include <stdio.h>
#include<math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realpart, imaginarypart;
    
    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c; 

    if (discriminant > 0) {
        printf("\n Two Real Roots");
    }
    else if (discriminant == 0) {
        printf("One Real Root");
    }
    else {
        printf("Imaginary Roots");
    }

    return 0;
}

