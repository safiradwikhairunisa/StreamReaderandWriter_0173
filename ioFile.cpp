#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    ofstream outfile; //membuat objek output file stream (ofstream)
    outfile.open("contoh file.txt"); //membuat file untuk ditulisi(outline)

    cout << ">= Menulis file , \'q' untuk keluar" << endl;
}

int main()
{
    while (true)
    {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q    
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam dile
        outfile << baris << endl;
    }
}