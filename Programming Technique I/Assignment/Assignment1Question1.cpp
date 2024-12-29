//Assignment 1 Question 1
//Section 2
// Lee Jia Yee A24CS0260
//Leong Jia Ling A24CS0104


#include <iostream>
using namespace std;

double postageCostWest (double);
double postageCostEast (double);

int main ()
{
    int item_no, count, Location;
    int item_charged =0;
    double Weight, cost, sum_cost;
    cout << "Please enter the number of item: ";
    cin >> item_no;
    count=item_no;
    
    for(int i=0; i<count; i++)
    {
        do
        {
            cout << "Please enter your item's weight : ";
            cin >> Weight;
            if ((Weight<=0) || (Weight>5))
            {
                cout << "Invalid item weight, please try again."<<endl;
            }
        } while ((Weight<=0) || (Weight>5));
        
        cout << "(1) West Malaysia"<< endl <<"(2) East Malaysia"<<endl;
        cout <<"Please choose your location to send (1 or 2): ";
        cin >> Location;

        if (Location == 1)
        {
            cost=postageCostWest(Weight);
        }
        else
        {
            cost=postageCostEast(Weight);
        }

        if (cost!=0)
        {
            item_charged++;
        }

        sum_cost+=cost;
    }

    cout << "The total number of item being charged: " << item_charged << endl;
    cout << "The sum of the overall postage cost: RM"<< sum_cost;
    return 0;
}

double postageCostWest (double w)
{
    double c;
    if (w>0.1)
    {
        c=w*3.5;
    }
    else
    {
        c=0;
    }
    return c;
}

double postageCostEast (double w)
{
    double c;
    if (w>0.1)
    {
        c=w*5;
    }
    else
    {
        c=0;
    }
    return c;
}