#include <stdio.h>

int main (void){

char str[10];
int num;

printf("Escrible algo :\n");
fgets(str,10,stdin);
sscanf(str,"%i",&num);
printf("La cadena es: %i",num);
return 0;




}