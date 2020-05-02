#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char* argv[])
{
	int a=1, b=1, c=1;
	double aux;

	for (; a < 1000; a ++)
	{
		for (b = a + 1; b < 1000; b ++)
		{
			aux = pow (a,2) + pow(b, 2);
			aux = sqrt(aux);
			
			if (fmod(aux,1) == 0) 
			{
				c = (int) aux;
				if (c > b && b > a)
				{
					if (a + b + c == 1000) 
					{
						cout << "a:  " << a << endl;
						cout << "b:  " << b << endl;
						cout << "c:  " << c << endl;
						cout << "abc:  " << a * b * c << endl;
						
						return 0;
					}
					if (a + b + c > 1000) b = 2000; 
				}
			}
		}
	}		
		
	
	return 1;
}
