#include <stdio.h>


// main funcation 
int main(void){
    
	// initialization 3 integer varibles 
	int number1=0,number2=0,number3=0;
	
	// ask user to enter 3 varibles
	printf("pleas enter number 1 :");
	scanf("%d",&number1);
	printf("pleas enter number 2 :");
	scanf("%d",&number2);
	printf("pleas enter number 3 :");
	scanf("%d",&number3);
	
	// cheak maximum number of three numbers 
	if(number1>number2 && number1>number3){
		printf("the maximum number is : %d",number1);
	}
	else if(number2>number1 && number2>number3){
		printf("the maximum number is : %d",number2);
	}
	else{
	   printf("the maximum number is : %d",number3);
	}


}


