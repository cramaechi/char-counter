/*------------------------------------------------------------
Description: This the header file countertype.h. This is the 
interface for the class CounterType. Values of this type are 
used to count things, so it records a count that is a
non-negative whole number.

Author:     Chibuikem Amaechi
Email:      cramaechi@me.com 
------------------------------------------------------------*/

class CounterType
{
public:
	void setCount(unsigned int newCount);
	//Precondition: newCount >= 0
	//Postcondition: The variable count has been initialized.

	unsigned int getCount();//Returns the current value of count.
	void incrementCount();//Increments the variable count by 1.
	void decrementCount();//Decrements the varaible count by 1.
	void output();
private:
	unsigned int count;
};
