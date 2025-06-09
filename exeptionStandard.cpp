#include <iostream>
#include <exception>
#include <array> //untuk objek exception yg akan digunakan
using namespace std; //untuk objek array yang akan digunakan

int main()
{
    cout << "awal program" << endl;     //penanda 1
    try {
        array<int, 3> data = {10, 20, 30};
        cout << data.at(5) << endl; //peran array dalam integer 3 elemen
        //memanggil array elemen ke 5
    }
    catch (exception & e) 
    {
        //penangkap menggunakan objek exeption
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris program yang terkahir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meski terjadi kesalahan*/

    return 0;
}