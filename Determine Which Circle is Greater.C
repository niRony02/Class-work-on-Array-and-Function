/*Task 04: Determine Which Circle is Greater
Write a function findArea that takes one integers as parameter and returns the area of circle.
In main function take two radius as inputs and print the area of greater circle. */

#include<stdio.h>

float findArea(int rad)
{
    return 3.1416*rad*rad;
}
int main() {
    int rad1, rad2;

    printf("Radius of the first circle: ");
        scanf("%d", &rad1);

    printf("Radius of the second circle: ");
        scanf("%d", &rad2);

    float area1 = findArea(rad1);
    float area2 = findArea(rad2);


(area1 > area2) ? printf("Area1 is greater: %.3f\n", area1) : printf("Area2 is greater: %.3f\n", area2);
    return 0;
}
