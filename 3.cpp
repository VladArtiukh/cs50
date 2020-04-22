#include <iostream>
using namespace std;

long double factorial(int N)
{
    if(N < 0)
        return 0;
        if (N == 0)
        return 1;
    else
        return N * factorial(N - 1);
}

int main()
{
    int N;
    setlocale(0,"");
    cout << "Enter number factorial: ";
    cin >> N;
    cout << "factorial for " << N << " = " << factorial(N) << endl;
    return 0;
}
