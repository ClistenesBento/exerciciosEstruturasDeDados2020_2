#include<stdio.h>

/* 2.Crie um vetor de 20 posi��es com a seguinte sequencia num�rica
2,4,6,8,10,... 
Ap�s o preenchimento imprima o vetor
*/

int main(){
	
	int vetor[20];
	for(int i=0;i<20;i++){
		vetor[i]=i*2+2;
	}
	for(int i=0;i<20;i++){
		printf("%d, ",vetor[i]);
	}
	return 0;
}
