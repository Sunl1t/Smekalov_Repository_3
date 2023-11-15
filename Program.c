using System;


class Program
{
    static void InputFirstSymbol()
    {
        Console.Write("������� ������ ������: ");
        ch1 = Console.ReadKey().KeyChar;
        Console.WriteLine();
    }

    static void InputSecondSymbol()
    {
        Console.Write("������� ������ ������: ");
        ch2 = Console.ReadKey().KeyChar;
        Console.WriteLine();
    }

    static void PrintSymbolsAndAsciiCodes()
    {
        Console.WriteLine("������ " + ch1 + " ����� ��� ASCII " + (int)ch1);
        Console.WriteLine("������ " + ch2 + " ����� ��� ASCII " + (int)ch2);
    }

    static void PrintSumOfAsciiCodes()
    {
        int sum = (int)ch1 + (int)ch2;
        Console.WriteLine("����� ����� ASCII �������� " + ch1 + " � " + ch2 + " ����� " + sum);
    }

    static char ch1 = ' '; // ���������� ��� �������� ������� �������
    static char ch2 = ' '; // ���������� ��� �������� ������� �������

    static void Main()
    {
        while (true)
        {
            Console.WriteLine("���� ������:");
            Console.WriteLine("1. ������ ������ ������");
            Console.WriteLine("2. ������ ������ ������");
            Console.WriteLine("3. ������� ������ ������ � ��� ��� ASCII");
            Console.WriteLine("4. ������� ����� ����� ASCII �������� ch1 � ch2");
            Console.WriteLine("0. �����");

            Console.Write("�������� ����� ����: ");
            int choice = Int32.Parse(Console.ReadLine());
            switch (choice)
            {
            case 0:
                return; // ����� �� ���������
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
                Console.WriteLine("������������ �����. ���������� �����.");
                break;
            }
        }
    }
}
