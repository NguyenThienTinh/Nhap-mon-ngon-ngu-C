#include <stdio.h>
 
int main()
{
   //Khai bao bien
    int	n,s=0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
      int a[n];

    for(int i = 0; i < n; i++){
      printf("Nhap phan tu n %d: ", i + 1 );
      scanf("%d", &a[i]);
    }
        printf("Cac phan tu trong mang a: ");
    for(int i = 0; i < n; i++){
      printf(" %d",a[i]);
       s = s + a[i];
    }
        printf("\nTong cac con so trong mang = %d",s);
     return 0;
}
