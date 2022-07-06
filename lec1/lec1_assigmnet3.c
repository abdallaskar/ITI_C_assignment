#include <stdio.h>


// main funcation 

int main(void){
    
	//  initialization 2 varibles
	int number1=0,number2=0;
	
	// scan number1 and number2 from user 
	printf("pleas enter number a : ");
	scanf("%d",&number1);
	printf("pleas enter number b : ");
	scanf("%d",&number2);
	
	/* print result from a+b and
	 * print result from a-b and
	 * print result from a&b and
	 * print result from a|b and
	 * print result from a^b and*/
	 
   printf("a + b = %d\n",number1+number2);
   printf("a - b = %d\n",number1-number2);   
   printf("a & b = %d\n",number1&number2);
   printf("a | b = %d\n",number1|number2);
   printf("a ^ b = %d\n",number1^number2);
 
   


}


