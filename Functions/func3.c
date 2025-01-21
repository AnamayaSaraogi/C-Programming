//to demonstrate functions without parameters and no return values.
#include<stdio.h>                                                              
void sum();                                                                    
void main()                                                                    
{                                                                              
    sum();                                                                       
}                                                                              
void sum()                                                                     
{                                                                              
    int a, b, c;                                                                
    printf("enter the values of a and b");                                      
    scanf("%d%d", &a, &b);                                                      
    c = a + b;                                                                  
    printf("sum=%d", c);                                                        
}
