#include <stdio.h>

// define two global integer varibles 
int x=0,y=0;

// prototype of all funcation 
void showData(void);
void inputTwoNumber(void);
void inputOneNumber(void);
int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
double div(double a,double b);
int sub(int a,int b);
int AandB(int a,int b);
int AorB(int a,int b);
int AxorB(int a,int b);
int mod(int a,int b);
int notA(int a);
int incrementA(int a);
int decrementA(int a);


// main funcation 
int main(void){
	// id for all operation 
	int id=0;
	
    do{ 
	    showData();
	    scanf("%d",&id);
		switch(id){
		
			case 1 :{
				inputTwoNumber();
				printf("the result is : %d\n\n",add(x,y));
				break ;
			}
			case 2 :{
				inputTwoNumber();
				printf("the result is : %d\n\n",sub(x,y));
				break ;
			}
			case 3 :{
				inputTwoNumber();
				printf("the result is : %d\n\n",mult(x,y));
				break ;
			}
			case 4 :{
				inputTwoNumber();
				printf("the result is : %f\n\n",div((double)x,(double)y));
				break ;
			}
			case 5 :{
				inputTwoNumber();
				printf("the result is : %d\n\n",AandB(x,y));
				break ;
			}
			case 6 :{
				inputTwoNumber();
				printf("the result is : %d\n\n",AorB(x,y));
				break ;
			}
			case 7 :{
				inputOneNumber();
				printf("the result is : %d\n\n",notA(x));
				break ;
			}
			case 8 :{
				inputTwoNumber();
				printf("the result is : %d\n\n",AxorB(x,y));
				break ;
			}
			case 9 :{
				inputTwoNumber();
				printf("the result is : %d\n\n",mod(x,y));
				break ;
			}
			case 10 :{
				inputOneNumber();
				printf("the result is : %d\n\n",incrementA(x));
				break ;
			}
			case 11 :{
				inputOneNumber();
				printf("the result is : %d\n\n",decrementA(x));
				break ;
			}
			case 12 :{
			   printf("the end of program \n\n");	
			}
			
			
			
		}
	}
	while(id!=12);

}



// show funcation to show id's for all operation to user 
  
void showData(void){
  
  printf("To add two number press the number : 1\n");
  printf("To substrsct two number press the number : 2\n");
  printf("To multiply two number press the number : 3\n");
  printf("To divation two number press the number : 4\n");
  printf("To AND two number press the number : 5\n");
  printf("To OR two number press the number : 6\n");
  printf("To NOT the number press the number : 7\n");
  printf("To XOR two number press the number : 8\n");
  printf("To remainder  two number press the number : 9\n");
  printf("To increment the number press the number : 10\n");
  printf("To decrement the number press the number : 11\n");
  printf("To end the program : 12\n");
  printf("chose number : ");
}
// funcation get two numbers from user
void inputTwoNumber(void){
	printf("pleas enter two number : ");
      scanf("%d%d",&x,&y);
}
// funcation get one number from user
void inputOneNumber(void){
	  printf("pleas enter one number : ");
      scanf("%d",&x);
}
// funcation add two integer numbers
int add(int a,int b){
 return a+b;
}
// funcation subtractor two integer numbers
int sub(int a,int b){
	return a-b;
}
// funcation to multplie two numbers 
int mult(int a,int b){
    return a*b;
}
// funcation to divation two numbers 
double div(double a,double b){
  if(b==0)
	  printf("can't divid by 0\n");
  else
	  return a/b;

}
// funcation to get modules for two numbers 
int mod(int a,int b){
    return a%b;
}
// funcation to & anding two numbers 
int AandB(int a,int b){
  return a&b;
}
// funcation to | oring two numbers 
int AorB(int a,int b){
	return a|b;
}
// funcation to ^ Xor two numbers 
int AxorB(int a,int b){
	return a^b;
}
// funcation to not~ unmber 
int notA(int a){
	return ~a;
}
// funcation to increment number
int incrementA(int a){
	return ++a;
}
// funcation to decrement number
int decrementA(int a){
   return --a;
}






/*

out put
printf
 
 /////
format specifier 

%d   intger 
%c   character
%f   float
 /////
in put
scanf

//////
artimatic opreators

* / - + %

///////
bitwise opreators

& | ~ << >>

*/
