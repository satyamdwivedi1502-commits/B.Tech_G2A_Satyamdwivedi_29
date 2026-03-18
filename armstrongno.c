#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, result, digits;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for(num = 1; num <= 100; num++) {
        temp = num;
        result = 0;

        
        digits = 0;
        int t = num;
        while(t != 0) {
            t /= 10;
            digits++;
        }

        temp = num;

        
        while(temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, digits);
            temp /= 10;
        }

        if(result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}