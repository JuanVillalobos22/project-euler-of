#include <iostream>
#include <stdlib.h>

using namespace std;

int poli(char* n, int digitos)
{
	for (int i = 0; i < digitos / 2; i++)
	{
		if (n[i] != n[digitos - 1 - i])
			return 0;	
	}
	
	return 1;
}

int cantdig(int n)
{
	int aux, digitos;
	aux = n;
	for (digitos = 0; ; )
	{
		if ((aux % 10 != 0) || (aux / 10 != 0))
			digitos ++;
		else
			break;
		aux = aux / 10;
	}
	
	return digitos;
}

char* perzo(int i)
{
    static char l1[10];  
    char* p = &l1[9];

	i *= 10; 
    for(*p--=0; i/=10; *p--=i%10+0x30);
    *p = i % 10; 
    return ++p;    
}


int main (int argc, char* argv[])
{
	int n, max = 3, n1 = 100, 
		n2 = 100, mayPol = 0, factor1=0, factor2=0, b1 = 0, b2 = 0;
	
	
	for (;!b1 || !b2;)
	{
		n = n1 * n2;
		if (poli(perzo(n), cantdig(n)))
		{
			if (n > mayPol)
				mayPol = n;
			factor1 = n1;
			factor2 = n2;
		}
		
		if (!b1)
		{
			if (cantdig(n1 + 1) > max)
				b1 = 1;
			else
				n1 ++;
		}
		else if (!b2)
		{
			if (cantdig(n2 + 1) > max)
				b2 = 1;
			else
			{
				n2 ++;
				
				n1 = 100;
				b1 = 0;
			}
		}
	}
	cout << "el palindromo mas grande es :  " <<endl<< mayPol << endl<<"( " << factor1 << " x " << factor2 << " )"<< endl;
	return 0;
}
