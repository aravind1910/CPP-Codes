 m/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int checkPrime ( int n)
{
    int i;
    for (i=2; i*i<=n; i++) 
	{
        if (n % i == 0) 
		return 0;
    }
    return 1;
}
int nthFibonacci(int n)
{
	if (n == 0|| n==1)
    {
        return n;
    }
    else
    {
        return(nthFibonacci(n - 1) + nthFibonacci(n - 2));
    }
}

int nthPrime(int num)
{
	int counter = 0, i = 2;
	while(counter!=num)
	{
		if(checkPrime(i))
		counter++;
	}
	return i;
}



