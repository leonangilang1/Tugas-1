#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char tipeRumah,jenisPembayaran;
    double harga;

    cout << "Pilih tipe rumah (A-D): ";
    cin >> tipeRumah;

    cout << "Pilih jenis pembayaran [kredit/k atau tunai/t]: ";
    cin >> jenisPembayaran;

    switch (tipeRumah) {
        case 'A':
        case 'a':
            harga = 50000000;
            break;
        case 'B':
        case 'b':
            harga = 75000000;
            break;
        case 'C':
        case 'c':
            harga = 85000000;
            break;
        case 'D':
        case 'd':
            harga = 100000000;
            break;
        default:
            cout << "Masukan Kelas Rumah Yang Terdaftar" << endl;
            return 1;
    }

    double bunga = 0.20;
    double totalKredit = 0;
    if (jenisPembayaran == 'k' || jenisPembayaran == 'K') {
        totalKredit = harga * (1 + bunga);
    }

    double cicilanPerBulan = totalKredit / 120;

    cout << fixed << setprecision(0);

    
    if (totalKredit > 0) {
        cout << "Angsuran Perbulan: Rp " << cicilanPerBulan << endl;
        cout << "Total Hargga Rumah: Rp " << totalKredit << endl;
    } else {
    	cout << "Harga rumah untuk kelas " << tipeRumah << " adalah Rp " << harga << endl;
    }

    return 0;
}

