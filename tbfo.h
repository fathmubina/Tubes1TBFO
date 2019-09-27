
#ifndef __TBFO__
#define __TBFO__

extern int Hygiene;
extern int Energy;
extern int Fun;

void Tidur1();
/* Tidur Siang, divalidasi energi harus <= 5;
   I.S. : State sembarang
   F.S. : Energy bertambah +10 atau menampilkan pesan
        "Aksi tidak valid" */

void Tidur2();
/* Tidur Malam, divalidasi energi harus = 0;
   I.S. : State sembarang
   F.S. : Energy bertambah +15 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan1();
/* Makan Hamburger, divalidasi energi harus <= 10;
   I.S. : State sembarang
   F.S. : Energy bertambah +5 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan2();
/* Makan Pizza, divalidasi energi harus <= 5;
   I.S. : State sembarang
   F.S. : Energy bertambah +10 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan3();
/* Makan Steak and Beans, divalidasi energi harus = 0;
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

void MedSos();

void Komp();

void Mandi();

void Cuci();

void Musik();

void Baca1();

void Baca2();

#endif