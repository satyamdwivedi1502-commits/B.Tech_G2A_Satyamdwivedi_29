#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T;
    float SI, CI, Amount;

    
    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    
    SI = (P * R * T) / 100;


    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    
    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);

    return 0;
}




















