#include <iostream>
#include "Keliling.h"
#include "Luas.h"
using namespace std;

int main()
{
  // keliling Variable ;
  int a, b, c;
  // luas variable ;
  int alas, tinggi;
  cout << "Selamat datang di program Menghitung Luas dan Keliling Segitiga \n";
  cout << "Masukan Nilai 1:  \t\n";
  cin >> a;
  cout << "Masukan Nilai 2:  \t\n";
  cin >> b;
  cout << "Masukan Nilai 3:  \t\n";
  cin >> c; // nilai sisi alas lain

  Keliling kl;
  kl.hitung(a, b, c);

  // Masukan Lagi Variable Alas dan Tinggi
  cout << "Masukan Nilai 1:  \t\n";
  cin >> alas;
  cout << "Masukan Nilai 2:  \t\n";
  cin >> tinggi;

  Luas l;
  // Set Nilai nya Yang Akan di kirim kan ke class Luas
  l.set(alas, tinggi);

  cout << "Luas Segitiga : " ; cout << l.hitungLuas() << endl ;

}