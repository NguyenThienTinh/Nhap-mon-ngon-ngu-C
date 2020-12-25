#include<stdio.h>

int main()
{
    //khai bao bien n và nhap n tu ban phim
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    //Dieu kien cua n
    for(int i = 1; i <= n; i++){
       for(int j = 1; j <= n; j++)
          printf(" ");
       for(int x = 1; x <= i; x++)
          printf(" %d",x);
        printf("\n");
    // Xuat ke qua
    }
       
    return 0;
}
