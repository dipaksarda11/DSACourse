#include <iostream>
using namespace std;

int nthTermInAP(int a,int d,int n){
    int nthTerm=0;
    nthTerm = a+(n-1)*d;
    return nthTerm;
}

int totalNoOfBits(int a,int b){
    int cnt=0;
    while(a!=1 || b!=1){
        if(a%2!=0){
            cnt++;
        }
        if(b%2!=0){
            cnt++;
        }
        b/=2;
        a/=2;
    }
    cnt+=2;
    return cnt;
}

int fibonacci(int n){
    int a=0;
    int b=1;
    int temp;
    while(n>2){
        temp = a + b;
        a = b;
        b = temp;
        n--;
    }
    return temp;
}

int main()
{
    cout<<"Nth Term in an AP: "<<nthTermInAP(1,2,6)<<endl;
    cout<<"Total No of Bits in a and b: "<<totalNoOfBits(11,15)<<endl;
    cout<<"Nth Fibonacci Number is: "<<fibonacci(8)<<endl;
    return 0;
}
