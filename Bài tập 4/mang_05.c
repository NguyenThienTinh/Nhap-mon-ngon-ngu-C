#include <stdio.h>
 
int main(){

int n,m;
printf("Nhap so nguyen n: ");
scanf("%d", &n);

int a[n];
for (int i = 0; i < n; i++) 
{
printf("\nNhap phan tu thu %d: ", i + 1);
scanf("%d", &a[i]);
}

printf("\nNhap mang a: ");
for (int i = 0; i < n; i++)
printf(" %d", a[i]);

int b = 0;
printf("\nNhap so nguyen m ma ban muon: ");
scanf("%d", &m);
for(int i = 0; i < n; i++){
 if (a[i]==m) {
   b = b + 1;
 }
}
if (b > 0){
  printf("Co ton tai ");
}
else {
  printf("Khong ton tai");
}

  return 0;
}
