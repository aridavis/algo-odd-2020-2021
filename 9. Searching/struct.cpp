#include <stdio.h>
#include <string.h>

struct mahasiswa
{
    char nama[2000];
    char nim[2000];
    char jurusan[2000];
    int a;
    int b;
    void makan()
    {
        printf("%s lagi makan\n", nama);
    }
};

int main()
{
    // Set Array
    mahasiswa arr[100] = {};

    // Set Ari
    mahasiswa ari;
    strcpy(ari.nama, "Ari Davis");
    strcpy(ari.nim, "2201765220");
    strcpy(ari.jurusan, "IT");

    // Set Junaedi

    mahasiswa jun;
    strcpy(jun.nama, "Junaedi Dede");
    strcpy(jun.nim, "220112321");
    strcpy(jun.jurusan, "IT");

    arr[0] = ari;
    arr[1] = jun;

    // Swap

    mahasiswa temp;
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    arr[1].makan();

    return 0;
}