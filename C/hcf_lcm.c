#include <stdio.h>

int hcf(int num1, int num2);

int main() {
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    result = hcf(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, result);
    printf("LCM of %d and %d is %d\n", num1, num2, num1*num2/result);
    return 0;
}

// int hcf(int num1, int num2) {
//     if (num2 == 0) {
//         return num1;
//     } else {
//         return hcf(num2, num1 % num2);
//     }
// }
int hcf(int num1, int num2) {
    int temp;
    while (num2 != 0) {
        temp = num1;
        num1 = num2;
        num2 = temp%num2;
    }
    return num1;
}