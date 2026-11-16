#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    Console::WriteLine(L"Лабораторна робота №1");
    Console::WriteLine(L"Варiант 20");
    Console::WriteLine(L"========================");

    // Завдання 1
    Console::WriteLine(L"\nЗАВДАННЯ 1");

    double L = 30;
    double W = 25;
    double C = 20;

    double area = L * W;
    double price = area * C;

    Console::WriteLine(L"Довжина кiмнати: {0:F2} м", L);
    Console::WriteLine(L"Ширина кiмнати: {0:F2} м", W);
    Console::WriteLine(L"Цiна за 1 м2: {0:F2} грн", C);
    Console::WriteLine(L"Площа кiмнати: {0:F2} м2", area);
    Console::WriteLine(L"Загальна цiна покриття: {0:F2} грн", price);


    // Завдання 2
    Console::WriteLine(L"\nЗАВДАННЯ 2");

    Console::Write(L"Введiть перший рядок: ");
    String^ str1 = Console::ReadLine();

    Console::Write(L"Введiть другий рядок: ");
    String^ str2 = Console::ReadLine();

    String^ combined = str1 + L" " + str2;

    Console::WriteLine(L"Об'єднаний рядок: {0}", combined);


    // Завдання 3
    Console::WriteLine(L"\nЗАВДАННЯ 3");

    Console::Write(L"Введiть перший рядок: ");
    String^ compare1 = Console::ReadLine();

    Console::Write(L"Введiть другий рядок: ");
    String^ compare2 = Console::ReadLine();

    int result = String::Compare(compare1, compare2);

    if (result < 0)
        Console::WriteLine(L"Перший рядок менший за другий.");
    else if (result > 0)
        Console::WriteLine(L"Перший рядок бiльший за другий.");
    else
        Console::WriteLine(L"Рядки однаковi.");


    // Завдання 4
    Console::WriteLine(L"\nЗАВДАННЯ 4");

    Console::Write(L"Введiть рядок: ");
    String^ original = Console::ReadLine();

    String^ newString = L"begin " + original + L" end";

    Console::WriteLine(L"Новий рядок: {0}", newString);
    Console::WriteLine(L"Довжина нового рядка: {0}", newString->Length);


    // Завдання 5
    Console::WriteLine(L"\nЗАВДАННЯ 5");

    Console::Write(L"Введiть рядок: ");
    String^ reverseString = Console::ReadLine();

    String^ reversed = L"";

    for (int i = reverseString->Length - 1; i >= 0; i--)
    {
        reversed += reverseString[i];
    }

    Console::WriteLine(L"Рядок у зворотному порядку: {0}", reversed);


    // Завдання 6
    Console::WriteLine(L"\nЗАВДАННЯ 6");

    Console::Write(L"Введiть перший рядок: ");
    String^ line1 = Console::ReadLine();

    Console::Write(L"Введiть другий рядок: ");
    String^ line2 = Console::ReadLine();

    if (line1->Length > line2->Length)
        Console::WriteLine(L"Перший рядок довший.");
    else if (line1->Length < line2->Length)
        Console::WriteLine(L"Другий рядок довший.");
    else
        Console::WriteLine(L"Рядки мають однакову довжину.");

    Console::WriteLine(L"\n========================");
    Console::WriteLine(L"Роботу завершено!");

    return 0;
}
