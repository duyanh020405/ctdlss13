#include <stdio.h>

int main() {
    int n; 
    while (1) {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So phan tu phai lon hon 0. Vui long nhap lai.\n");
            continue;
        }
        int arr[n];
        for (int i = 0; i < n; i++) {
            printf("Nhap so thu %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        int choice;
        printf("-------Menu--------\n");
        printf("1. In ra cac phan tu\n");
        printf("2. Tim phan tu lon nhat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Cac phan tu trong mang la:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d\n", arr[i]);
                }
                break;

            case 2: {
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                printf("Phan tu lon nhat la: %d\n", min);
                break;
            }

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
                break;
        }
    }

    return 0;
}

