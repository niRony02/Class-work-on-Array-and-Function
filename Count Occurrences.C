#include <stdio.h>

int countOccurrences(int x, int arr[], int y) {
    int cnt = 0;
    for (int i = 0; i < x; ++i) {
        if (y == arr[i]) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[x + 20];
    for (int i = 0; i < x; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", countOccurrences(x, arr, y));

return 0;
}

