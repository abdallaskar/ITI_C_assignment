#include <stdio.h>


// main funcation 
int main(void){
    
	
	int hight=0;
	printf("pleas enter hight of the pyramid : ");
	scanf("%d",&hight);
	int ast=1;
	for(int i=1 ; i<=hight;i++){
		for(int j=1;j<=hight-i;j++){
			printf(" ");
		}
		for(int k=1;k<=ast;k++){
		   printf("*");
		}
		ast+=2;
		printf("\n");
		
	}
	
}


