/*
 @autor: Milan Bojic 1127/09
 
 @uputstvoZaPrevodjenje: pokrenuti make koji se nalazi u korjenskom folderu projekta
 
 @OpisZadatka: Направити модул који представља двоструко спрегнуту листу. Модул извести као динамичку
библиотеку (дељени објекат). Ослањајући се на тај модул направити модул који представља ред.
Дељени објекат који садржи двоструко спрегнуту листу динамички повезати током извршавања.
 */

#include "../fifo/fifo.h"
#include <stdio.h>

int main()
{
  char m = 'T';
  char i = 'e';
  char l = 's';
  char a = 't';
  
  List* fifo = Fifo_create();

  push(fifo, &m);
  push(fifo, &i);
  push(fifo, &l);
  push(fifo, &a);

  char* s = (char*)pop(fifo);
  while(s != NULL)
  {
    printf("%c\nNa steku je ostalo %d elemenata\n",*s, Fifo_count(fifo));
    s = (char*)pop(fifo);
  }
  
  char* test = "Test";
  push(fifo,test);
  printf("%s\n",(char*)pop(fifo));    
}