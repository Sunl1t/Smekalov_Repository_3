using System;


static void InputFirstSymbol()
{
    Console.Write("������� ������ ������: ");
    ch1 = Console.ReadKey().KeyChar;
    Console.WriteLine();
}

class Program
{
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
            case 0:
                return; // ����� �� ���������
            case 1:
                InputFirstSymbol();
                break;
            default:
                Console.WriteLine("������������ �����. ���������� �����.");
                break;
            }
        }
    }
}