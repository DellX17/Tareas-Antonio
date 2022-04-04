//
//  Aarón Aguilar
//  
//  Media y varianza
//  
//  03.04.2022
#include <stdio.h>

int main()
{
    char str[6];
  int i = 0;
  printf ("Ingrese su contraseña (hasta 6 digitos, se tomara todo en minuscula): ");
  scanf ("%s", str);
  printf ("ASCII: ");
  for (int indice = 0; str[indice] != '\0'; ++indice){
		str[indice] = tolower(str[indice]);
	}
	str[1]="Y";
  while (str[i])
    printf ("%d ", str[i++]);
}
