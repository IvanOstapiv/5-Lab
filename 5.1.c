#include <stdio.h> 
#include <stdlib.h>  
#include <time.h>

int main(void) 

{ 
int colCount;
int i,k,min,r,h;
int a[i];
int abs(int h);
printf("Введіть кількість елементів масиву\n");
scanf("%d",&colCount);
for(int i = 0; i < colCount; i++) 
 { 
  printf("a[%d]=", i);
  scanf("%d", &a[i]);
 }
 int max = 0;         
 for(int i = 0; i < colCount; i++)             
     {
      if(a[i] > max)             
      max = a[i];
     }
     printf("%d --- Максимальний елемент масиву\n",max);
     min=a[0];
 for(int i = 1; i < colCount; i++)
     {
       if(a[i] < min)             
       min = a[i];
     }
     h=min-max;
 printf("%d --- Мінімальний елемент масиву\n",min);
 printf("%d --- Модуль різниці макс. та мін. елементів мас.",abs(h));
}