#include<stdio.h>
#include<math.h>

/*4.Crie um vetor de 20 posi��es com a seguinte sequencia num�rica
2,4,8,16,32,...
Ap�s o preenchimento imprima o vetor
*/

int main(){
	
	int vetor[20];
	for(int i=1;i<=20;i++){
		vetor[i-1]=pow(2,i);
	}
	for(int i=0;i<20;i++){
		printf("%d, ",vetor[i]);
	}
	return 0;
}
