#include<stdio.h>
void decBin(int n){
	printf("decBin(%d)\n",n);getch();
	if(n==0){
	printf("caso base\n");
	return ;
	}
	decBin(n/2);
	printf("%d ",n%2);getch();

	
	
}

main(){
		int i;
		printf("digite um numero\n");
		scanf("%d",&i);
		decBin(i);
		return 0;
	}

