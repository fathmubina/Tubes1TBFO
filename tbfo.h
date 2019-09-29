
#ifndef __TBFO__
#define __TBFO__

extern int Hygiene;
extern int Energy;
extern int Fun;
extern char TidakValid[];

void TulisKondisi();
/* Menulis semua kondisi
   I.S. : State sembarang
   F.S. : Menulis nilai ketiga kondisi */

bool isValid(int State, int Min, int Max);
/* Mengirim true jika Min <= State <= Max dgn 0 <= Min < 15, 0 < Max <= 15 */

void Tidur1();
/* Tidur Siang, divalidasi Energy harus <= 5;
   I.S. : State sembarang
   F.S. : Energy bertambah +10 atau menampilkan pesan
        "Aksi tidak valid" */

void Tidur2();
/* Tidur Malam, divalidasi Energy harus = 0;
   I.S. : State sembarang
   F.S. : Energy bertambah +15 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan1();
/* Makan Hamburger, divalidasi Energy harus <= 10;
   I.S. : State sembarang
   F.S. : Energy bertambah +5 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan2();
/* Makan Pizza, divalidasi Energy harus <= 5;
   I.S. : State sembarang
   F.S. : Energy bertambah +10 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan3();
/* Makan Steak and Beans, divalidasi Energy harus = 0;
   I.S. : State sembarang
   F.S. : Energy bertambah +15 atau menampilkan pesan
        "Aksi tidak valid" */

void Minum1();
/* Minum Air, divalidasi hygiene harus >= 5;
   I.S. : State sembarang
   F.S. : Hygiene berkurang -5 atau menampilkan pesan
        "Aksi tidak valid" */

void Minum2();
/*  Minum Kopi, divalidasi hygiene harus >= 10 dan
    energy harus <= 10;
   I.S. : State sembarang
   F.S. : Hygiene berkurang -10 dan energy bertambah 5
        atau menampilkan pesan "Aksi tidak valid" */

void Minum3();
/*  Minum Jus, divalidasi hygiene harus >= 5 dan
    energy harus <= 5;
   I.S. : State sembarang
   F.S. : Hygiene berkurang -5 dan energy bertambah 10
        atau menampilkan pesan "Aksi tidak valid" */

void BuangK();
/*  Buang Air Kecil, divalidasi hygiene harus <= 10
   I.S. : State sembarang
   F.S. : Hygiene bertambah 5
        atau menampilkan pesan "Aksi tidak valid" */

void BuangB();
/*  Buang Air Besar, divalidasi hygiene harus <= 5 dan
    energy harus >= 5
   I.S. : State sembarang
   F.S. : Hygiene bertambah 10 dan energy berkurang -5
        atau menampilkan pesan "Aksi tidak valid" */

void Kafe();
/* Bersosialisasi ke Kasfe,  harus divalidasi Energy >= 10, fun = 0 dan hygiene >=5.
   I.S. : State sembarang
   F.S. : Fun bertambah +15, Energy berkurang -10, dan hygiene bertambah -5 atau menampilkan pesan
        "Aksi tidak valid" */

void MedSos();
/* Bermain Media Sosial,  harus divalidasi Energy >= 10 dan fun <= 5.
   I.S. : State sembarang
   F.S. : Fun bertambah +10 dan Energy berkurang -10 atau menampilkan pesan
        "Aksi tidak valid" */

void Komp();
/* Bermain komputer,  harus divalidasi Energy >= 10, fun = 0 dan hygiene >=5.  ;
   I.S. : State sembarang
   F.S. : Fun bertambah +15, Energy berkurang -10, dan hygiene bertambah -5 atau menampilkan pesan
        "Aksi tidak valid" */

void Mandi();
/* Mandi,  harus divalidasi Energy >= 5 dan hygiene = 0.
   I.S. : State sembarang
   F.S. : Hygiene bertambah +15, dan Energy berkurang -5 atau menampilkan pesan
        "Aksi tidak valid" */

void Cuci();
/* Cuci,  harus divalidasi Hygiene <=10.
   I.S. : State sembarang
   F.S. : Hygiene bertambah +5 atau menampilkan pesan "Aksi tidak valid" */
void Musik();
/* Musik,  harus divalidasi Energy >=5 dan Fun <=5.
   I.S. : State sembarang
   F.S. : Fun bertambah +10 dan Energy -5 atau menampilkan pesan "Aksi tidak valid" */

void Baca1();
/* Baca1,  harus divalidasi Energy >=5 dan Fun <=10.
   I.S. : State sembarang
   F.S. : Fun bertambah +10 dan Energy -5 atau menampilkan pesan "Aksi tidak valid" */

void Baca2();
/* Baca1,  harus divalidasi Energy >=5 dan Fun <=5.
   I.S. : State sembarang
   F.S. : Fun bertambah +10 dan Energy -5 atau menampilkan pesan "Aksi tidak valid" */

#endif
