#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 

{ 
  const int Low=-100, High=100;
  int col=0;
  printf("Введіть кількість елементів масиву\n");
  scanf("%d", &col);
  int a[col];
  srand(time(0)); 

  for (int i=0; i<col; i++)//Задаєм випадкові числа
  { 
    a[i]=Low+rand()%(High-Low+1);
  }  
  for (int i=0; i<col; i++)
  { 
	printf("\n");   
    printf("a[%d]=%3d\t", i, a[i]);
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