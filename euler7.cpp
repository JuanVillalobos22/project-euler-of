#include <iostream>
#include <math.h>

using namespace std;

int Primo(long num) 
{
	if (num < 2) 
		return 0;

	if (num > 2 && (num % 2) == 0)
		return 0;

	for(int i = 2; i < num; i++ )
	{
		if ( (num % i) == 0)
			return 	0;
	}
	return 1;
}


int main (int argc, char* argv[])
{
	int lim = 10001, i = 0;
	long primo = 0;
	
	do 
	{
		if (Primo(++ primo)) i ++;
	}
	while (i != lim);
	
	cout << " el 10 001 numero Primo es:  " << primo << endl;	
	
	return 0;
}
