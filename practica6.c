/*Practica 6*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i; float suma=0, num, prom=0, n;
	printf("Ingrese un numero");
	scanf("%f",&n);
	i=0;
	while(i<=1000 && n>=0 &&num>0){
		//flush(stdin);
		printf("Digite un numero");
		scanf("%f",&num);
		suma+= num;
		i++;
	}
	prom=suma/i;
	printf("La suma de los numeros es: %.2f\n",suma);
	printf("El promedio es: %.2f\n\n\n\n\n",prom);
	system("pause");
	return 0;
}
