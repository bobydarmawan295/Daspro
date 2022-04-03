#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    printf("Bilangan Ganjil Menggunakan Perulangan FOR\n");
      for(int i = 1; i <= 100; i = i+2){
       if(i % 1 == 0)
         printf("%d\n", i);

    }
    printf("Bilangan Genap Menggunakan Perulangan FOR\n");
    for(int i = 1; i <= 100; i= i+1){
      if(i % 2 == 0)
         printf("%d\n", i);

    }
    return 0;
}
