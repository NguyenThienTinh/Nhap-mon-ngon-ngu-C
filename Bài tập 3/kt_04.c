#include <stdio.h>
int main(){
//KHAI BAO BIEN 
int n,a,S=0;

	printf("Nhap so n =  "); scanf("%d",&n);
    
	a = n % 10; 
	S+= a ;
	n/= 10;
	
	a = n%10; 
	S += a;
	n /= 10;
	
	a = n%10; 
	S += a;
	n/= 10;
		
	printf("%d\n",S);
//XUAT KET QUA	
	return 0;
}
