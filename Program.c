using System;

class Program
{
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
            default:
                Console.WriteLine("Некорректный выбор. Попробуйте снова.");
                break;
            }
        }
    }
}