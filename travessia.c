#include <stdio.h>
#include<stdbool.h>		//	PARA A MANIPULACAO DE UM ARRAY DE BOOLEANOS

bool hrgm[4] = {false,false,false, false};	//	POSICAO DE HOMEM, RAPOSA, GALINHA E MILHO RESPECTIVAMENTE
bool y=false;		//	SE 1, JOGADOR FEZ MOVIMENTO PROIBIDO
char dir[2][8] = {"Direita","Esquerda"};
int cursor,cont = 0;		//	CURSOR PARA MOVIMENTO E QUANTIDADE DE RODADAS DECORRIDAS
		
int main(void){
	
	while((!y)){
		printf("Escolha quem trocar de lado:\n0 - Homem - Esta na %s \n1 - Raposa - Esta na %s \n2 - Galinha - Esta na %s \n3 - Milho - Esta na %s \nOutra opcao - sair\n",dir[hrgm[0]],dir[hrgm[1]],dir[hrgm[2]],dir[hrgm[3]]);
		scanf("%d",&cursor);
		if((cursor>3)||(cursor<0)){
			printf("Jogador optou por sair. Adeus!\n");
			break;
		}
		hrgm[cursor] = !hrgm[cursor];
		
		y = ((!hrgm[0])*(hrgm[2])*(hrgm[3]))||
			((!hrgm[0])*(hrgm[1])*(hrgm[2]))||
			((hrgm[0])*(!hrgm[2])*(!hrgm[3]))||
			((hrgm[0])*(!hrgm[1])*(!hrgm[2]));
		
		printf("%d\n",y);
		cont++;
		if(hrgm[0]*hrgm[1]*hrgm[2]*hrgm[3]){
			printf("PARABENS, VOCE VENCEU!\n");
			break;
		}
	}
	printf("Numero de tentativas: %d\n",cont);
	system("pause");
	return 0;
}
