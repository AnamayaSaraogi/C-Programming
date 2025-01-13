#include<stdio.h> 
#include<string.h> 
int main() 
{ 
 char str1[]="REDDY"; 
 char str2[10]; 
 strcpy(str2,str1); 
 printf("The string1 is :%s\n",str1); 
 printf("The string2 is :%s\n",str2); 
 strcpy(str2,str1+1); 
 printf("The string1 is :%s\n",str1); 
 printf("The string2 is :%s",str2); 
 return 0;
} 