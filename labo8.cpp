#include <iostream>
using namespace std;

int mayor (int a , int b , int c ) {
    if ( a >= b && a >= c ) {
        return a;
        } else if ( b >= a && b >=c ){
            return b;
        } else {
            return c;
        }
        
    }
     
int main () {
    int a , b , c;

    cout << "ingrese el primer numero:" ;
    cin >> a;
    
    cout << "ingrese el segundo numero:" ;
    cin >> b;

    cout << "ingrese el tercer numero:" ;
    cin >> c;

    cout << "el numero mayor es:"
        << mayor (a , b , c) << endl;

        return 0; 
