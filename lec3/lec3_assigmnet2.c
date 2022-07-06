#include <stdio.h>


// main funcation 
int main(void){
    
	// data base for 3 users 
	int ida=1234,idb=5678,idc=9870;
	int pasa=7788,pasb=5566,pasc=1122;
	
	// data in from user
	int idin=0,pasin=0;
	
	// ask user to enter id 
	printf("pleas enter yuor id:");
	scanf("%d",&idin);
	// cheak id is correct or not 
	if(idin==ida){
		// ask user to enter pasward for three times 
	   printf("pleas enter yuor pasward:");
	   for(int i=0;i<3;i++){
		   scanf("%d",&pasin);
           // cheak paswar is valid		   
		   if(pasin==pasa){
			printf("welcome AHMED\n");
		   return 0;
		   }else {
			   printf("pleas try again :");
		   }     
	   }
		printf("Incorrect pasward for three times : no more triels\n");   
	}// cheak id is correct or not
	else if(idin==idb){
	  printf("pleas enter yuor pasward:");
	   for(int i=0;i<3;i++){
		   scanf("%d",&pasin);	
		   if(pasin==pasb){
			printf("welcome Amr\n");
		   return 0;
		   
		   }else {
			   printf("pleas try again :");
		   }     
	   }
		printf("Incorrect pasward for three times : no more triels\n");   
	}// cheak id is correct or not
	else if(idin==idc){
	   printf("pleas enter yuor pasward:");
	   for(int i=0;i<3;i++){
		   scanf("%d",&pasin);	
		   if(pasin==pasc){
			printf("welcome Wael\n");
		   return 0;
		   
		   }else {
			   printf("pleas try again :");
		   }     
	   }
		printf("Incorrect pasward for three times : no more triels\n");   
	}
	else{
		printf("you are not register ");
	}


return 0;
	
}


