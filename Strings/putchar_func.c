#include<stdio.h> 
void main() 
{ 
  char ch; 
  printf("Enter any alphabet either in lower or uppercase:"); 
  ch=getchar(); 
  if(islower(ch)) 
   putchar(toupper(ch)); 
  else 
   putchar(tolower(ch)); 
} 