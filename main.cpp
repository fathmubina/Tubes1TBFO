#include <bits/stdc++.h>
#include "tbfo.h"

using namespace std;

bool Jalan, Valid;

int main()
{
    string Input, enter;
    Hygiene = 0;
    Energy = 10;
    Fun = 0;
    Jalan = true;
    Valid = true;

    cout << "=====================================\n";
    cout << "Selamat datang di The Sims 'Gadungan'\n";
    cout << "=====================================\n\n";

    cout << "Terdapat beberapa pilihan\n";
    cout << "====================================================================================================================================\n";
    cout << "|1. Tidur Siang        |5. Makan Steak and Beans   |9. Buang Air Kecil         |13. Bermain komputer           |17. Membaca Koran  |\n";
    cout << "|2. Tidur Malam        |6. Minum Air               |10. Buang Air Besar        |14. Mandi                      |18. Membaca Novel  |\n";
    cout << "|3. Makan Hamburger    |7. Minum Kopi              |11. Bersosialisasi ke Kafe |15. Cuci Tangan                                    |\n";
    cout << "|4. Makan Pizza        |8. Minum Jus               |12. Bermain Media Sosial   |16. Mendengarkan Musik di Radio                    |\n";
    cout << "====================================================================================================================================\n\n";

    cout << "Kamu baru saja bangun, atributmu saat ini adalah\n";
    TulisAtribut();
    cout << "\nPilihlah dari aksi diatas.\n";

    while (Jalan)
    {
        if (Valid)
            cout << "Mau ngapain kamu? \n $ ";

        getline(cin, Input);
        cout << "\n";

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
        {
            cout << "Coba ulangi lagi masukanmu!\n $ ";
            Valid = false;
            continue;
        }

        if (isGameOver())
        {
            Jalan = false;
        }

        cout << "\n";
        Valid = true;
    }

    cout << "Permainan Selesai!!\n";
    cout << "Press Enter to Exit ";
    getline(cin, enter);

    return 0;
}