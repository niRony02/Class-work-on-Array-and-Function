/*Task 07: Reverse Array
Define a function reverseArray that takes an array of integers and its size as arguments and reverses the array.
The function doesn't need to return a value (it should alter the array in place and print them).*/

#include <stdio.h>

void reverse_array(int n, int arr[]) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n + 20];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    reverse_array(n, arr);

    return 0;
}
