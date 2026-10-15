#include <stdio.h>

int main() {
    char Nama[50], NIM[50], Kelas_pararel[50], Tempat_Tanggal_Lahir[50], Alamat[50], Hobby[50], No_HP[50];

    printf("=== Input ===\n");
    printf("Nama                 : ");
    fgets(Nama, sizeof(Nama), stdin);
    
    printf("NIM                  : ");
    fgets(NIM, sizeof(NIM), stdin);
    
    printf("Kelas Paralel        : ");
    fgets(Kelas_pararel, sizeof(Kelas_pararel), stdin);
    
    printf("Tempat/Tanggal Lahir : ");
    fgets(Tempat_Tanggal_Lahir, sizeof(Tempat_Tanggal_Lahir), stdin);
    
    printf("Alamat               : ");
    fgets(Alamat, sizeof(Alamat), stdin);
    
    printf("Hobby                : ");
    fgets(Hobby, sizeof(Hobby), stdin);
    
    printf("No. HP               : ");
    fgets(No_HP, sizeof(No_HP), stdin);

    printf("\n=== Output ===\n");
    printf("Nama                 : %s", Nama);
    printf("NIM                  : %s", NIM);
    printf("Kelas Paralel        : %s", Kelas_pararel);
    printf("Tempat/Tanggal Lahir : %s", Tempat_Tanggal_Lahir);
    printf("Alamat               : %s", Alamat);
    printf("Hobby                : %s", Hobby);
    printf("No. HP               : %s", No_HP);

    return 0;
}