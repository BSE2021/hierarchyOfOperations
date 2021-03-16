

#include <iostream>
#include <cmath>
using namespace std;

// Hierarchy of operations
int main()
{
    /*
    int a, b, x, y;

    //prompting and receiving input
    cout << " \n Enter the values for a, b and x \t " ;
    cin >> a >> b >> x;

    //calculation
    y = a * x + b;

    //output
    cout << "\n The value of y is \t" << y;

    */

    /*
    //declaration
    int a, x = 5, y = 3;

    a = x * x + y * y;
    cout << "\n The value of a is \t" << a << endl;

   */
    /**/
    // Compound Interest
    float p = 500, r = 2, n = 6, a;

    //calculation
    a =  p* pow((1 + r), n );
    cout << " \n Amount = \t" << a << endl;

    return 0;

}

// 