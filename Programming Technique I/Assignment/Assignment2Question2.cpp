//Assignment 2 Question 2
//Lee Jia Yee A24CS0260
//Leong Jia Ling A24CS0104

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void Input (int[], float[], float[], int);
void Output (const int[], const float[], const float[], const int);

int main()
{
    const int SIZE=10;
    int item_no[SIZE];
    float price[SIZE];
    float discount[SIZE];
    Input(item_no, price, discount, SIZE);
    cout <<"Number of items on sale"<< endl;
    cout <<"----------------------------------------------------------------------------------------"<< endl;
    cout << setw(10) <<"Item No" << setw(10) << "Price" << setw(15) << "Discount(%)" << setw(21) << "Price after discount" <<endl;
    Output(item_no, price, discount, SIZE);
    return 0;
}

void Input (int itemnum[], float prices[], float offer[], int size)
{
    ifstream input("input.txt");

    if(!input)
    {
        cout << "Error! Now exit the program.";
        exit (1);
    }

    for (int i=0; i<size; i++)    
    {
        input >> itemnum[i];
        input >> prices[i];
        input >> offer[i];
    }
}

void Output (const int itemnum[], const float prices[], const float offer[], const int size)
{
    for (int i=0; i<size; i++)
    {
        float price_discount= prices[i]*(1-offer[i]/100.0);
        cout << right; 
        cout << setw(10) << itemnum[i] << setw(10) << prices[i] << setw(10) << offer[i] << setw(15) << price_discount <<endl;   
    }
    
}
    
    

