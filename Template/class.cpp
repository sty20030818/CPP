#include <iostream>
using namespace std;

class Stu
{
    public:
    Stu(int a,int b) : A(a) , B(b) {}
    void print();

    private:
    int A,B;

};

void Stu :: print()
{
    cout << "A: " << A << ", B: " << B << endl;
}

int main()
{
    Stu stu(12,23);
    stu.print();

    return 0;
}
