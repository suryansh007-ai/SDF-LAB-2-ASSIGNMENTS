#include<iostream>
using namespace std;
struct rect{
    float breadth;
    float length;
};
float area(rect r)
{
    float result;
    result=r.breadth*r.length;
    return result;
}
float peri(rect r)
{
    float ans;
    ans=2*(r.length+r.breadth);
    return ans;
}
int main()
{
    rect r;
    float a,b;
    cout<<"Enter length and breadth of rectangle:";
    cin>>r.length>>r.breadth;
    a=area(r);
    b=peri(r);
    cout<<"Area:"<<a;
    cout<<endl;
    cout<<"Perimeter:"<<b<<endl;
    cout<<"Suryansh Sirohi B4 2501030201";
    return 0;
}