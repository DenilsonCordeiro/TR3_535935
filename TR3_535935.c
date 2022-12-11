#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//Variáveis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################
   	
   	//AREA DE CODIGO DO ALUNO
    for (i = 0; i < 200; i++){
        x[i] = 0;
    }  
    //enquanto usuario nao digita '-1', pedir numeros
   	printf("digite um numero(n)\n");
   	while (1){
        printf("n: ");
      	scanf("%d", &z);
        if (z == -1){
            break;
        }
    //considera cada numero como array com base nos bits ativos
    //determina, dentro da array de inteiros, em qual array de bits esta o numero
        k = (z/32);
        x[k] = x[k]|1<<(z-(k*32));    
   	}
    //eu checo em que posicao voce esta na tanto no array de inteiro como no de bits
    //imprimo o valor de j + todas as casas percorridas ate chegar o numero desejado
    for (i=0; i<=199; i++){
        for (j=0; j<=31; j++){
            if ((x[i] & 1<<j) == 1<<j){
                printf("%d,", j+(32*i));
            }
        }
    }     	
   	//#########################
	return 0;  
}
    
