#include <iostream>
using namespace std;

int main ()
{
    cout<< "Lab exercise 2" << endl;
    cout<< "Lee Jia Yee A24CS0260 Section2" << endl;

    char operation, repeat;
    float x, y, answer;

    do
    {
        cout << "Please enter your operator(+, -, *, /): ";
        cin >> operation;
        cout << "PLease enter 2 numbers: ";
        cin >> x >> y;

        switch (operation)
        {
            case '+':answer=x+y;
                     cout << x << operation << y << "=" << answer << endl;
                     break;
            
            case '-':answer=x-y;
                     cout << x << operation << y << "=" << answer << endl;
                     break;

            case '*':answer=x*y;
                     cout << x << operation << y << "=" << answer << endl;
                     break;

            case '/':answer=x/y;
                     cout << x << operation << y << "=" << answer << endl;
                     break;

            default: cout << "Error!" << endl;
                     break;
        }

        cout << "Do you want to continue your calculation?(If yes,please type 'Y' or 'y'): ";
        cin >> repeat;

    } while ((repeat=='Y') || (repeat=='y'));

    cout << "The calculation end";
    return 0;
    
}