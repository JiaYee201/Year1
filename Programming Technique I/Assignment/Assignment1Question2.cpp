#include <iostream>
using namespace std;
int main(){
    char employeeName [21];
    char employeeCode, employeeCategory, toyCategory;
    float overtimePay;
    float fixedSalary, netSalary=0;
    float numHours, numToys;
    int employeeNum;
    int overtimeHours;

    cout << "Enter employee's name: ";
    cin.ignore();
    cin.getline(employeeName, 21);

    cout << "Enter employee's number: ";
    cin >> employeeNum;

    do{
        cout << "Enter employee's code (G - Fixed paid employees | K - Contract workers | S - Subcontract workers): ";
        cin >> employeeCode;

        if (employeeCode != 'G' && employeeCode != 'K' && employeeCode != 'S')
            cout << "Invalid employee's code! Please enter again." << endl;

    } while (employeeCode != 'G' && employeeCode != 'K' && employeeCode != 'S');

    if (employeeCode == 'G'){
        do{
            cout << "Enter fixed paid employee's fixed salary: RM ";
            cin >> fixedSalary;

            if (fixedSalary < 0)
                cout << "Invalid employee's fixed salary! Please enter again." << endl;

        } while (fixedSalary < 0);

        do{
            cout << "Enter employee's category (P - under manager | B - Non-manager): ";
            cin >> employeeCategory;

            if (employeeCategory != 'B' && employeeCategory != 'P')
                cout << "Invalid employee's category!" << endl;
                
        } while (employeeCategory != 'B' && employeeCategory != 'P');

        if (employeeCategory == 'B'){
            do{
                cout << "Enter employee's overtime hours: ";
                cin >> overtimeHours;

                if (overtimeHours < 0)
                    cout << "Invalid overtime hours! Please enter again" << endl;

            } while (overtimeHours < 0);

            if (overtimeHours > 20){
                overtimePay = 270;
                cout << "Claims for payment for excessive hours of 20 hours will be rejected." << endl;
            }
            else if (overtimeHours > 10)
                overtimePay = (overtimeHours - 10) * 12 + 150;
                    
            else
                overtimePay = overtimeHours * 15;

            netSalary = fixedSalary + overtimePay;
        }

        else
            netSalary = fixedSalary;
    }
    else if (employeeCode == 'K'){
        do{
            cout << "Enter employee's number of hours worked: ";
            cin >> numHours;

            if (numHours < 0)
                cout << "Invalid number of hours! Please enter again." << endl;
                        
        } while (numHours < 0);

        do{
            cout << "Enter employee's category (B - Recovery | S - Maintenance): ";
            cin >> employeeCategory;

            if (employeeCategory != 'B' && employeeCategory != 'S')
                cout << "Invalid employee's category! Please enter again." << endl;

        } while (employeeCategory != 'B' && employeeCategory != 'S');

        if (employeeCategory == 'B'){
            if (numHours <= 100)
                netSalary = numHours * 20;
                    
            else{
                netSalary = 2000;
                cout << "The maximum amount that can be claimed is limited to 100 hours." << endl;
            }
        }
        else{
            if (numHours > 100){
                netSalary = 750;
                cout << "The maximum amount that can be claimed is limited to 100 hours." << endl;
            }
            else if (numHours > 50)
                netSalary = (numHours - 50) * 5 + 500;
                    
            else
                netSalary = numHours * 10;   
        }
    }
    else{
        do{
            cout << "Enter toy's category (B - Large size | S - Medium size | K - Small size): ";
            cin >> toyCategory;

            if (toyCategory != 'B' && toyCategory != 'S' && toyCategory != 'K')
                cout << "Invalid toy's category! Please enter again." << endl;

        } while (toyCategory != 'B' && toyCategory != 'S' && toyCategory != 'K');

        do{
            cout << "Enter number of toys assembled: ";
            cin >> numToys;

            if (numToys < 0)
                cout << "Invalid number of toys! Please enter again." << endl;
                        
        } while (numToys < 0);

        if (toyCategory == 'B')
            netSalary = numToys * 8;

        else if (toyCategory == 'S')
            netSalary = numToys * 5;
            
        else
            netSalary = numToys * 2;
    }
    cout << "Employee's name: " << employeeName << endl;
    cout << "Employee's number: " << employeeNum << endl;
    cout << "Employee's income: " << netSalary << endl;

    return 0;
}