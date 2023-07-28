#ifndef NUMBER_H
#define NUMBER_H

#include <istream>
#include <ostream>

namespace Trio
{
    class Number
    {
        

    public:
        Number operator+(Number &rhs); // Yanındaki Number tipinden objenin sayısı ile toplar
        int get(); // Tutulan sayıyı gönderir
        Number operator-(Number &rhs); // Yanındaki Number tipinden objenin sayısı ile farkını alır
        Number operator*(Number &rhs); // Yanındaki Number tipinden objenin sayısı ile çarpımını alır
        Number operator/(Number &rhs); // Yanındaki Number tipinden objenin sayısı ile bölümünü alır
        Number operator^(Number &rhs); // Yanındaki Number tipinden objenin sayısı ile üstünü alır
        Number operator%(Number &rhs); // Yanındaki Number tipinden objenin sayısı ile modunu alır
        Number operator++(); // Sayıyı 10 arttırır
        Number operator--(); // Sayıyı 10 azaltır
        Number operator-(); //Sayıyı negatif yapar
        Number(int number) : value{number} {} // Sayı verilerek tanımlanması için Constructor
        Number() : value{0} {} // Sayı verilmeden tanımlanması için Constructor
        ~Number() {}
        friend std::istream& operator>>(std::istream& is, Number& number)// Sayıyı kullanıcının verdiği değer yapar
        {
            is >> number.value;
            return is;
        }
    private:
        int value; // Sayının tutulduğu obje
    };
}

#endif //NUMBER_H
