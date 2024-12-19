#include <stdio.h>

int binary_search_recursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] > target) {
        return binary_search_recursive(arr, left, mid - 1, target);
    }
    else {
        return binary_search_recursive(arr, mid + 1, right, target);
    }
}

int main() {
    int n, target;
    
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Nhap %d phan tu theo thu tu tang dan: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);
    
    int result = binary_search_recursive(arr, 0, n - 1, target);
    
    if (result != -1) {
        printf("Phan tu %d nam o vi tri: %d\n", target, result);
    } else {
        printf("Khong tim thay phan tu trong mang\n");
    }
    
    return 0;
}

