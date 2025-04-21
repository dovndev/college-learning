#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp;
    temp = num;
    while (temp > 0) { digits++; temp /= 10; }
    temp = num;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == original;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is Not an Armstrong number\n", num);
    return 0;
}
