/*Elabore um algoritmo para dado um n�mero N, inteiro e positivo, obter os N primeiros termos da seguinte sequ�ncia (sequ�ncia
de Fibonacci) : 1, 1, 2, 3, 5, 8, 13... */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");  
	
	int a,n,i,b,c;
	
	a = 1;
	b = 0;
	c = 1;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&n);
	
	for( i= 1; i<= n; i++ )
		
	{
		
	c = a+b;
	a = b;
	b = c;	
	
	printf(" %d ",c);
	
	}
	
	
}
