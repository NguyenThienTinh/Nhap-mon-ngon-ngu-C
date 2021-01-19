#include <stdio.h>
 
int main()
{
   //Khai bao bien
    int	n;
    printf ("Nhap so nguyen n: ");
    scanf("%d", &n);
    //Phan tu cua mang a
    int a[n];
    for(int i = 0; i < n ; i++) {
      printf("Nhap phan tu thu %d: ",i+1);
      scanf("%d", &a[i]);
    }
    //Các phần tử từ mảng a 
    printf("mang a: ");
    for (int i = 0; i < n; i++) {
      printf(" %d", a[i]);
    }
    //Hiển thị các số chẵn từ mảng a
    printf("\n So chan trong mang a: ");
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0){
        printf(" %d", a[i]);
      }
    }
    printf("\n So le trong mang a: ");
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 != 0){
        printf(" %d", a[i]);
      }
    }
     return 0;

}
