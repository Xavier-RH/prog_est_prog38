/* Autor: Xavier Romero Hernández, Realizado: 17/03/2022 
	Programa que almacena las edades de un salon de clases de 10 alumnos
	El Programa Calculara:
		-La media
		-Varianza
		-Desviacion estandar
		-mediana
		-ordenar por edad
*/
	
#include <stdio.h>
#include <math.h>

#define MAX 3

int main(){
	
	int edades[MAX], suma=0, aux, centro;
	float media, var, desviacion, mediana;
	
	for (int i=0;i<MAX;i++){
		printf("Introduce la edad del alumno #%d:",i+1);
		scanf("%d",&edades[i]);
	}
	
	printf("\nListado de Alumnos\n");
	for (int i=0;i<MAX;i++){
		printf("Edad del alumno #%d: %d\n",i+1,edades[i]);
	}
	
	for(int i=0;i<MAX;i++){
		suma=suma+edades[i];
	}
	
	media=(float)suma/MAX;
	printf("\nLa media es %.2f\n",media);
	
	suma=0;
	
	for(int i=0;i<MAX;i++){
		suma=suma+pow((edades[i]-media),2);
	}
	var=suma/MAX;
	printf("La varianza es %.2f\n",var);
	
	desviacion=sqrt(var);
	printf("La desviacion estandar es %.2f\n",desviacion);
	
	for(int z = 1; z < MAX; ++z) {
		for(int v = 0; v < (MAX - z); v++) {
         	if(edades[v] > edades[v+1]){
            	aux = edades[v];
            	edades[v] = edades[v + 1];
            	edades[v + 1] = aux;
         }
      }
    }
    
    printf("\nListado de Alumnos\n");
	for (int i=0;i<MAX;i++){
		printf("Edad del alumno #%d: %d\n",i+1,edades[MAX]);
	}
	
	if(MAX%2==0){
		centro=MAX/2;
		mediana = (edades[centro]+edades[centro-1])/2.0;
	}
	else{
		centro=MAX/2;
		mediana=edades[centro];
	}
	printf("La mediana es %.2f\n",mediana);
	
	return 0;
}
