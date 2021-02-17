#include <bits/stdc++.h>
using namespace std;
class Marks
{
    int mark;

public:
    Marks(int num)
    {
        mark = num;
    }
    void your_marks()
    {
        cout << " hey i got " << mark << "marks" << endl;
    }
    Marks operator()(int mk)
    {
        mark = mk;
        cout << "operator is called " << endl;
        return *this;
    }
};

int main()
{
Marks sahil(77);
sahil.your_marks();
sahil(77);
    return 0;
}