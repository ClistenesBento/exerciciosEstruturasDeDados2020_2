#include<stdio.h>
#include<locale.h>
/*8.Escrever m linhas com i asteriscos alinhadas pela esquerda, onde i corresponde ao n�mero da linha corrente (algoritmo, c�digo). Exemplo: Para m=6 a sa�da do programa deve ser 
*
**
***
****
*****
******

*/

int main(){	
	setlocale(LC_ALL,"portuguese");
	
	int m;
	
	printf("## WELCOME ##\n\nPor gentileza digite o n�mero de linhas: ");
	scanf("%d",&m);
	
	printf("\n\n");	
	for(int i=0;i<m;i++){
		for(int j=0;j<i;j++){
			printf("* ");	
		}
		printf("\n");		
	}
	return 0;
}
