#include <bits/stdc++.h>
using namespace std;
class Deep_copying
{
private:
    int *deep;

public:
    void set_data(int d) { *deep = d; }
    int get_data()
    {
        return *deep;
    }
    //copying a constructor
    Deep_copying(int d);
    //destroying a constructor
    Deep_copying(const Deep_copying &source);
    Deep_copying();
};
Deep_copying::Deep_copying(int d)
{
    deep = new int;
    *deep = d;
}
Deep_copying::Deep_copying(const Deep_copying &source)
{
    delete deep;
    cout << " destructor is called " << endl;
}
void display_deep(Deep_copying s)
{
    cout << s.get_data() << endl;
}
int main()
{
    Deep_copying obj(1000000);
    display_deep(obj);
    Deep_copying obj2(obj);
    display_deep(obj2);
    return 0;
}
