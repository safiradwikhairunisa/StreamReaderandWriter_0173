#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw 3.5;     //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch(int a) {
        cout << a << " : Pengecualian akan dieksekusi" << endl;  //pada blok ini akan dieksekusi
    }
    catch (...){
        cout << "default pengecualian dieksekusi" << endl; //selain int maka blok akan dieksekusi
    }
    return 0;
}