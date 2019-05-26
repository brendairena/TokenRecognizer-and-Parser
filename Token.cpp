#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

/** Fungsi untuk cek subjek **/
bool ceksubjek(string subjek) {
    int state = 0;
    int i = 0;
    while (subjek[i] != '\0') {
        switch (state) {
            case 0:
                if (subjek[i] == 'a') {
                    state = 1;
                    i++;
                } else {
                    i++; }
                break;
            case 1:
                if (subjek[i] == 'k') {
                    state = 3;
                    i++;
                } else if (subjek[i] == 'l') {
                    state = 2;
                    i++;
                } else {
                    i++; }
                break;
            case 2:
                if (subjek[i] == 'a' || subjek[i] == 'i') {
                    state = 4;
                    i++;
                } else if (subjek[i] == 'd') {
                    state = 5;
                    i++;
                } else {
                    i++; }
                break;
            case 3:
                if (subjek[i] == 'u') {
                    state = 6;
                    i++;
                } else {
                    i++; }
                break;
            case 4:
                if (subjek[i] == 'n') {
                    state = 6;
                    i++;
                } else {
                    i++; }
                break;
            case 5:
                if (subjek[i] == 'i' || subjek[i] == 'o') {
                    state = 6;
                    i++;
                } else {
                    i++; }
                break;
        }
    }
    if (state == 6) {
        return true;
    } else {
        return false; }
}
/** Fungsi untuk cek predikat **/
bool cekpredikat(string predikat) {
    int state = 0;
    int i = 0;
    while (predikat[i] != '\0') {
        switch (state) {
            case 0:
                if (predikat[i] == 'm') {
                    state = 1;
                    i++;
                } else {
                    i++;
                } break;
            case 1:
                if (predikat[i] == 'a') {
                    state = 2;
                    i++;
                } else {
                    i++;
                } break;
            case 2:
                if (predikat[i] == 'n') {
                    state = 3;
                    i++;
                } else if (predikat[i] == 'i') {
                    state = 4;
                    i++;
                } else if (predikat[i] == 'k') {
                    state = 5;
                    i++;
                } else if (predikat[i] == 's') {
                    state = 6;
                    i++;
                } else if (predikat[i] == 'r') {
                    state = 7;
                    i++;
                } else {
                    i++;
                } break;
            case 3:
                if (predikat[i] == 'd') {
                    state = 8;
                    i++;
                } else {
                    i++;
                } break;
            case 4:
                if (predikat[i] == 'n') {
                    state = 9;
                    i++;
                } else {
                    i++;
                } break;
            case 5:
                if (predikat[i] == 'a') {
                    state = 4;
                    i++;
                } else {
                    i++;
                } break;
            case 6:
                if (predikat[i] == 'a') {
                    state = 10;
                    i++;
                } else {
                    i++;
                } break;
            case 7:
                if (predikat[i] == 'a') {
                    state = 11;
                    i++;
                } else {
                    i++;
                } break;
            case 8:
                if (predikat[i] == 'i') {
                    state = 9;
                    i++;
                } else {
                    i++;
                } break;
            case 10:
                if (predikat[i] == 'k') {
                    state = 9;
                    i++;
                } else {
                    i++;
                } break;
            case 11:
                if (predikat[i] == 'h') {
                    state = 9;
                    i++;
                    break;
                } else {
                    i++;
                } break;
        }
    }
    if (state == 9) {
        return true;
    } else {
        return false;
    }
};
/** Fungsi untuk cek objek **/
bool cekobjek(string objek) {
    int state = 0;
    int i = 0;
    while (objek[i] != '\0') {
        switch (state) {
            case 0:
                if (objek[i] == 'd') {
                    state = 1;
                    i++;
                } else if (objek[i] == 'b') {
                    state = 2;
                    i++;
                } else if (objek[i] == 'm') {
                    state = 3;
                    i++;
                } else {
                    i++;
                } break;
            case 1:
                if (objek[i] == 'a') {
                    state = 4;
                    i++;
                } else {
                    i++;
                } break;
            case 2:
                if (objek[i] == 'a') {
                    state = 5;
                    i++;
                } else if (objek[i] == 'o') {
                    state = 6;
                    i++;
                } else {
                    i++;
                } break;
            case 3:
                if (objek[i] == 'i') {
                    state = 5;
                    i++;
                } else {
                    i++;
                } break;
            case 4:
                if (objek[i] == 'u') {
                    state = 7;
                    i++;
                } else {
                    i++;
                } break;
            case 5:
                if (objek[i] == 's') {
                    state = 8;
                    i++;
                } else {
                    i++;
                } break;
            case 6:
                if (objek[i] == 'l') {
                    state = 9;
                    i++;
                } else {
                    i++;
                } break;
            case 7:
                if (objek[i] == 'n') {
                    state = 10;
                    i++;
                } else {
                    i++;
                } break;
            case 8:
                if (objek[i] == 'o') {
                    state = 10;
                    i++;
                } else {
                    i++;
                } break;
            case 9:
                if (objek[i] == 'a' || objek[i] == 'u') {
                    state = 10;
                    i++;
                } else {
                    i++;
                } break;
        }
    }
    if (state == 10) {
        return true;
    } else {
        return false; }
};
/** Fungsi untuk cek keterangan **/
bool cekketerangan(string keterangan) {
    int state = 0;
    int i = 0;
    while (keterangan[i] != '\0') {
        switch (state) {
            case 0:
                if (keterangan[i] == 'a') {
                    state = 1;
                    i++;
                } else if (keterangan[i] == 'k') {
                    state = 2;
                    i++;
                } else if (keterangan[i] == 'b') {
                    state = 3;
                    i++;
                } else if (keterangan[i] == 'e') {
                    state = 4;
                    i++;
                } else {
                    i++;
                } break;
            case 1:
                if (keterangan[i] == 's') {
                    state = 5;
                    i++;
                } else {
                    i++;
                } break;
            case 2:
                if (keterangan[i] == 'e') {
                    state = 6;
                    i++;
                } else {
                    i++;
                } break;
            case 3:
                if (keterangan[i] == 'a') {
                    state = 7;
                    i++;
                } else {
                    i++;
                } break;
            case 4:
                if (keterangan[i] == 'n') {
                    state = 8;
                    i++;
                } else {
                    i++;
                } break;
            case 5:
                if (keterangan[i] == 'i') {
                    state = 9;
                    i++;
                } else {
                    i++;
                } break;
            case 6:
                if (keterangan[i] == 'm') {
                    state = 10;
                    i++;
                } else {
                    i++;
                } break;
            case 7:
                if (keterangan[i] == 's') {
                    state = 11;
                    i++;
                } else if (keterangan[i] == 'n') {
                    state = 12;
                    i++;
                } else {
                    i++;
                } break;
            case 8:
                if (keterangan[i] == 'a') {
                    state = 13;
                    i++;
                } else {
                    i++;
                } break;
            case 9:
                if (keterangan[i] == 'n') {
                    state = 15;
                    i++;
                } else {
                    i++;
                } break;
            case 10:
                if (keterangan[i] == 'a') {
                    state = 14;
                    i++;
                } else {
                    i++;
                } break;
            case 11:
                if (keterangan[i] == 'i') {
                    state = 15;
                    i++;
                } else {
                    i++;
                } break;
            case 12:
                if (keterangan[i] == 'y') {
                    state = 8;
                    i++;
                } else {
                    i++;
                } break;
            case 13:
                if (keterangan[i] == 'k') {
                    state = 15;
                    i++;
                } else {
                    i++;
                } break;
            case 14:
                 if (keterangan[i] == 'r') {
                    state = 5;
                    i++;
                 } else {
                    i++;
                 } break;
        }
    }
    if (state == 15) {
        return true;
    } else {
        return false; }
};
