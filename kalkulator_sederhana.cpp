#include <iostream>

int main() {
    int pilihan;
    double angka1, angka2;

    std::cout << "Kalkulator Sederhana\n";
    std::cout << "1. Penjumlahan\n";
    std::cout << "2. Pengurangan\n";
    std::cout << "3. Perkalian\n";
    std::cout << "4. Pembagian\n";
    std::cout << "Pilih operasi (1-4): ";
    std::cin >> pilihan;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    double hasil;

    switch (pilihan) {
        case 1:
            hasil = angka1 + angka2;
            std::cout << "Hasil penjumlahan: " << hasil << std::endl;
            break;
        case 2:
            hasil = angka1 - angka2;
            std::cout << "Hasil pengurangan: " << hasil << std::endl;
            break;
        case 3:
            hasil = angka1 * angka2;
            std::cout << "Hasil perkalian: " << hasil << std::endl;
            break;
        case 4:
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                std::cout << "Hasil pembagian: " << hasil << std::endl;
            } else {
                std::cout << "Error: Pembagian dengan nol tidak valid!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Pilihan tidak valid!" << std::endl;
            break;
    }

    return 0;
}
