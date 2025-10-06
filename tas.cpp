#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Delivary{ 
public:
	virtual double calculatecost(double wight)
	{
		return 0;
	}
	
};
class standarddelivary :public Delivary
{
public:
	double calculatecost(double wight)
	{
		return 10 + (wight * 2);
	}
};
	class expressdelivary :public Delivary
	{
	public:
		double calculatecost(double wight)
		{
			return 20 + (wight * 3);
		}
	};



int main() {
	Delivary* ptr;
	standarddelivary s; ptr = &s;
	cout << "Cost is " << ptr->calculatecost(15.5) << "\n";
	expressdelivary e; ptr = &e;
	cout << "Cost is " << ptr->calculatecost(20.3) << "\n";
	return 0;
}
