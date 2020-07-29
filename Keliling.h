#include "iostream"
using namespace std;
class Keliling
{

public:
    // static property agar bisa di panggil langsung nanti di fungsi main

    void hitung(int a, int b, int c)
    {
        int hasil = a + b + c;
        cout << "Keliling Segitiga : ";
        cout << hasil << endl;
    }
};