class Luas
{
    // Ini property
private:
    int a, t;

public:
    // Settter
    void set(int alas, int tinggi)
    {
        a = alas;
        t = tinggi;
    }
    // hitung Luas segita
    int hitungLuas(){
        return (a * t ) * 0.5 ;
    }
};