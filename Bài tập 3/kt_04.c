#include <stdio.h>
int main(){
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
	
	return 0;
}
