#include <iostream>
#include "Number.cpp"

int main() {
    Trio::Number num1(5), num2(3), num3;

    std::cout << "Birinci sayıyı giriniz :" << num1.get();
    std::cin >> num1;

    std::cout << "\nİkinci sayıyı giriniz : " << num2.get();
    std::cin >> num2;

    num3 = num1 + num2;
    std::cout << "\nİki sayının toplamı : " << num3.get();
    num3 = num1 - num2;
    std::cout << "\nİki sayının farkı : " << num3.get();
    num3 = num1 * num2;
    std::cout << "\nİki sayının çarpımı : " << num3.get();
    num3 = num1 / num2;
    std::cout << "\nİki sayının bölümü : " << num3.get();
    num3 = num1 ^ num2;
    std::cout << "\nÜst İşlemi : " << num1.get() << " ^ " << num2.get() << " = " << num3.get();
    num3 = num1 % num2;
    std::cout << "\nMod İşlemi : " << num1.get() << " % " << num2.get() << " = " << num3.get();
    num3 = ++num1;
    std::cout << "\nBirinci sayının 10 fazlası : " << num3.get();
    num3 = --num1;
    std::cout << "\nBirinci sayının 10 azı : " << num3.get();
    num3 = -num1;
    std::cout << "\nBirinci sayının negatif değeri : " << num3.get();
    num3 = ++num2;
    std::cout << "\nİkinci sayının 10 fazlası : " << num3.get();
    num3 = --num2;
    std::cout << "\nİkinci sayının 10 azı : " << num3.get();
    num3 = -num2;
    std::cout << "\nİkinci sayının negatif değeri : " << num3.get() << std::endl;

    return 0;
}
