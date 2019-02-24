 /*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
#include<math.h>

int decimalToOctal(int num)	
{
	if(num<0)
	return 0;
    int octalNumber = 0;
    int remainder, i = 1;

    while (num!=0)
    {
        remainder = num % 8;
        n /= 8;
        octalNumber += remainder*i;
        i *= 10;
    }
    return octalNumber;
}

float decimalToOctalFraction(float num)
{   
 	if(num<0)
	return 0;
	int k = (int)num;
	int oct_int = decimalToOctal(k);
	float l = num - k, oct_frac ;
	for(i=1;i<=2;i++)
	{
		l=l*8;
		oct_frac = (int)l + pow(10,-i);		
	}
	return oct_int+oct_frac;
}

