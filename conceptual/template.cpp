#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Adder{
    public:
    T add(T a,T b){
        return a+b;
    }
};


int main()
{
    Adder<int>intAdder;
    int sum=intAdder.add(3,4);
    cout<<sum<<endl; 

    Adder<double>doubleAdder;
    double result=doubleAdder.add(1.5,2.7);
    cout<<result<<endl;

    
    return 0;
}