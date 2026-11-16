#include "pch.h"
#include <iostream>
#include <cmath>

using namespace System;

int main(array<System::String^>^ args)
{
    const double sigma = 900.0;

    array<double>^ Mpr = { 150, 190, 250, 180, 140, 110, 80 };

    Console::WriteLine("Розрахунок дiаметра вала");
    Console::WriteLine("Сталь: Ст. 45");
    Console::WriteLine("Допустиме напруження [sigma] = 900 кгс/см^2");
    Console::WriteLine();

    Console::WriteLine("{0,-5} {1,-15} {2,-15}", "№", "Mпр", "d");

    for (int i = 0; i < Mpr->Length; i++)
    {
        double d = Math::Sqrt(Mpr[i] / (0.1 * sigma));

        Console::WriteLine(
            "{0,-5} {1,-15:F0} {2,-15:F3}",
            i + 1,
            Mpr[i],
            d
        );
    }
    Console::WriteLine();
    Console::WriteLine("Завдання 2 - додавання матриць");
    Console::WriteLine();

    const int rows = 3;
    const int cols = 3;

    array<int, 2>^ A = gcnew array<int, 2>
    {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    array<int, 2>^ B = gcnew array<int, 2>
    {
        { 9, 8, 7 },
        { 6, 5, 4 },
        { 3, 2, 1 }
    };

    array<int, 2>^ C = gcnew array<int, 2>(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i, j] = A[i, j] + B[i, j];
        }
    }

    Console::WriteLine("Матриця A:");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Console::Write("{0,5}", A[i, j]);
        }
        Console::WriteLine();
    }

    Console::WriteLine();
    Console::WriteLine("Матриця B:");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Console::Write("{0,5}", B[i, j]);
        }
        Console::WriteLine();
    }

    Console::WriteLine();
    Console::WriteLine("Матриця C = A + B:");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Console::Write("{0,5}", C[i, j]);
        }
        Console::WriteLine();
    }
    Console::ReadKey();

    return 0;
}