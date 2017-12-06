//Program uses a class called CounterType to count characters read in.
#include <iostream>
#include <cstdlib>
#include "countertype.h"
using namespace std;

int main()
{
	CounterType counter;
	counter.setCount(0);

	cout<<"Please write a random statement: ";
    char c;

    do
    {
        cin>>c;
		counter.incrementCount();
    }while (cin.peek() != '\n');

    cout<<endl;
	cout<<"The CounterType object recorded "<<counter.getCount()<<" characters";
    cout<<" typed."<<endl;

	return 0;
}
