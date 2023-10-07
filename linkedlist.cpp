/*Division Error*/

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "\nEnter 2 numbers:";
    cin >> a >> b;

    try
    {
        if (b != 0)
        {
            c = a / b;
            cout << "\nDivision=" << c;
        }
        else
        {
            throw b; // Throw an exception if the denominator (b) is zero
        }
    }
    catch (int e) // Catch the exception of type int
    {
        cout << "\nDivide by " << e << " error"; // Handle the exception by displaying an error message
    }

    return 0;
}

/*Output
Enter 2 numbers:2/0
Divide by 0 error
*/


#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "\nEnter age ";
    cin >> a;

    try
    {
        if (a >= 18)
        {
            cout << "Eligible " << a;
        }
        else
        {
            throw a; // Throw an exception if age is less than 18
        }
    }
    catch (int e) // Catch the exception of type int
    {
        cout << "\nNot Eligible" << " error"; // Handle the exception by displaying an error message
    }

    return 0;
}

/*Output
Enter age 17
Not Eligible error
*/
