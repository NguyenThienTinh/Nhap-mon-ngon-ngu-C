#include <stdio.h>

int main(void) {
//KHAI BAO BIEN
  int n;
  printf("Nhap Bang Cuu Chuong Ma Ban Muon");
  scanf("%d", &n);
   for(int i = 1; i <= n; i++){
     printf("Bảng Nhân %d\n", i);
    for (int j = 0; j <= 4; j++){
      printf("\t%d * %d = %d\n", i, j, i*j);
      } 
    }  
 //XUAT KET QUA 	
  return 0;
}
