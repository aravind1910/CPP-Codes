/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
int year(char *date)
{
	int num = 0;
	for( int i = 6; i < = 9 ;i++)
	{
		num = num * 10 + (*(date+i) - 48);
	}
	return num;
}
int month( char *date )
{
	int num =0;
	for(int i = 3; i<=4;i++)
	{
		num = num * 10 + (*(date+i) - 48);
	}
	return num;
}
int date(char *date)
{
	int num = 0;
	for( int i = 0; i < = 1 ;i++)
	{
		num = num * 10 + (*(date+i) - 48);
	}
	return num;
}
int isOlder(char *dob1, char *dob2) {
	if(year(&dob1)>year(&dob2))
	return 2;
	else if(year(&dob1)<year(&dob2))
	return 1;
	else if(month(&dob1)>year(&dob2))
	return 2;
	else if(month(&dob1)<month(&dob2))
	return 1;
	else if(day(&dob1)>day(&dob2))
	return 2;
	else if(day(&dob1)<day(&dob2))
	return 1;
	else
	return 0;
}
