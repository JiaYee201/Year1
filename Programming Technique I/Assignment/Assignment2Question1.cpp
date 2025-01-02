//Assignment 2 Question 1
//Lee Jia Yee A24CS0260
//Leong Jia Ling A24CS0104

#include <iostream>
using namespace std;
int main(){
    const int NUM_ARRAY=5;
    const int NO_ARRAY=10;
    int array1[NUM_ARRAY];
    int array2[NUM_ARRAY];
    int array3[NO_ARRAY];
    int highest, lowest, range, oddNo=0;
    float avg, sumArr3=0;

    cout << "Enter table array1: " << endl;

    for (int counter=0; counter<NUM_ARRAY; counter++){
        cout << "Please enter an integer: ";
        cin >> array1[counter];
    }

    cout << "\nEnter table array2: " << endl;
    
    for (int counter=0; counter<NUM_ARRAY; counter++){
        cout << "Please enter an integer: ";
        cin >> array2[counter];
    }

    for (int counter=0; counter<NUM_ARRAY; counter++){
        array3[counter]=array1[counter];
        array3[counter+5]=array2[counter];
    }

    for (int counter=0; counter<NO_ARRAY; counter++){
        if (array3[counter]%2 != 0)
            oddNo+=1;

        sumArr3+=array3[counter];
    }

    highest=array3[0];
    lowest=array3[0];

    for (int counter=1; counter<NO_ARRAY; counter++){
        if (array3[counter]>highest)
            highest=array3[counter];

        if (array3[counter]<lowest)
            lowest=array3[counter];
    }

    
    cout << "\nOUTPUT: " << endl;
    cout << "Table array3: " << endl;

    for (int count=0; count<NO_ARRAY; count++){
        cout << array3[count] << " ";
    }

    avg=sumArr3/10;
    range=highest-lowest;

    cout << "\n\nThe average of ten numbers in array3 = " << avg << endl;
    cout << "The range of values in array3 = " << range << endl;
    cout << "The number of odd numbers in array3 = " << oddNo << endl;
}