#include <bits/stdc++.h>
#include "tbfo.h"

using namespace std;

bool Valid;

int main()
{
    string Input;
    Hygiene = 0;
    Energy = 10;
    Fun = 0;
    Valid = true;

    while (Valid)
    {
        getline(cin, Input);

        if (Input == "Tidur Siang")
            Tidur1();
        else if (Input == "Tidur Malam")
            Tidur2();
        else if (Input == "Makan Hamburger")
            Makan1();
        else if (Input == "Makan Pizza")
            Makan2();
        else if (Input == "Makan Steak and Beans")
            Makan3();
        else if (Input == "Minum Air")
            Minum1();
        else if (Input == "Minum Kopi")
            Minum2();
        else if (Input == "Minum Jus")
            Minum3();
        else if (Input == "Buang Air Kecil")
            BuangK();
        else if (Input == "Buang Air Besar")
            BuangB();
        else if (Input == "Bersosialisasi ke Kafe")
            Kafe();
        else if (Input == "Bermain Media Sosial")
            MedSos();
        else if (Input == "Bermain komputer")
            Komp();
        else if (Input == "Mandi")
            Mandi();
        else if (Input == "Cuci Tangan")
            Cuci();
        else if (Input == "Mendengarkan Musik di Radio")
            Musik();
        else if (Input == "Membaca Koran")
            Baca1();
        else if (Input == "Membaca Novel")
            Baca2();
        else
            cout << "Periksa Masukan Kembali\n";
    }

    return 0;
}