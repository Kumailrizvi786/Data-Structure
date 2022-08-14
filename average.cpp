#include<iostream>
using namespace std;
class Avg
{
    public: int average(int a,int b,int c)
    {
        int avg=(a+b+c)/3;
        return avg;
    }
};
int main() // main
{
    int num1,num2,num3;
    cout<<"Enter 3 values to find their average \n";
    cin>>num1>>num2>>num3;
    int temp;
    Avg obj;
    temp= obj.average(num1,num2,num3);
    cout<<"The aaverage of the 3 numbers entered is\n";
    cout<<temp;
}
