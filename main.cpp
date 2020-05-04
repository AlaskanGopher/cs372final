#include <iostream>
using std::cout;
using std::endl;

int Sum(int a, int b)
{
    return a+b;
}
int Product(int a, int b)
{
    return a*b;
}

class Proxy
{
public:
    int getSum (int num1, int num2)
    {
        return Sum(num1, num2);
    }
    int getProduct (int num1, int num2)
    {
        return Product(num1, num2);
    }
};

int main () {
    Proxy a;
    cout << "Sum 1 + 2 = " << a.getSum(1,2) << endl;
    cout << "Product 2 * 3 = " << a.getProduct(2,3) << endl;
    return 0;
}