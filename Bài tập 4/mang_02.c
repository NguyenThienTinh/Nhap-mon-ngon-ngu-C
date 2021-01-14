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
      printf("Nhap phan tu cua a: ");
      scanf("%d", &a[i]);
    }
    //Các phần tử từ mảng a 
    for (int i = 0; i < n; i++) {
      printf("%d", a[i]);
    }
    //Hiển thị các số chẵn từ mảng a
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0){
        printf("\n So chan trong mang a %d", a[i]);
      }
    }
     return 0;

}
