#include <bits/stdc++.h>
using namespace std;
class Marks
{
    int subjects[3];

public:
    Marks(int sub1, int sub2, int sub3)
    {
        subjects[1] = sub1;
        subjects[2] = sub2;
        subjects[3] = sub3;
    }
    int operator[](int positon)
    {
        return subjects[positon];
    }
};

int main()
{
    Marks sahil_duhan(22, 34, 66);
    cout << sahil_duhan[1] << endl;
    return 0;
}