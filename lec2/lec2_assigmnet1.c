#include <stdio.h>

// main funcation 
int main(void){
    
	// initialization array Consisting of ten elment integer
	int arr[10]={0};
	int search = -1;
	
	// ask user to inter ten numbers
	for(int i=0;i<10;i++)
	{
	   printf("pleas enter number %d : ",i+1);
	   scanf("%d",&arr[i]);
	}	
	
   // ask user to inter number to search
   printf("pleas enter number to search :");
   scanf("%d",&search);
 
   // liner search on array 
   int i=0;
   for( ;i<10 ;i++){
	   if(arr[i]==search)
	   {
		   printf("value is existi at elment number : %d",i+1);
		   break;
	   }
   }
      
   // number not exisit 
   if( i==10){
   printf("value not exisit \n");
   }


}


