#include <stdio.h>
int main() {
  // khai bao bien dongia,soluong,thanhtien
  int dongia,soluong,thanhtien;
  // Nhap don gia 
  printf ("Xin vui long ban nhap don gia  = "); scanf("%d",&dongia);
  // Nhap so luong   
  printf ("Xin vui long ban nhap so luong =  "); scanf ("%d",&soluong);
  
  if (soluong <5){
  thanhtien = dongia * soluong;
  printf("Thanh tien \n");
  printf("%d",thanhtien);	
  }
  
  else if (soluong>=5 && dongia >= 500){
  	//các loai hàng hóa duoc giam giá 50% neu so luong mua tu 5 san pham tro len
  thanhtien = (dongia*soluong)*50/100;
  	printf("thanh tien \n");
  	printf ("%d",thanhtien );
  }
  // Xuat ket qua 
  getchar ();
  return 0;
}
