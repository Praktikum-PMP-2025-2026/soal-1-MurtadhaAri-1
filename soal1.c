/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 - OVERVIEW OF C LANGUAGE
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : Murtadha Al-Askari (13224048)
 *   Nama File           : Gerbang_Koloni.c
 *   Deskripsi           : Sebuah gerbang keamanan memproses data satu peneliti. Tentukan status akhir peneliti berdasarkan level izin, suhu tubuh, kadar radiasi, dan jam kedatangan.
 * 
 */

 #include <stdio.h>
 int main () {
    int izin = 0;
    float suhu = 0;
    int radiasi = 0;
    int jam = 0;

    scanf("%d %f %d %d", &izin, &suhu, &radiasi, &jam); // Suhu_convert diperhatikan
    if(radiasi>=6) {
      printf("TOLAK");
    }
    else if (suhu >= 390)
    {
      printf("KARANTINA");
    }
    else if(izin == 1 && (jam<6||jam>20)){
      printf("TOLAK");
    }
    else if(izin == 1) {
      printf("MASUK");
    }
    else if(izin ==2 && radiasi <= 2 && (8<=jam<=18)){
      printf("MASUK");
    }
    else if(izin == 2){
      printf("PEMERIKSAAN");
    }
    else if(izin == 3 && radiasi == 0 && suhu<380){
      printf("MASUK");
    }
   else{
      printf("TOLAK");
   }
    return 0;
 }
