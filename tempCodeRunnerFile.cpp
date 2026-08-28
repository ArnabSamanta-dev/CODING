#include<iostream>
#include <string>
using namespace std; 

int main () {
    int a,b ,c,sum = 0;
     double  avg = 0;
    cout << " enter a number: ";
    cin >> a >> b >> c ;
    
    sum = a+b+c ;
    avg = (double) sum/3.0;
    cout << " the avg of three  num is " << avg << endl;
    return 0;

}