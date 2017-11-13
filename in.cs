namespace compiler
{
    class swapper
    {
        public static void swap(ref int first, ref int second)
        {
            first += second;
            second = first - second;
            first -= second;
            Console.WriteLine(first);
            Console.WriteLine(second);
            return;
        }
        static void Main()
        {
            int number1 = 3, number2 = 5;
            swap(ref number1, ref number2);
            for (int i = 0; i < number2; i++)
            {
                if (i == number1)
                    break;
                else
                    continue;
            }
            Console.WriteLine(number1);
            Console.WriteLine(number2);
            return;
        }
    }
}
