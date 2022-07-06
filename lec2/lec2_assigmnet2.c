#include <stdio.h>


// main funcation 
int main(void){
    
	// data base for id and pasward 
	int id=123456;
	int pasward =654321;
	int idin=0,pasin=0;
	
	   // ask user to enter id 
	   printf("pleas enter your id  : ");
	   scanf("%d",&idin);
	   
	   // cheak if id is exisit 
	   if(idin==id){
		 printf("pleas enter your pasward  : ");
	     scanf("%d",&pasin);
		 // cheak pasward is valid 
		 if(pasin==pasward){
		   printf("welcome ali \n");
		 }
		 else{
		   printf("incorrect pasward \n");
		 }			 
		   
	   }
	   else{
       printf("incorrect id \n");
	   }
   


}


