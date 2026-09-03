#include<iostream>
#include <string>
using namespace std;  
int main() {

    int b ;
    int* ptra ;
    ptra = &b ;
    cout << " the addres of b is : " << b << endl ;
     cout << " the addres of b is : " << *ptra << endl ;
 cout << " the addres of b is : " << &b << endl ;
 cout << " the addres of b is : " << ptra << endl ;
 return 0;
}