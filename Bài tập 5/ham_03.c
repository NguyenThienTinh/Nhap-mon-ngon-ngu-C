//Khoi khai bao
#include<stdio.h>

int n, i, sum = 0, sochan = 0, sole = 0, sokhong;//biến toàn cục( sử dụng cho toàn chương trình )
void  Nhap_pt_mang(int a[]);
void  Hien_thi_pt_mang(int a[]);
void  Hien_thi_tong_chan(int a[]);
void  Dem_chan_le_0(int a[]);
//khoi ham main
int main() { 

  printf("Nhap n: ");
  scanf("%d", &n);
  int a[n];

Nhap_pt_mang(a);
Hien_thi_pt_mang(a);
Hien_thi_tong_chan(a);
Dem_chan_le_0(a);
  return 0;
}

// khoi dinh nghia ham
void  Nhap_pt_mang(int a[]) {
  for(i = 0; i < n; i++) {
    printf("Nhap phan tu thu %d: " ,i);
    scanf("%d", &a[i]);
 }
}
void  Hien_thi_pt_mang(int a[]) {
  printf("Mang a: ");
  for(i = 0; i < n; i++ ) {
  printf(" %d", a[i]);
  }
}
void  Hien_thi_tong_chan(int a[]) {
  for(i = 0; i < n; i++) {
    if (a[i] % 2 == 0){
      sum = sum + a[i];
    }
  }
    printf("\nSum = %d ", sum);
} 
void  Dem_chan_le_0(int a[]) {
 for(i = 0; i < n; i++) {
   if (a[i] % 2 == 0 && a[i] > 0) {
     sochan++;
   }
 }
 printf("\nso luong cua so chan: %d", sochan);

 for(i = 0; i < n; i++) {
   if (a[i] % 2 != 0) {
     sole++ ;
   }
 }
  printf("\nso luong cua so le: %d", sole);
 for(i = 0; i < n; i++) {
   if (a[i] == 0){
   sokhong++;
   }
 }
 printf("\nSo luong cua so khong: %d", sokhong); 
 }
