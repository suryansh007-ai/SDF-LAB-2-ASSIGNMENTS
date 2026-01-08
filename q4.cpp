/*Create a structure Book with members: bookId, title, price. Write a program to:
 Store details of n books
 Sort and display books based on price (ascending order)*/
#include<iostream>
using namespace std;
struct books{
    int id;
    string title;
    float price;
};
void store(int n)
{
    int i;
    books book[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter book ID:";
        cin>>book[i].id;
        cout<<"Enter book title:";
        cin>>book[i].title;
        cout<<"Enter price of book:";
        cin>>book[i].price;
    }
}
void sort(int n)
{
    int i,j;
    books book[n];
    for (i=0;i<n-1;i++) 
    {
        for (j=0;j<n-i-1;j++) 
        {
            if (book[j].id>book[j+1].id) 
            {
                int temp=book[j].id;
                book[j].id=book[j+1].id;
                book[j+1].id=temp;
            }
        }
    }
    cout<<"---Sorted based on prices in ascending order---"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Book ID:"<<book[i].id<<endl;
        cout<<"Book Title:"<<book[i].title<<endl;
        cout<<"Book Price:"<<book[i].price<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter no. of books:";
    cin>>n;
    store(n);
    sort(n);
}