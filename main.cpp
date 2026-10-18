#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);

    // Inisialisasi elemen list sesuai urutan latihan (Output: 9 12 8 0 2)[cite: 62, 63]
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Menampilkan isi list
    printInfo(L);

    // Soal 3: Mencari elemen dengan info 8[cite: 63]
    infotype cari = 8;
    address found = findElm(L, cari);
    if (found != Nil) {
        cout << cari << " ditemukan dalam list" << endl;
    } else {
        cout << cari << " tidak ditemukan dalam list" << endl;
    }

    // Soal 4: Menghitung jumlah total info seluruh elemen[cite: 63]
    int total = totalInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}