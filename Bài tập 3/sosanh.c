#include <stdio.h>

int main () {
	//khai bao bien a va b
	int a , b;
	printf (" nhap gia tri a\n");
	//Nhap gia tri bat ki ma ban muon 
	 scanf("%d", &a);
	 
	 printf (" nhap gia tri b\n");
	 scanf("%d", &b);
	// Bien a > b
	if(a > b) {
    	printf("a>b");
	}
	// Bien a == b
	 else if (a==b){
	 	printf("a = b");
	 }
	// Bien a < b
	else{
		printf("a < b");
	}
	// Xuat ket qua 
	getchar();	
	return 0;	 
}
