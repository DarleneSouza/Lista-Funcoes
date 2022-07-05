#include <stdio.h>
int somaVetor(int vetor[], int tamanho){
	if(tamanho == -1){
		return 0;
	}
	return vetor[tamanho] + somaVetor(vetor,tamanho-1);
}

main(){
	int v[2];
	v[0]=2;
	v[1]=90;
	printf("%d",somaVetor(v,1));
	return 0;
}
