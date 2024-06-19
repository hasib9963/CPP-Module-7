#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
    // Student(string name, int roll, int marks)
    // {
    //     this->name=name;
    //     this->roll=roll;
    //     this->marks=marks;
    // } // this a constructor
    // array of obejct banaile amra constructr nei na
    // sodhu class nei;
};
int main()
{
    Student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name); // get line for space
        cin>>a[i].roll;
        cin>>a[i].marks;
        cin.ignore();// this for skip enter 
        // jehuto amra object input nibo tai
        // a[i] er pore dot diye object er nam
        // ta bosate hobe
    }
    Student mx;
    mx.marks=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(a[i].marks>mx.marks)
        {
            mx=a[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

    Student mn;
    mn.marks=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(a[i].marks<mn.marks)
        {
            mn=a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    return 0;
}