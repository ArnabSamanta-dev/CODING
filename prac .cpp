#include<iostream>
#include <string>
using namespace std;
int main()
{
    int arr2d[3][4]={{2,4,6,8},{1,3,5,7},{0,9,8,7}};

    for(int i = 0 ; i < 4 ; i++ ) 
    { 
        for ( int j=0; j < 4 ; j++) 
        {
            cout << " the "<< j << "marks of " << i << "th student is :"<< arr2d[i][j] << endl;
        }
    }

    return 0;
}


  


