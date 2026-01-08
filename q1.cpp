#include<iostream>
using namespace std;
struct student{
    int roll_no;
    string name;
    int marks1;
    int marks2;
    int marks3;
    int total;
    int avg;
};
int main()
{
    int n,roll;
    cout<<"Enter the number of student's whose data you want to enter:";
    cin>>n;
    student stu[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Student Roll No:";
        cin>>stu[i].roll_no;
        cout<<"Enter Student Name:";
        cin>>stu[i].name;
        cout<<"Enter Student's marks in subject 1:";
        cin>>stu[i].marks1;
        cout<<"Enter Student's marks in subject 2:";
        cin>>stu[i].marks2;
        cout<<"Enter Student's marks in subject 3:";
        cin>>stu[i].marks3;
    }
    cout<<endl<<"-------TOTAL & AVERAGE MARKS-------"<<endl;
    for(i=0;i<n;i++)
    {
        stu[i].total=stu[i].marks1+stu[i].marks2+stu[i].marks3;
        stu[i].avg=stu[i].total/3;
        cout<<"Total of student with roll number "<<stu[i].roll_no<<" is ";
        cout<<stu[i].total<<endl;

        cout<<"Average of above student is:"<<stu[i].avg<<endl;
    }
    cout<<"Enter the roll no. of student whose marks you want to display:";
    cin>>roll;
    for(i=0;i<n;i++)
    {
        if (stu[i].roll_no==roll)
        {
            cout<<"Marks in Subject 1:"<<stu[i].marks1<<endl;
            cout<<"Marks in Subject 2:"<<stu[i].marks2<<endl;
            cout<<"Marks in Subject 3:"<<stu[i].marks3;
            break;
        }
    }
    cout<<endl<<"Suryansh Sirohi B4 2501030201";
}
