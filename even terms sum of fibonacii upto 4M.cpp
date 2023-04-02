#include <iostream>
using namespace std;

int main()
{
    int a=2,b=8;
    int sum=a+b;
    int x=0;
    while(x<=4000000){
        x=b*4+a;
        int temp=b;
        b=x;
        a=temp;
        sum+=x;
    }
    sum-=x;
    cout<<sum;
    
}
