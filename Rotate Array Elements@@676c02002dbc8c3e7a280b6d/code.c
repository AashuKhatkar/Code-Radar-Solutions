#include <stdio.h>
void rotateRight(int arr[], int r, in k) {
    k %= n;
   for (int i = 0; i < k; i++) {
        int temp = arr[n-1];
        for (int j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d", arr[i]);
    printf("\n");
}
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    printArray(arr, n);
    rotateRight(arr, n, k);
    printArray(arr, n);

    return 0;
}