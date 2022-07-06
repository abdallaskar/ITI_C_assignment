#include <stdio.h>

// main funcation 

int main(void){
	
	/* initialization five integer varibles for 
	 * maximum grade and minimum grade and numer of pass and number of falid a sumation 
	 */
   int min=0,max=0,pass=0,faild=0,sum=0;
   
   // initialization three arrays for three class 
   int class1[10]={40,51,60,77,66,45,88,78,91,50};
   int class2[10]={41,52,58,76,67,43,38,83,92,50};
   int class3[10]={49,53,64,72,69,55,44,78,87,40};
   
   
   min=class1[0];
   max=class1[0];
   // sumation and max garde and minum grade and number of pass and number of fail in class1
   for(int i=0;i<10 ; i++){
	   sum+=class1[i];
	   if(class1[i]>max)
		   max=class1[i];
	   if(class1[i]<min)
		   min=class1[i];
	   if(class1[i]>=50)
		   pass++;
	   else
		   faild++;
   }
      // sumation and max garde and minum grade and number of pass and number of fail in class2
   for(int i=0;i<10 ; i++){
	    sum+=class2[i];
	   if(class2[i]>max)
		   max=class2[i];
	   if(class2[i]<min)
		   min=class2[i];
	   if(class2[i]>=50)
		   pass++;
	   else
		   faild++;
   }
      // sumation and max garde and minum grade and number of pass and number of fail in class3
   for(int i=0;i<10 ; i++){
	    sum+=class3[i];
	   if(class3[i]>max)
		   max=class3[i];
	   if(class3[i]<min)
		   min=class3[i];
	   if(class3[i]>=50)
		   pass++;
	   else
		   faild++;
   }

  // print highest grade and lowest grade 
  printf("Highest grade = %d\nLowest grade = %d\n",max,min);
  // print number of passed and number of falied
  printf("Number of passed students = %d\nNumber of Failed students = %d",pass,faild);
  // print avarage
  printf("\nAverage grade = %d",sum/30);
  
  return 0;

}




