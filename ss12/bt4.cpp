#include <stdio.h>
#include <string.h> 

struct Object {
    char name[50];  
    int number;     
};

int main() {
    struct Object obj;
    int n;
    char find[50];
    printf("nhap so n :");
    scanf("%d",&n);
    struct Object arr[n];
    for(int i = 0 ; i<n ; i++){
    	printf("nhap ten cua arr[%d] :" ,i+1 );
    	scanf("%s",&arr[i].name);
    	printf("nhap diem :" ,arr[i].name );
    	scanf("%d",&arr[i].number);
	}
	printf("nhap ten can tim kiem : ");
	scanf("%s",&find);
	for(int i = 0 ; i<n ; i++){
		if(strcmp(find, arr[i].name) == 0){
			printf( "diem la : %d" , arr[i].number);
		}
	}
    return 0;
}


