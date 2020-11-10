#include <stdio.h> 
#include <stdlib.h>  
#include <time.h> 

int main(void) 
{ 
int n=0, m=0;
printf("Введіть розмірність матриці для рядка і стовпчика\nn = ");
scanf("%d",&n);
printf("m = ");
scanf("%d",&m);
int a[n][m]; 
for (int i = 0; i < n; i++) 
for (int j = 0; j < m; j++) 
{
    printf("a[%d][%d]=", i, j); 
    scanf("%d", &a[i][j]);
}
printf("\n");
for (int i = 0; i < n; i++) 
{  
  for (int j = 0; j < m; j++) 
   printf("a[%d][%d]=%d\t", i, j, a[i][j]); 
   printf("\n\n");    
}
int ch1,ch2,x1,x2,y1,y2;
printf("Введіть координати для двух чисел\nx1 = ");
scanf("%d",&x1);
printf("y1 = ");
scanf("%d",&y1);
ch1=a[x1][y1];
printf("x2 = ");
scanf("%d",&x2);
printf("y2 = ");
scanf("%d",&y2);
ch2=a[x2][y2];
printf("Перше число = %d\nДруге число = %d\n",ch1,ch2);
if(ch1>ch2)
{
  printf("Максимальне число = %d",ch1);
}
else if(ch2>ch1)
{
  printf("Максимальне число = %d",ch2);
}
else
{
  printf("Два числа одинакові = %d",ch1);
}
   return 0; 
}