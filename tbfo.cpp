#include <iostream>
#include "tbfo.h"

using namespace std;

int Hygiene;
int Energy;
int Fun;
char TidakValid[] = "Aksi tidak valid";

bool isValid(int State, int Min, int Max)
{
        /* Mengirim true jika Min <= State <= Max dgn 0 <= Min <= 15, 0 <= Max <= 15 */
        return (State >= Min) && (State <= Max);
}

void Tidur1()
{
        /* Tidur Siang, divalidasi energi harus <= 5;
        I.S. : State sembarang
        F.S. : Energy bertambah +10 atau menampilkan pesan
        "Aksi tidak valid" */
        if (!isValid(Energy, 0, 5))
                cout << TidakValid << "\n";
        else
                Energy = Energy + 10;
}

void Tidur2()
{
        /* Tidur Malam, divalidasi energi harus = 0;
        I.S. : State sembarang
        F.S. : Energy bertambah +15 atau menampilkan pesan
        "Aksi tidak valid" */
        if (!isValid(Energy, 0, 0))
                cout << TidakValid << "\n";
        else
                Energy = Energy + 15;
}
void Makan1()
{
        /* Makan Hamburger, divalidasi energi harus <= 10;
        I.S. : State sembarang
        F.S. : Energy bertambah +5 atau menampilkan pesan
        "Aksi tidak valid" */
        if (!isValid(Energy, 0, 10))
                cout << TidakValid << "\n";
        else
                Energy = Energy + 5;
}

void Makan2()
{
        /* Makan Pizza, divalidasi energi harus <= 5;
        I.S. : State sembarang
        F.S. : Energy bertambah +10 atau menampilkan pesan
        "Aksi tidak valid" */
        if (!isValid(Energy, 0, 5))
                cout << TidakValid << "\n";
        else
                Energy = Energy + 10;
}

void Makan3()
{
        /* Makan Steak and Beans, divalidasi energi harus = 0;
        I.S. : State sembarang
        F.S. : Energy bertambah +15 atau menampilkan pesan
        "Aksi tidak valid" */
        if (!isValid(Energy, 0, 0))
                cout << TidakValid << "\n";
        else
                Energy = Energy + 15;
}

void Minum1()
{
        /* Minum Air, divalidasi hygiene harus >= 5;
        I.S. : State sembarang
        F.S. : Hygiene berkurang -5 atau menampilkan pesan
        "Aksi tidak valid" */
        if (!isValid(Hygiene, 5, 15))
                cout << TidakValid << "\n";
        else
                Hygiene = Hygiene - 5;
}

void Minum2()
{
        /*  Minum Kopi, divalidasi hygiene harus >= 10 dan
        energy harus <= 10;
        I.S. : State sembarang
        F.S. : Hygiene berkurang -10 dan energy bertambah 5
        atau menampilkan pesan "Aksi tidak valid" */
        if (!isValid(Hygiene, 5, 15) && !isValid(Energy, 0, 10))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene - 10;
                Energy = Energy + 5;
        }
}

void Minum3()
{
        /*  Minum Jus, divalidasi hygiene harus >= 5 dan
        energy harus <= 5;
        I.S. : State sembarang
        F.S. : Hygiene berkurang -5 dan energy bertambah 10
        atau menampilkan pesan "Aksi tidak valid" */
        if (!isValid(Hygiene, 5, 15) && !isValid(Energy, 0, 5))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene - 5;
                Energy = Energy + 10;
        }
}

void BuangK()
{
        /*  Buang Air Kecil, divalidasi hygiene harus <= 10
        I.S. : State sembarang
        F.S. : Hygiene bertambah 5
        atau menampilkan pesan "Aksi tidak valid" */
        if (!isValid(Hygiene, 0, 10))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene + 5;
        }
}

void BuangB();
/*  Buang Air Besar, divalidasi hygiene harus <= 5 dan
    energy harus >= 5
   I.S. : State sembarang
   F.S. : Hygiene bertambah 10 dan energy berkurang -5
        atau menampilkan pesan "Aksi tidak valid" */

void Kafe();
/* Bersosialisasi ke Kasfe,  harus divalidasi energi >= 10, fun = 0 dan hygiene >=5.
   I.S. : State sembarang
   F.S. : Fun bertambah +15, Energy berkurang -10, dan hygiene bertambah -5 atau menampilkan pesan
        "Aksi tidak valid" */

void MedSos();
/* Bermain Media Sosial,  harus divalidasi energi >= 10 dan fun <= 5.
   I.S. : State sembarang
   F.S. : Fun bertambah +10 dan Energy berkurang -10 atau menampilkan pesan
        "Aksi tidak valid" */

void Komp();
/* Bermain komputer,  harus divalidasi energi >= 10, fun = 0 dan hygiene >=5.  ;
   I.S. : State sembarang
   F.S. : Fun bertambah +15, Energy berkurang -10, dan hygiene bertambah -5 atau menampilkan pesan
        "Aksi tidak valid" */

void Mandi();

void Cuci();

void Musik();

void Baca1();

void Baca2();
