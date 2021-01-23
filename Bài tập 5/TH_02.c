#include <stdio.h>
 
int main()
{
//Khai bao bien
    int n, sum = 0;
    printf("Nhap n ban muon: ");
    scanf("%d", &n);
//Vong lap for 
    for(int i = 1; i <= n; i++) {
      sum = sum + i;
    }
  printf("S = 1 + 2 + 3 + .... + %d: = %d ", n, sum);

//Xuat ket qua
  return 0;
}
