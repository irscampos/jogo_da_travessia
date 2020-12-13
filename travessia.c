#include <stdio.h>
#include<stdbool.h>

bool hrgm[4] = {false,false,false, false};
bool y=false;
char dir[2][8] = {"Direita","Esquerda"};
int cursor,cont = 0;		
		
int main(void){
	
	while((!y)){
		//hrgm[0] = !hrgm[0];
		printf("Escolha quem trocar de lado:\n0 - Homem - Esta na %s \n1 - Raposa - Esta na %s \n2 - Galinha - Esta na %s \n3 - Milho - Esta na %s \n",dir[hrgm[0]],dir[hrgm[1]],dir[hrgm[2]],dir[hrgm[3]]);
		scanf("%d",&cursor);
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