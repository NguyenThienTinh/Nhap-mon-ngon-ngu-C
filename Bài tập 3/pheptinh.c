#include <stdio.h>
int main(){
	//Khai bao bien a,b
  int a = 6, b = 3;
  	// Kieu ki tu 
  char pt;
  printf ("vui long moi ban nhap phep tinh vao may tinh ");
  scanf ("%c",&pt);
  switch(pt) {
  	// Phep tinh +
    case '+': 
	 printf (" a + b = %d",a + b);
      break;
    // Phep tinh - 
  	case '-':
	 printf (" a - b = %d",a - b);
      break;
      default:
       printf(" Moi ban nhap phep + hoac - ");
  }
  //Xuat ket qua 
  return 0;
}
