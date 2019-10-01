#include <iostream>
#include "tbfo.h"

using namespace std;

int Hygiene;
int Energy;
int Fun;
char TidakValid[] = "Aksi tidak valid";

bool isGameOver()
{
        /* Mengirimkan true jika permainan selesai yaitu 
        semua atribut bernilai 0 atau 15 */
        return ((Hygiene == 15) && (Energy == 15) && (Fun == 15)) || ((Hygiene == 0) && (Energy == 0) && (Fun == 0));
}

void TulisKondisi()
{
        /* Menulis semua atribut
        I.S. : Atribut sembarang
        F.S. : Menulis nilai ketiga kondisi */
        cout << "Hygiene = " << Hygiene << "\n";
        cout << "Energy = " << Energy << "\n";
        cout << "Fun = " << Fun << "\n";
}

bool isValid(int Atribut, int Min, int Max)
{
        /* True jika Min <= Atribut <= Max 
        dgn 0 <= Min <= 15, 0 <= Max <= 15 */

        return (Atribut >= Min) && (Atribut <= Max);
}

void Tidur1()
{
        /* Tidur Siang, harus divalidasi energi harus <= 5
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Energy bertambah +10 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Energy, 0, 5))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy + 10;
                TulisKondisi();
        }
}

void Tidur2()
{
        /* Tidur Malam, harus divalidasi energi harus = 0
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Energy bertambah +15 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Energy, 0, 0))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy + 15;
                TulisKondisi();
        }
}
void Makan1()
{
        /* Makan Hamburger, harus divalidasi energi harus <= 10;
        I.S. :  Atribut sembarang
        F.S. :  Energy bertambah +5 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Energy, 0, 10))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy + 5;
                TulisKondisi();
        }
}

void Makan2()
{
        /* Makan Pizza, harus divalidasi energi harus <= 5
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Energy bertambah +10 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Energy, 0, 5))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy + 10;
                TulisKondisi();
        }
}

void Makan3()
{
        /* Makan Steak and Beans, harus divalidasi energi harus = 0
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Energy bertambah +15 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Energy, 0, 0))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy + 15;
                TulisKondisi();
        }
}

void Minum1()
{
        /* Minum Air, harus divalidasi hygiene harus >= 5
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Hygiene berkurang -5 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 5, 15))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene - 5;
                TulisKondisi();
        }
}

void Minum2()
{
        /*  Minum Kopi, harus divalidasi hygiene harus >= 10 dan energy harus <= 10
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Hygiene berkurang -10 dan energy bertambah 5
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 5, 15) || !isValid(Energy, 0, 10))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene - 10;
                Energy = Energy + 5;
                TulisKondisi();
        }
}

void Minum3()
{
        /*  Minum Jus, harus divalidasi hygiene harus >= 5 dan energy harus <= 5
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Hygiene berkurang -5 dan energy bertambah 10
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 5, 15) || !isValid(Energy, 0, 5))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene - 5;
                Energy = Energy + 10;
                TulisKondisi();
        }
}

void BuangK()
{
        /*  Buang Air Kecil, harus divalidasi hygiene harus <= 10
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Hygiene bertambah 5
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 0, 10))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene + 5;
                TulisKondisi();
        }
}

void BuangB()
{
        /*  Buang Air Besar, harus divalidasi hygiene harus <= 5 dan energy harus >= 5
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Hygiene bertambah 10 dan energy berkurang -5
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 0, 5) || !isValid(Energy, 5, 15))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene + 10;
                Energy = Energy - 5;
                TulisKondisi();
        }
}

void Kafe()
{
        /* Bersosialisasi ke Kasfe,  harus divalidasi energi >= 10, fun = 0 dan hygiene >=5.
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Fun bertambah +15, Energy berkurang -10, dan hygiene bertambah -5 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 5, 15) || !isValid(Energy, 10, 15) || !isValid(Fun, 0, 0))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene - 5;
                Energy = Energy - 10;
                Fun = Fun + 15;
                TulisKondisi();
        }
}

void MedSos()
{
        /* Bermain Media Sosial,  harus divalidasi energi >= 10 dan fun <= 5.
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Fun bertambah +10 dan Energy berkurang -10 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Fun, 0, 5) || !isValid(Energy, 10, 15))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy - 10;
                Fun = Fun + 10;
                TulisKondisi();
        }
}

void Komp()
{
        /* Bermain komputer,  harus divalidasi energi >= 10, fun = 0 dan hygiene >=5.
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Fun bertambah +15, Energy berkurang -10, dan hygiene bertambah -5 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 5, 15) || !isValid(Energy, 10, 15) || !isValid(Fun, 0, 0))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene - 5;
                Energy = Energy - 10;
                Fun = Fun + 15;
                TulisKondisi();
        }
}

void Mandi()
{
        /* Mandi,  harus melakukan validasi terlebih dahulu yaitu Energy >= 5 dan Hygiene = 0 
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Hygiene bertambah +15, dan Energy berkurang -5
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 0, 0) || !isValid(Energy, 5, 15))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene + 15;
                Energy = Energy - 5;
                TulisKondisi();
        }
}

void Cuci()
{
        /* Cuci,  harus melakukan validasi terlebih dahulu yaitu Hygiene <=10 
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Hygiene bertambah +5 
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Hygiene, 0, 10))
                cout << TidakValid << "\n";
        else
        {
                Hygiene = Hygiene + 5;
                TulisKondisi();
        }
}
void Musik()
{
        /* Musik,  harus melakukan validasi terlebih dahulu yaitu Energy >=5 dan Fun <=5 
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Fun bertambah +10 dan Energy berkurang  -5
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Energy, 5, 15) || !isValid(Fun, 0, 5))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy - 5;
                Fun = Fun + 10;
                TulisKondisi();
        }
}

void Baca1()
{
        /* Baca1,  harus melakukan validasi terlebih dahulu yaitu Energy >=5 dan Fun <=10 
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Fun bertambah +5 dan Energy berkurang -5
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Energy, 5, 15) || !isValid(Fun, 0, 10))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy - 5;
                Fun = Fun + 5;
                TulisKondisi();
        }
}

void Baca2()
{
        /* Baca2,  melakukan validasi terlebih dahulu yaitu Fun<=5 dan Energy >=5 
        jika valid maka akan melakukan aksi penambahan atau pengurangan terhadap atribut.
        I.S. :  Atribut sembarang
        F.S. :  Fun bertambah +10 dan Energy berkurang -5
                atau menampilkan pesan "Aksi tidak valid" */

        if (!isValid(Energy, 5, 15) || !isValid(Fun, 0, 5))
                cout << TidakValid << "\n";
        else
        {
                Energy = Energy - 5;
                Fun = Fun + 10;
                TulisKondisi();
        }
}
