#include <stdio.h>

// main funcation 
int main(void){
	// initialization two integer varibles
   int min=0,max=0;
	// initialization array of ten integer varibles
   int arr[10]={0};
   
   // ask user to enter to number 1
   printf("Enter number 1 :");
   scanf("%d",&arr[0]);
   min=arr[0];
   max=arr[0];
   
    // ask user to enter to all numbers and calculate max and min 
   for(int i=1;i<10 ; i++){
	   printf("Enter number %d :",(i+1));
	   scanf("%d",&arr[i]);
	   if(arr[i]>max)
		   max=arr[i];
	   if(arr[i]<min)
		   min=arr[i];
   }


  printf("maximum number = %d\n minum number = %d",max,min);
  
  return 0;

}




