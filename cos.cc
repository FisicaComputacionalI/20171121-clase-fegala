
//Fernando Garza Landa
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  float x=0.15;
  float h;
  float c=cos(x);

    cout<<"Coseno de 0.15 es "<<x<<endl;
    h=.001;
    c=cos(x+h);
    cout<<"cos(x+h)="<<c<<endl;
    c=cos(x+2*h);
    cout<<"cos(x+2h)="<<c<<endl;
    
    cout<<"El valor de h mas pequenio para el cual cos(x+h) y cos(x+2h) aun se note la diferencia hasta milesimas es "<<h<<endl;
    
  return 0;
}
