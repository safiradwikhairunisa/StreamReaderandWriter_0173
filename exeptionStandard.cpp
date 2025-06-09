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
}