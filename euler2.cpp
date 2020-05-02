#include <iostream>
using namespace std;
int a=1,b=2,aux,sumt;

int main()
{
while(b<=4000000){
    aux=a+b;
    a=b;
    b=aux;
    if(a%2==0){
        sumt+=a;
    }
}

cout<<"la respuesta es: "<<sumt;

return 0;
}
