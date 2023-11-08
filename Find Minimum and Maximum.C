/*Task 05: Find Minimum and Maximum
Create two functions: findMin and findMax.
Each should take an array of integers and the array's size and return the minimum and maximum value, respectively.
 */

#include <stdio.h>
int findMin(int arr[], int size)
{
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        }
    return min;
    }
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
}
    return max;
}
int main() {
    int size;
        scanf("%d", &size);
    int arr[size];
        printf("Enter the numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Minimum value of array: %d\n", findMin(arr, size));

    printf("Maximum value of array: %d\n", findMax(arr, size));
return 0;
}

