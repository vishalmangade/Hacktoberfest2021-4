#include <bits/stdc++.h>
using namespace std;

// complex number class
class complexNo
{
private:
    int r;
    int i;

public:
    complexNo(int a, int b)
    {
        this->r = a;
        this->i = b;
        cout << "Compleax Number creates Successfully" << endl;
    }

    void display()
    {
        cout << this->r << " + " << this->i << 'i' << endl;
    }

    void add(complexNo c)
    {
        this->r = r + c.r;
        i = i + c.i;
    }

    void multiply(complexNo e)
    {
        int a = r, b = i, c = e.r, d = e.i;
        r = a * c - b * c;
        i = a * d + b * c;
    }
};

// driver code
int main()
{
    complexNo a(3, 6);
    complexNo b(4, 9);

    a.display();
    b.display();

    // a.add(b);
    // a.display();

    a.multiply(b);
    a.display();

    return 0;
}
