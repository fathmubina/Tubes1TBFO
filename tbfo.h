
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
/* Tidur Siang, melakukan validasi terlebih dahulu yaitu
 Energy harus <= 5 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Energy bertambah +10 atau menampilkan pesan
        "Aksi tidak valid" */

void Tidur2();
/* Tidur Malam, melakukan validasi terlebih dahulu yaitu
 Energy harus = 0 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Energy bertambah +15 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan1();
/* Makan Hamburger, melakukan validasi terlebih dahulu yaitu
 Energy harus <= 10 jika valid maka akan melakukan aksi penambahan
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Energy bertambah +5 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan2();
/* Makan Pizza, melakukan validasi terlebih dahulu yaitu
 Energy harus <= 5 jika valid maka akan melakukan aksi penambahan
 atau pengurangan terhadap atribut. 
   I.S. : State sembarang
   F.S. : Energy bertambah +10 atau menampilkan pesan
        "Aksi tidak valid" */

void Makan3();
/* Makan Steak and Beans, melakukan validasi terlebih dahulu yaitu
 Energy harus = 0 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Energy bertambah +15 atau menampilkan pesan
        "Aksi tidak valid" */

void Minum1();
/* Minum Air, melakukan validasi terlebih dahulu yaitu
 Hygiene harus >= 5 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Hygiene berkurang -5
    atau menampilkan pesan
        "Aksi tidak valid" */

void Minum2();
/*  Minum Kopi, melakukan validasi terlebih dahulu yaitu
 Hygiene harus >= 10 dan energy harus <= 10 jika valid maka 
 akan melakukan aksi penambahan atau pengurangan terhadap atribut. 
   I.S. : State sembarang
   F.S. : Hygiene berkurang -10 dan energy bertambah 5
        atau menampilkan pesan "Aksi tidak valid" */

void Minum3();
/*  Minum Jus, melakukan validasi terlebih dahulu yaitu
 Hygiene harus >= 5 dan energy harus <= 5 jika valid maka 
 akan melakukan aksi penambahan atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Hygiene berkurang -5
    dan energy bertambah 10
        atau menampilkan pesan "Aksi tidak valid" */

void BuangK();
/*  Buang Air Kecil, melakukan validasi terlebih dahulu yaitu
 Hygiene harus <= 10 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Hygiene bertambah 5 atau menampilkan pesan "Aksi tidak valid" */

void BuangB();
/*  Buang Air Besar, melakukan validasi terlebih dahulu yaitu
 Hygiene harus <= 5 dan energy harus >= 5 jika valid maka 
 akan melakukan aksi penambahan atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Hygiene bertambah 10 dan energy berkurang -5
        atau menampilkan pesan "Aksi tidak valid" */

void Kafe();
/* Bersosialisasi ke Kasfe,  harus melakukan validasi terlebih dahulu
 yaitu Energy >= 10, fun = 0 dan Hygiene >=5 jika valid maka akan 
 melakukan aksi penambahan atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Fun bertambah +15, Energy berkurang -10, dan Hygiene bertambah -5
    atau menampilkan pesan
        "Aksi tidak valid" */

void MedSos();
/* Bermain Media Sosial,  harus melakukan validasi terlebih dahulu yaitu
 Energy >= 10 dan fun <= 5 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Fun bertambah +10 dan Energy berkurang -10 atau menampilkan pesan
        "Aksi tidak valid" */

void Komp();
/* Bermain komputer,  harus melakukan validasi terlebih dahulu yaitu
 Energy >= 10, fun = 0 dan Hygiene >=5 jika valid maka akan melakukan 
 aksi penambahan atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Fun bertambah +15, Energy berkurang -10, dan Hygiene bertambah -5
    atau menampilkan pesan
        "Aksi tidak valid" */

void Mandi();
/* Mandi,  harus melakukan validasi terlebih dahulu yaitu
 Energy >= 5 dan Hygiene = 0 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Hygiene bertambah +15, dan Energy berkurang -5
    atau menampilkan pesan
        "Aksi tidak valid" */

void Cuci();
/* Cuci,  harus melakukan validasi terlebih dahulu yaitu
 Hygiene <=10 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Hygiene bertambah +5 atau menampilkan pesan "Aksi tidak valid" */
void Musik();
/* Musik,  harus melakukan validasi terlebih dahulu yaitu
 Energy >=5 dan Fun <=5 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Fun bertambah +10 dan Energy berkurang  -5
    atau menampilkan pesan "Aksi tidak valid" */

void Baca1();
/* Baca1,  harus melakukan validasi terlebih dahulu yaitu
 Energy >=5 dan Fun <=10 jika valid maka akan melakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Fun bertambah +5 dan Energy berkurang -5
    atau menampilkan pesan "Aksi tidak valid" */

void Baca2();
/* Baca2,  melakukan validasi terlebih dahulu yaitu Fun<=5 dan Energy >=5 jika valid maka akan m                                lakukan aksi penambahan 
 atau pengurangan terhadap atribut.
   I.S. : State sembarang
   F.S. : Fun bertambah +10 dan Energy berkurang -5
    atau menampilkan pesan "Aksi tidak valid" */

#endif
