#include "Counter.h"
Counter Counter::GetInstance(){
    if(instance==nullptr){
        instance=new Counter();
    }
    return *instance;
}

void Counter:: AddNewUser(){
    count++;
}
