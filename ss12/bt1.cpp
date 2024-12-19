#include <stdio.h>
int main(){
	int n;
	while(1){
		printf("nhap so phan tu cua mang :");
		scanf("%d",&n);
		int arr[n];
		for(int i = 0 ; i<n;i++){
			printf("nhap so thu %d :", i+1);
			scanf("%d",&arr[i]);
		}
		if(n>0){
			int choice;
			int max ;
			printf("-------Menu--------\n");
			printf("1.in ra cac phan tu\n");
			printf("2.tim phan tu lon nhat\n");
			printf("nhap lua chon :");
			scanf("%d",&choice);
			switch(choice){
				case 1 :
					for(int i = 0 ; i < n ; i++){
						printf("%d\n",arr[i]);
					}
					break;
				case 2 :
					for(int i = 0 ; i < n ; i++){
						if(max < arr[i]){
							max = arr[i];
						}
					};
					printf("max la : %d\n",max);
					break;
					
					
			}
		}
	} 
	 
} 
