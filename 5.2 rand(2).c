#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 

{ 
  const int Low=-100, High=100;
  int col;
  printf("Введіть кількість елементів масиву\n");
  scanf("%d",&col);
  int ma,mi,d;  
  int a[col];
  srand(time(0)); 

  for (int i=0; i<col; i++)//Задаєм випадкові числа
  { 
    a[i]=Low+rand()%(High-Low+1);
  }  
  for (int i=0; i<col; i++)
  {  
    printf("a[%d]=%d\n", i, a[i]);
  }         
int min = a[0];
int max = a[0];
for(int i=0; i<col; i++)
{
  if(a[i]==0)
  {
    min=a[i];
  }
}
for(int i=0; i<col; i++)
{
  if(min==a[i])
  {
    mi=i;
  }
}
for(int i=col-1; i>=0; i--)
{
  if(a[i] == 0)
   {
   max = a[i];
   }
}
for(int i=col-1; i>=0; i--)
{
  if(max==a[i])
   {
   ma=i;
   }
}
for(int i=ma; i<mi; i++)
{
    d+=a[i];
}
if(min!=0 && max!=0)
{
  printf("У масиві нема нулів, нема що рахувати\n");
}
else if(mi==ma)
{
  printf("У масиві тільки один нуль\n");
}
else
  {
    printf("Сума елементів масиву між двома нулями --- %d\n\n",abs(d));

  }
}