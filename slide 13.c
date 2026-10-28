#include <stdio.h>

struct Menu {
    char nama[50];
    int harga;
};

struct Pegawai {
    char nama[50];
    int id;
};

int main() {
    // Data 5 menu makanan
    struct Menu makanan[5] = {
        {"Nasi Goreng", 20000},
        {"Mie Goreng", 18000},
        {"Ayam Bakar", 25000},
        {"Soto Ayam", 15000},
        {"Bakso", 17000}
    };

    // Data 3 menu minuman
    struct Menu minuman[3] = {
        {"Es Teh", 5000},
        {"Jus Jeruk", 10000},
        {"Air Mineral", 4000}
    };

    // Data 2 pegawai
    struct Pegawai pegawai[2] = {
        {"Andi", 101},
        {"Budi", 102}
    };

    int pilihan;
    int jenis;
    int nomor;

    do {
        printf("\n===== APLIKASI RESTORAN =====\n");
        printf("1. Tampilkan menu makanan dan minuman\n");
        printf("2. Ubah data menu\n");
        printf("3. Tampilkan data pegawai\n");
        printf("4. Ubah data pegawai\n");
        printf("5. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        // Menu 1: Menampilkan makanan dan minuman
        if (pilihan == 1) {
            printf("\n===== MENU MAKANAN =====\n");

            for (int i = 0; i < 5; i++) {
                printf("%d. %s - Rp%d\n",
                       i + 1, makanan[i].nama, makanan[i].harga);
            }

            printf("\n===== MENU MINUMAN =====\n");

            for (int i = 0; i < 3; i++) {
                printf("%d. %s - Rp%d\n",
                       i + 1, minuman[i].nama, minuman[i].harga);
            }
        }

        // Menu 2: Mengubah data menu
        else if (pilihan == 2) {
            printf("\nPilih jenis menu:\n");
            printf("1. Makanan\n");
            printf("2. Minuman\n");
            printf("Pilihan: ");
            scanf("%d", &jenis);

            if (jenis == 1) {
                printf("\nPilih nomor makanan (1-5): ");
                scanf("%d", &nomor);

                if (nomor >= 1 && nomor <= 5) {
                    printf("Nama makanan baru: ");
                    scanf(" %49[^\n]", makanan[nomor - 1].nama);

                    printf("Harga makanan baru: ");
                    scanf("%d", &makanan[nomor - 1].harga);

                    printf("Data makanan berhasil diubah!\n");
                } else {
                    printf("Nomor makanan tidak valid!\n");
                }
            }

            else if (jenis == 2) {
                printf("\nPilih nomor minuman (1-3): ");
                scanf("%d", &nomor);

                if (nomor >= 1 && nomor <= 3) {
                    printf("Nama minuman baru: ");
                    scanf(" %49[^\n]", minuman[nomor - 1].nama);

                    printf("Harga minuman baru: ");
                    scanf("%d", &minuman[nomor - 1].harga);

                    printf("Data minuman berhasil diubah!\n");
                } else {
                    printf("Nomor minuman tidak valid!\n");
                }
            }

            else {
                printf("Jenis menu tidak valid!\n");
            }
        }

        // Menu 3: Menampilkan data pegawai
        else if (pilihan == 3) {
            printf("\n===== DATA PEGAWAI =====\n");

            for (int i = 0; i < 2; i++) {
                printf("%d. Nama: %s | ID: %d\n",
                       i + 1, pegawai[i].nama, pegawai[i].id);
            }
        }

        // Menu 4: Mengubah data pegawai
        else if (pilihan == 4) {
            printf("\nPilih nomor pegawai (1-2): ");
            scanf("%d", &nomor);

            if (nomor >= 1 && nomor <= 2) {
                printf("Nama pegawai baru: ");
                scanf(" %49[^\n]", pegawai[nomor - 1].nama);

                printf("ID pegawai baru: ");
                scanf("%d", &pegawai[nomor - 1].id);

                printf("Data pegawai berhasil diubah!\n");
            } else {
                printf("Nomor pegawai tidak valid!\n");
            }
        }

        // Menu 5: Keluar
        else if (pilihan == 5) {
            printf("Program selesai. Terima kasih!\n");
        }

        else {
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

    } while (pilihan != 5);

    return 0;
}