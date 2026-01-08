#include<iostream>
using namespace std;

struct employee{
    int empID;
    string name;
    int basicSal;
    int hra;
    int da;
    int grossSal;
};
int main()
{
    int n,roll;
    cout<<"Enter the number of employee's whose data you want to enter:";
    cin>>n;
    employee emp[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Employee ID:";
        cin>>emp[i].empID;
        cout<<"Enter Employee Name:";
        cin>>emp[i].name;
        cout<<"Enter Basic Salary of Employee:";
        cin>>emp[i].basicSal;
        emp[i].hra=0.2*emp[i].basicSal;
        emp[i].da=0.1*emp[i].basicSal;
        emp[i].grossSal=emp[i].basicSal+emp[i].hra+emp[i].da;
    }
    cout<<"-----Employee Details-----";
    for(i=0;i<n;i++)
    {
        cout<<"Employee ID:"<<emp[i].empID<<endl;
        cout<<"Employee's Basic Salary:"<<emp[i].basicSal<<endl;
        cout<<"Employee's HRA:"<<emp[i].hra<<endl;
        cout<<"Employee's DA:"<<emp[i].da<<endl;
        cout<<"Employee's Gross Salary:"<<emp[i].grossSal<<endl;

    }

    cout<<endl<<"Suryansh Sirohi B4 2501030201";
}
