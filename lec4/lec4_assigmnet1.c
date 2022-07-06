#include <stdio.h>

// prototype of max and min funcation
int max(int a,int b,int c,int d);
int min(int a,int b,int c,int d);

// main funcation
int main(void){
    
	// define four integer varibles 
	int number1=0,number2=0,number3=0,number4=0;
	
	// ask user to input four varibles 
	printf("pleas enter number number1, number2, number3 and number4 : ");
	scanf("%d%d%d%d",&number1,&number2,&number3,&number4);
	// call funcation max and funcation min 
	printf("the max numbr is  : %d\n",max(number1,number2,number3,number4));
	printf("the min numbr is  : %d\n",min(number1,number2,number3,number4));

}


/* max    : to calcluate max number of four numbers 
 * input  : four integer var
 * return : maximum integer number
 */


int max(int a,int b,int c,int d){
	
	
	if(a>b && a>c && a>d)
		return a;
	else if(b>a && b>c && b>d )
		return b;
	else if(c>a && c>b && c>d)
		return c;
	else
		return d;
	
}
/* min    : to calcluate minumum number of four numbers 
 * input  : four integer var
 * return : minumum integer number
 */

int min(int a,int b,int c,int d){
	
	
	if(a<b && a<c && a<d)
		return a;
	else if(b<a && b<c && b<d )
		return b;
	else if(c<a && c<b && c<d)
		return c;
	else
		return d;
	
}

