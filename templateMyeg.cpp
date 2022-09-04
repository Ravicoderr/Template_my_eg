#include <iostream>
using namespace std;

template <class t>
class vector
{
public:
    t c1, c2;
    t *arr;
    int size;
    vector(){};
    vector(t m)
    {
        size = m;
        arr = new t[size];
    }
    void dotProduct(vector v1, vector v2)
    {
        c1 = v1.arr[0] * v2.arr[0] + v1.arr[1] * v2.arr[1] + v1.arr[2] * v2.arr[2];
        c2 = v1.arr[0] * v2.arr[0] + v1.arr[1] * v2.arr[1] + v1.arr[2] * v2.arr[2];
        cout << (c1 + c2) / 2;
    }
};

int main()
{
    vector<float> v1(3); // vector 1
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); // vector 2
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.9;
    v2.arr[2] = 4.1;
    vector<float> v3;
    v3.dotProduct(v1, v2);

    return 0;
}

//Doubt video 64
