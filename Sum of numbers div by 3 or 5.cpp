#include <iostream>
using namespace std;

double sumDivByN(int n,int target){
    int p=target/n;
    return n*p*(p+1)/2;
}

int main()
{
    int target=999;
    double sum=sumDivByN(3,target)+sumDivByN(5,target)-sumDivByN(15,target);
    cout<<sum;
    return 0;
}
