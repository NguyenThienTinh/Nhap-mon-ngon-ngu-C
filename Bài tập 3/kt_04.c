CODE Không dùng vòng lặp
#include <stdio.h>
int main(){
//KHAI BAO BIEN 
int n,a,S=0;

	printf("Nhap so n =  "); scanf("%d",&n);
// chia lay so du VD: 123 / 10 =12.3 ( được 12 dư 3)
// Buoc 1:
	a = n % 10; 
	S= S + a ;
	n/= 10;
// Buoc 2:	
	a = n % 10; 
	S= S + a ;
	n/= 10;
// Buoc 3:	
	a = n % 10; 
	S= S + a ;
	n/= 10;
		
	printf("%d\n",S);
//XUAT KET QUA	
	return 0;
}
CODE Dùng vòng lặp
#include <stdio.h>
int main(){
//KHAI BAO BIEN 
int n,a,S=0;

	printf("Nhap so n =  "); scanf("%d",&n);
  for (;n > 0; a++) {
	a = n % 10; 
	S= S + a ;
	n/= 10;  
	printf("%d\n",S);

  }
  //XUAT KET QUA	
	return 0;
}
VÒNG LẶP WHILE
#include <stdio.h>
int main(){
//KHAI BAO BIEN 
int n,a,S=0;

	printf("Nhap so n =  "); scanf("%d",&n);
  while  (n != 0) {
	a = n % 10; 
	S= S + a ;
	n/= 10;
  
	printf("%d\n",S);

  }
  //XUAT KET QUA	
	return 0;
}
