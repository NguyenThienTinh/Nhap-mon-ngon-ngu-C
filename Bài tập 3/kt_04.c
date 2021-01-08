#include <stdio.h>
int main(){
//KHAI BAO BIEN 
int n,a,S=0;

	printf("Nhap so n =  "); scanf("%d",&n);
    // chia lay so du VD: 123 / 10 =12.3 ( được 12 dư 3)
	a = n % 10; 
	S= S + a ;
	n/= 10;
	
	a = n % 10; 
	S= S + a ;
	n/= 10;
	
	a = n % 10; 
	S= S + a ;
	n/= 10;
		
	printf("%d\n",S);
//XUAT KET QUA	
	return 0;
}
