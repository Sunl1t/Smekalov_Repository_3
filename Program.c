using System;

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
            case 4:
                int sum = (int)ch1 + (int)ch2;
                Console.WriteLine("����� ����� ASCII �������� " + ch1 + " � " + ch2 + " ����� " + sum);
                break;
            default:
                Console.WriteLine("������������ �����. ���������� �����.");
                break;
            }
        }
    }
}