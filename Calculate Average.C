#include<stdio.h>

float avg(float a, float b) {
    return (a + b) / 2;
}

int main() {
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    float average = avg(num1, num2);
    printf("Average = %0.3f", average);

    return 0;
}
