using System;


class Program
{
    static void InputFirstSymbol()
    {
        Console.Write("Введите первый символ: ");
        ch1 = Console.ReadKey().KeyChar;
        Console.WriteLine();
    }

    static void InputSecondSymbol()
    {
        Console.Write("Введите второй символ: ");
        ch2 = Console.ReadKey().KeyChar;
        Console.WriteLine();
    }

    static void PrintSymbolsAndAsciiCodes()
    {
        Console.WriteLine("Символ " + ch1 + " имеет код ASCII " + (int)ch1);
        Console.WriteLine("Символ " + ch2 + " имеет код ASCII " + (int)ch2);
    }

    static void PrintSumOfAsciiCodes()
    {
        int sum = (int)ch1 + (int)ch2;
        Console.WriteLine("Сумма кодов ASCII символов " + ch1 + " и " + ch2 + " равна " + sum);
    }

    static char ch1 = ' '; // переменная для хранения первого символа
    static char ch2 = ' '; // переменная для хранения второго символа

    static void Main()
    {
        while (true)
        {
            Console.WriteLine("Меню выбора:");
            Console.WriteLine("1. Ввести первый символ");
            Console.WriteLine("2. Ввести второй символ");
            Console.WriteLine("3. Вывести каждый символ и его код ASCII");
            Console.WriteLine("4. Вывести сумму кодов ASCII символов ch1 и ch2");
            Console.WriteLine("0. Выйти");

            Console.Write("Выберите пункт меню: ");
            int choice = Int32.Parse(Console.ReadLine());
            switch (choice)
            {
            case 0:
                return; // выход из программы
            case 1:
                InputFirstSymbol();
                break;
            case 2:
                InputSecondSymbol();
                break;
            case 3:
                PrintSymbolsAndAsciiCodes();
                break
            case 4:
                PrintSumOfAsciiCodes();
                break;
            default:
                Console.WriteLine("Некорректный выбор. Попробуйте снова.");
                break;
            }
        }
    }
}
