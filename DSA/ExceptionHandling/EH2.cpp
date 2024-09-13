#include <iostream>
#include <stdexcept> // For std::runtime_error

using namespace std;

int Division(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("Division by zero error");
    }
    int res = a / b;
    return res;
}

int main()
{
    int a = 10;
    int b = 0;

    try
    {
        int c = Division(a, b);
        cout << c << endl;
    }
    catch (const runtime_error &e)
    {
        // Catching division by zero error
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
