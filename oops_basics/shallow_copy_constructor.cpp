#include <bits/stdc++.h>
using namespace std;
class Shallow
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; }
    int get_data()
    {
        return *data;
    }
    //copying a constructor
    Shallow(int d);
    //destroying a constructor
    Shallow(const Shallow &source);
    ~Shallow();
};
Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}
Shallow::Shallow(const Shallow &source)
    : data(source.data)
{
    cout << " shallow constructor is called " << endl;
}
Shallow::~Shallow()
{
    delete data;
    cout << " destructor is called " << endl;
}
void display_data(Shallow s)
{
    cout << s.get_data() << endl;
}
int main()
{
    Shallow sai(100);
    display_data(sai);

    return 0;
}