#include <iostream>
#include "Counter.cpp"
using namespace std;
int main() {
Counter counter1= counter1.GetInstance();
Counter counter2= counter2.GetInstance();
counter1.AddNewUser();
counter2.AddNewUser();
cout<<counter1.count<<endl;
cout<<counter2.count<<endl;


    return 0;
}
