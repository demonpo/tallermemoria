#include <stdlib.h>

void mifuncion(void){

   int *z;

   z = (int *)malloc(25);
   free(z);

}

void main(){

   mifuncion();

}
