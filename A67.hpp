//

#include <iomanip>
#include <iostream>
using namespace std;

void getinput(int &num)
{
    cin>>num;
}
void getinput(int &val1,int &val2)
{
    cin>>val1>>val2;
}
void getinput(int &val1,int &val2,int &val3)
{
    cin>>val1>>val2>>val3;
}
void getinput(int &val1,int &val2,int val3,int &val4)
{
    cin>>val1>>val2>>val3>>val4;
}
void swap(int &val1,int &val2)
{
    int temp;
    temp=val1;
    val1=val2;
    val2=temp;
}
void swap(int &val1,int &val2,int &val3)
{
    int temp;
    temp=val1;
    val1=val3;
    val3=val2;
    val2=temp;
}
void swap(int &val1,int &val2,int &val3,int &val4)
{
    int temp;
    temp=val1;
    val1=val4;
    val4=val3;
    val3=val2;
    val2=temp;
}
// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
