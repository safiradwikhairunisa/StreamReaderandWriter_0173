#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw 3.5;     //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
}