using System;


class Program
{

    static void InputSecondSymbol()
    {
        Console.Write("������� ������ ������: ");
        ch2 = Console.ReadKey().KeyChar;
        Console.WriteLine();
    }

    static void Main()
    {
        char ch1 = ' '; // ���������� ��� �������� ������� �������
        char ch2 = ' '; // ���������� ��� �������� ������� �������
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
            case 2:
                InputSecondSymbol();
                break;
            default:
                Console.WriteLine("������������ �����. ���������� �����.");
                break;
            }
        }
    }
}