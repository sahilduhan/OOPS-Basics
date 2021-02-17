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
    void display_marks()
    {
        cout << " your score is " << mark << " marks " << endl;
    }
    Marks *operator->()
    {
        return this;
    }
};
int main()
{
    Marks sahil(55);
    sahil.display_marks();
    sahil->display_marks();

    return 0;
}