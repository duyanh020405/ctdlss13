#include <stdio.h>

int main() {
    int n; 
    int a, b;
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
        for(int i = 0 ; i<n ; i++){
        	 a = arr[i];
        	for(int k = i+1 ; k<n ; k++){
        		if(a == arr[k]){
        			printf("doi xung : ( %d , %d )",arr[i],arr[k]);
				}
			}
		}
         

    }

    return 0;
}

