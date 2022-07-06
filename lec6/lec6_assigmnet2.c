#include <stdio.h>




// main funcation 
int main(void){
  // initialization three integer varibles
  int x=2,y=4,z=6;
  // initialization three integer pointer
  int* p=&x;int*q=&y;int* r=&z;
  int* temp=(void*)0;
  // show data
    printf(" x = %d   y =  %d z = %d \n",x,y,z);
    printf(" p = %p  q = %p \n r = %p \n",p,q,r);
    printf(" *p = %d *q = %d *r = %d \n",*p,*q,*r);
	
	printf("swaping pointer \n");
	
	// swaping adreses
	temp=r;
	r=p;
	p=q;
	q=temp;
	
  // show data after swaping 
    printf(" x = %d   y =  %d z = %d \n",x,y,z);
    printf(" p = %p  q = %p \n r = %p \n",p,q,r);
    printf(" *p = %d *q = %d *r = %d \n",*p,*q,*r);
  
  
  return 0;

}




