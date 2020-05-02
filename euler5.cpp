#include <iostream>
#include <stdlib.h>
using namespace std;

int main (int argc, char* argv[])
{
	bool a = false;
	long n= 1890; 
	
	
	while (!a)
	{
		n ++;
		a = true;
		for (int i = 2; i <= 20; i++)
		{
			if ((n % i != 0) || ((n % i) % 2) != 0)
			{
				a = false;
				break;
			}
		}
		
	}
	
	cout << "el numero positivo mas pequenio que es divisible por todos los numeros del 1 al 20 es  : " << n << endl;
	
	return 0;
}
