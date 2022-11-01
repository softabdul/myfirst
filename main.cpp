#include <iostream>

using namespace std;

int main()
{
int z, i = 0, a=0, b=1;
cout << a << endl;
cout << b <<endl;
z =  a + b;
cout << z <<endl;

while (i <= 5){
    a=b;
    b=z;
    z =  b + z;
    //cout << b<< endl;
    cout << z <<endl;
    i = i+1;
}
cout<< "END " <<endl;


    return 0;
}
