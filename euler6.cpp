#include <iostream>
#include <math.h>



using namespace std;

int main (int argc, char* argv[])
{
	long sumacua = 0, cuasum = 0;
	
	for (int i = 1; i <= 100; i ++)
	{
		cuasum += i;
		sumacua += pow(i, 2);
	}
	cuasum = pow(cuasum, 2);
		
	cout << "la diferencia es :  " << cuasum - sumacua << endl;
	
	return 0;
}
