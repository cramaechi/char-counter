/*------------------------------------------------------
Description: This is the implementation for the class
CounterType. The interface is in the file countertype.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
------------------------------------------------------*/
#include <iostream>
#include "countertype.h"

using namespace std;

void CounterType::setCount(unsigned int newCount)
{
    count = newCount;
}

unsigned int CounterType::getCount()
{
    return count;
}

void CounterType::incrementCount()
{
    ++count;
}

void CounterType::decrementCount()
{
    --count;
}

void CounterType::output()
{
    cout<<"Count value: "<<count<<endl;
}
