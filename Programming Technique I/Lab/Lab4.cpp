#include <iostream>
using namespace std;

int main()
{
    const int NUM_STUDENT=10;
    int marks[NUM_STUDENT]={70, 85, 57, 64, 83, 92, 75, 69, 95, 72};
    int total=0;
    float average;
    
    for (int i=0; i<NUM_STUDENT; i++)
    {
        cout<< "Student " << i+1 << ": " << marks[i] <<endl;
        total+=marks[i];
    }
    average=total/10.0;
    cout <<"The total of marks for all students: " << total << endl;
    cout <<"The average of marks for all students: " << average << endl;
    return 0;
}