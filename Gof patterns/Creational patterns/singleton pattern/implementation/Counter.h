#ifndef UNTITLED8_COUNTER_H
#define UNTITLED8_COUNTER_H
#include <iostream>
class Counter {

private:
    static Counter* instance; //Lazy initialization
    Counter()= default;
public:
    int count=0;
    static Counter GetInstance();
    void AddNewUser();


};
#endif //UNTITLED8_COUNTER_H
