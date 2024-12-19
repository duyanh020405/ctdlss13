#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    
    int arr[n];
    int freq[n];
    
    printf("Nhap %d phan tu: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; 
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; 
        }
    }
    

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("Phan tu %d xuat hien %d lan\n", arr[i], freq[i]);
            found = 1;
        }
    }
    
    if (!found) {
        printf("Khong co phan tu lap lai\n");
    }
    
    return 0;
}

