#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 7;

    cout << "Hola mundo" << endl;

    cout << "Comparando valores..." << endl;

    if (a < b){
        cout << "a es menor que b";
    } else if (a > b){
        cout << "a es mayor que b";
    } else {
        cout << "a y b son iguales";
    }

    return 0;
}