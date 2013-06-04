#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double solve_28()
{
    long double a=0.0, total = 0.0;
    for(long double i=1.0; i<=100000.0; i+=1.0)
    {
        a = sqrt(i);
        total += a;
    }
    return total;
}

int main()
{
    cout << fixed<<int(round(sqrt(solve_28()))) << endl;
    return 0;
}

//4592
