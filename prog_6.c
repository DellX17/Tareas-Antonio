//
//  Aarón Aguilar
//  
//  Punto 2 tarea 6
//  
//  03.04.2022
#include <stdio.h>

int main()
{
    int compara(char *cad){
char password[]="calor";
int i,s;
s=0;
for(i=0; i<5; i++){
s = s + abs(cad[i]-password[i]);
}
return s;
}
int tam = 5;
int tmp = 0;
int s = 1;
char pass[5];
while (s!=0){
for (int i = 0; i < tam; i++)
    {
      tmp = rand() % 78;
      pass[i] = tmp+'0';
    }
    
    s = compara(pass);
}
printf("Contraseña: %s", pass);
return 0;
}
