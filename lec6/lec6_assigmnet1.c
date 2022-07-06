#include <stdio.h>


//  Prototype funcation of bubble sort
void bubbleSort(int* arr,int n);

// main funcation 
int main(void){
  // define array of fifty integer elemants 
  int arr[50],n=0;
  
  
  printf("enter number of array  : \n");
  scanf("%d",&n);
  
  // get value of array from user 
   printf("elment of array  : \n");
   for(int i=0; i<n ; i++){
      printf("elments number %d :",(i+1));
      scanf("%d",&arr[i]);
   }
   
   // call funcation bubble sort 
   bubbleSort(arr,n);
   
   // print array after sorting 
   printf("elment of array  after sorting  : \n");
   for(int i=0; i<n ; i++){
      printf("%d ",arr[i]);
   }
  
  return 0;

}


// bubble sort funcation 
void bubbleSort(int* arr,int n){

  for(int i=0; i<n-1 ; i++){
	  for(int j=0;j<n-1-i;j++){
		  if(arr[j]>arr[j+1]){
			  int temp=arr[j];
			  arr[j]=arr[j+1];
			  arr[j+1]=temp;
		  }
	  } 
  }
}
