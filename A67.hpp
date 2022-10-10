//

#include <iomanip>
#include <iostream>
using namespace std;

void swap(int &val1,int &val2)
{
    int temp;
    temp=val1;
    val1=val2;
    val2=temp;
}
void swap(int &val1,int &val2,int &val3)
{
    int max,min,med;
    if(val1>val2&&val1>val3)
    {
        max=val1;
        if(val2>val3)
        {
            med=val2;
            min=val3;
        }
        else
        {
            med=val3;
            min=val2;
        }
    }
    else if(val2>val1&&val2>val3)
    {
        max=val2;
        if(val1>val3)
        {
            med=val1;
            min=val3;
        }
        else
        {
            med=val3;
            min=val1;
        }
    }
    else
    {
        max=val3;
        if(val1>val2)
        {
            med=val1;
            min=val2;
        }
        else
        {
            med=val2;
            min=val1;
        }
    }
    val1=min;
    val2=med;
    val3=max;
}
void swap(int &val1,int &val2,int &val3,int &val4)
{
    int temp;
    temp=val1;
    val1=val2;
    val2=val3;
    val3=val4;
    val4=temp;
}
// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
