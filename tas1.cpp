#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cmath>
#include<climits>
using namespace std;
class DelivarityTimeEstimator
{
public:
    int estimatetime(int distanceinKM)
    {
        return (distanceinKM / 10) + 1;
    }
    int estimatetime(string city)
    {
        if (city == "Cairo") { return 2; }
        else if (city == "Alex") { return 3;}
        else { return 5; }
    }
};

int main()
{
    DelivarityTimeEstimator time;
    cout<<"Enter anumber ";
    int n; cin >> n;
    cout << "Time is " << time.estimatetime(n);
    cout << "Enter city name ";
    string name; cin >> name;
    cout << "Time is " << time.estimatetime(name);
        return 0;

}

