#include<stdio.h> 
#include<string.h> 
int main() 
{ 
  char name[]="JBREC"; 
  int len1,len2; 
  len1=strlen(name); 
  len2=strlen("JBRECECE"); 
  printf("The string length of %s is: %d\n",name,len1); 
  printf("The string length of %s is: %d","JBRECECE",len2); 
  return 0;
} 