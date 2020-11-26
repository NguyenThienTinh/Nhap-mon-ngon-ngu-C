#include <stdio.h>

int main (void){
	//khai bao bien R kieu double 
	double R;
	R = 2.5;
		
	//Khai bao PI kieu double
	double PI =3.14;
	
	//Chu vi va dien tich  
	printf("Chu vi\t   Dien Tich\n");
	
	//khai bao CV va DT
	double CV , DT;
	
	//Gan va ep kieu double CV  
	CV =(double) 2*R*PI;
	DT =(double) R*R*PI;
	
	//Xuat ket qua 
	printf("%g\t   %g",CV,DT);
	
	
	return 0;
}
