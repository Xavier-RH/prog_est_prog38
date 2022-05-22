/* Autor: Xavier Romero Hernández, Realizado: 17/03/2022 
	Programa que almacena las edades de un salon de clases de 10 alumnos: 
		-Imprimir 
		-Media
		-Varianza
		-Desviacion Estandar
		-Mediana
		-Ordenar por edad
	*/

#include <stdio.h>
#include <math.h>
#define MAX 10

int main(){
	int edades[MAX], aux, centro;
	float media, var, desv, mediana, suma=0;
	
	for(int i=0;i<=MAX-1;i++){
		printf("Ingresa la edad del alumno #%d: ",i);
		scanf("%d",&edades[i]);
	}
	//imprimir
	printf("\nLista de Alumnos\n");
	for(int i=0;i<MAX;i++){
		printf("Edad del alumno #%d: %d\n",i,edades[i]);
	}
	//media
	for(int i=0;i<=MAX;i++){
		suma=suma+edades[i];
	}
	media=(float)suma/MAX;
	printf("\nLa media es de %.2f\n",media);
	//varianza
	suma=0;
	for(int i=0;i<=MAX;i++){
		suma=suma+pow(edades[i]-media,2);
	}
	var=suma/MAX;
	printf("\nLa varianza es de %.2f\n",var);
	//desviacion estandar
	desv=sqrt(var);
	printf("\nLa desviacion estandar es de %.2f\n",desv);
	//ordenamiento del arreglo por el metodo de la burbuja
	for(int z = 1; z < MAX; ++z) {
      for(int v = 0; v < (MAX - z); v++) {
         if(edades[v] > edades[v+1]){
            aux = edades[v];
            edades[v] = edades[v + 1];
            edades[v + 1] = aux;
         }
      }
    }
	//imprimir
	printf("\nListado de Alumnos Ordenados\n");
	for(int i=0;i<MAX;i++){
		printf("Edad del alumno #%d: %d\n",i,edades[i]);
	}
	//mediana
	if(MAX%2==0){
		centro=MAX/2;
		mediana = (edades[centro]+edades[centro-1])/2.0;
	}
	else{
		centro=MAX/2;
		mediana = edades[centro];
	}
	printf("\nLa mediana es de %.2f\n",mediana);
	
	return 0;	
}
