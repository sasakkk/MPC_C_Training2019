#include<stdio.h>

int main(void){
	
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(i<j){continue;}//continueでなく、breakでも良い。(誤差の範囲だが、少しだけbreakの方が早い)
			printf("%3d",i*j);
		}
		printf("\n");
	}
	
	return 0;
}