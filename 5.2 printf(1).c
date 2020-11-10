#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 

{ 
  const int col = 5;  
  int a[col];

  for (int i=0; i<col; i++)
  { 
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
  }  
  for (int i=0; i<col; i++)
  {  
    printf("a[%d]=%d\t", i, a[i]);
  }         
  int max = a[0];         
  for(int i = 0; i < col; i++) //Пошук максимального числа
  {             
    if(a[i] > max)            
    max = a[i];
  }
  int id;
for(int i = 0; i < col; i++) //обчислення індекса макс. числа
{
  if(max==a[i])
  id = i+1;
}
 printf("\nПорядковий номер максимального числа = %d\t", id);
}       