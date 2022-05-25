//
//  Aarón Aguilar
//  
//  Minimizar función con el método de búsqueda aleatoria
//  
//  20.03.2022

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
int main(void){	
	float yminima = 0;
	float fx = 0;
    float x = 0;
	float xminima = 1000;
	int attemps = 10000;
	
	srand(time(NULL)); 
		
	for(int i=0; i<attemps; i++){	
	    //x = (float)rand() % 21;   //  0 21
        //float x = ((float)rand()/(float)(RAND_MAX)) * 20;
     	x = rand() % 2001;  //Aleatorio hasta 2001
     	x = x/100;          //Aleatorio 10 a 20
		x = x - 10;         //Aleatorio -10 a 10
 	    fx = (x-1.23)*(x-1.23);
 	    printf("Muestras: = %f\n", x);
 	    if(fx<xminima){
 		    xminima=fx;
 		    yminima=x;
    }
 	
    }printf("función minimizada por búsqueda aleatoria: x = %f y = %f\n", yminima, xminima);
	
	return 0;
}
