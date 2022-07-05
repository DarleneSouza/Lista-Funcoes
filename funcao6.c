#include<stdio.h>
int h(int m, int n){
	printf("Chamada\n");
	if(n==1){
		return m+1;
	}else if(m==1){
		return n+1;
	}else{
		return h(m,n-1) + h(m-1,n);
	}
	
}
main(){
	printf("%d",h(3,3));
	return 0;
}
