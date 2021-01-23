//Khoi khai bao
#include <stdio.h>
//Bien toan cuc khoi tao toan chuong trinh 
 float a,b,c;
 float Tim_so_lon_nhat();
 //Khoi ham main
int main()
{
  printf("Nhap so a ma ban muon = ");
  scanf("%f",&a );

  printf("Nhap so b ma ban muon = ");
  scanf("%f",&b );

  printf("Nhap so c ma ban muon = ");
  scanf("%f",&c );
  Tim_so_lon_nhat();

  return 0;
}
//Khoi dinh nghia ham
float Tim_so_lon_nhat() {
  if( a > b && a > c)
  printf("%.1f",a);
  if( b > c && b > a )
  printf("%.1f",b);
  if( c > b && c > a)
  printf("%.1f",c);
  return 0;
}
