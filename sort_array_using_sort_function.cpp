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
bool cmp(Student a, Student b)
{
    //if(a.marks < b.marks) return true;
    if(a.marks > b.marks) return true;
    else return false;
    // amra marks er vittite sort korteci
}
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
    // sort function use korbo
    // sort function kiser vittite sort korbe 
    // setar jonno ekta boolean function banabo
    sort(a,a+3,cmp);
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<endl;
        cout<<a[i].roll<<endl;
        cout<<a[i].marks<<endl;
    }
    return 0;
}