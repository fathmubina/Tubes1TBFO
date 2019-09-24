#include<bits/stdc++.h>
using namespace std;

int Hygiene,Energy,Fun;
bool Valid;

int main(){
    Hygiene=0;
    Energy=0;
    Fun=0;
    Tidur();
    cout<<Hygiene<<endl;
    return 0;
}


void TidurSiang(){
    Hygiene+=10;
}


void TidurMalam(){
    Hygiene+=15;
}

// Malam
// +15 energy
void MakanHamburger(){
    Energy+=5;
}
void MakanPizza(){
    Energy+=10
}

void MakanSteakBeans(){
    Energy+=15;
}
void MinumAir(){
    Hygiene-=5;
}

void MinumKopi(){
    Energy+=5;
    Hygiene-=10;
}
void MinumJus(){
    Energy+=10;
    Hygiene-=5;
}

// Buang Air <jenis>
// Kecil
// +5 hygiene
// Besar
// +10 hygiene
// -5 energy
// Bersosialisasi ke Kafe
// -
// +15 fun
// -10 energy
// -5 hygiene
// Bermain Media Sosial
// -
// +10 fun
// -10 energy
// Bermain komputer
// -
// +15 fun
// -10 energy
// Mandi
// -
// +15 hygiene
// -5 energy
// Cuci Tangan
// -
// +5 hygiene
// Mendengarkan Musik di Radio
// -
// +10 fun
// -5 energy
// Membaca <jenis_bacaan>
// Jenis Bacaan:
// Koran
// Novel

// Koran:
// +5 fun
// -5 energy

// Novel:
// +10 fun
// -5 energy
// // 
