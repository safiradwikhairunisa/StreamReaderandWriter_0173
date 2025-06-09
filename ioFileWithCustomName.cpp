#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string namefile;

    cout << "Masukkan nama file: ";
    cin >> namefile;
    cin.ignore();

    ofstream outfile; //membuat objek output file stream (ofstream)
    outfile.open(namefile + ".csy"); //membuat file untuk ditulisi(outline)

    cout << ">= Menulis file , \'q\' untuk keluar" << endl;

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
    //selesai dalam menulis sekarang tutup file
    outfile.close();

    ifstream infile;  //membuat objek input file stream
    infile.open(namefile + ".csy");  //membuka file yang dituliskan

    cout << endl << ">= Membuka dan membaca file " << endl;
    //apabila file ada atau file sudah terbuat
    if (infile.is_open())
    {
        while (getline(infile, baris))  //lakukan perulangan setiap baris
        {
            cout << baris << '\n'; //dan lakukan penampilan disini
        }
        infile.close(); //tutup file setelah selesai
    }
    //jika tidak ditemukan maka akan ditampilkan
    else cout << "Unable to open file";
    return 0;
}

