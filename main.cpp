#include <iostream>
#include "Number.cpp"

int main() {
    Trio::Number num1(0), num2, num3;
    std::cout << "Birinci sayıyı giriniz : ";
    std::cin >> num1;
    std::cout << "\nİkinci sayıyı giriniz : ";
    std::cin >> num2;

    num3 = num1 + num2;
    std::cout << "\n\n\nİki sayının toplamı : " << num3.get();
    num3 = num1 - num2;
    std::cout << "\nİki sayının farkı : " << num3.get();
    num3 = num1 * num2;
    std::cout << "\nİki sayının çarpımı : " << num3.get();
    num3 = num1 / num2;
    std::cout << "\nİki sayının bölümü : " << num3.get();
    num3 = num1 ^ num2;
    std::cout << "\n\nÜst İşlemi : " << num1.get() << " ^ " << num2.get() << " = " << num3.get();
    num3 = num1 % num2;
    std::cout << "\nMod İşlemi : " << num1.get() << " % " << num2.get() << " = " << num3.get();
    num3 = ++num1;
    std::cout << "\nBirinci sayının 10 fazlası : " << num3.get();
    num3 = --num1;
    std::cout << "\nBirinci sayının 10 azı : " << num3.get();
    num3 = -num1;
    std::cout << "\nBirinci sayının negatif değeri : " << num3.get();
    num3 = ++num2;
    std::cout << "\n\nİkinci sayının 10 fazlası : " << num3.get();
    num3 = --num2;
    std::cout << "\nİkinci sayının 10 azı : " << num3.get();
    num3 = -num2;
    std::cout << "\nİkinci sayının negatif değeri : " << num3.get() << std::endl;
    return 0;
}
