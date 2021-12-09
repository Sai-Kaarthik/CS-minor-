#include <stdio.h>
void main()
{
	char a = '5';
	char b = '8';
	printf("Difference: %d\n", b - a);
	printf("Sum :%d\n", b + a);

}

/* Here we have declared '5' and '8' to be character data type, 
   so they will be stored as their corresponding ASCII values. The code to find their ASCII value is-
   
   #include<stdio.h>
    void main()
      {char x;
	    printf("enter a value:");
	    scanf("%c",&x);
	    printf("ASCII value is :%d",x);
      }    
   which gives the ASCII value of 5 to be '53' and that of 8 to be '56'. The operations sum and difference are 
   performed using the format specifier of integers. So the ASCII values of the numbers are taken to perform the
   operations.
   Difference: b-a= ascii(8)-ascii(5)= 56-53= 3
   Sum: b+a= ascii(b)+ascii(a)=56+53= 109
  */
