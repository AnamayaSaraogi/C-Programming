#include<stdio.h> 
void main() 
{ 
 int arr[4]; 
 int i, j; 
 
 for(i=0;i<4;i++) 
 { 
    printf("Enter array element %d\n",i);
    scanf("%d",&arr[i]);    //Run time array initialization 
 } 

 printf("Your array :\n");
 for(j=0;j<4;j++) 
 { 
  printf("%d\n",arr[j]); 
 } 
}