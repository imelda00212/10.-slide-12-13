#include <stdio.h>

// Struct untuk menyimpan data menu restoran
struct Menu {
    char nama[50];
    int harga;
};

// Struct untuk menyimpan data pegawai restoran
struct Pegawai {
    char nama[50];
    int id;
};

int main() {
    // Membuat variabel dari struct Menu
    struct Menu menu1 = {"Nasi Goreng", 20000};
    struct Menu menu2 = {"Mie Goreng", 18000};

    // Membuat variabel dari struct Pegawai
    struct Pegawai pegawai1 = {"Andi", 101};
    struct Pegawai pegawai2 = {"Budi", 102};

    // Menampilkan data menu
    printf("===== MENU RESTORAN =====\n");

    printf("Nama Menu : %s\n", menu1.nama);
    printf("Harga     : Rp%d\n\n", menu1.harga);

    printf("Nama Menu : %s\n", menu2.nama);
    printf("Harga     : Rp%d\n\n", menu2.harga);

    // Menampilkan data pegawai
    printf("===== DATA PEGAWAI =====\n");

    printf("Nama Pegawai : %s\n", pegawai1.nama);
    printf("ID Pegawai   : %d\n\n", pegawai1.id);

    printf("Nama Pegawai : %s\n", pegawai2.nama);
    printf("ID Pegawai   : %d\n", pegawai2.id);

    return 0;
}