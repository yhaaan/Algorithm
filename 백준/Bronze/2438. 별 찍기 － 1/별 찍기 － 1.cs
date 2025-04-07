using System;

namespace MyCompiler 
{
    class Program 
    {
        public static void Main(string[] args) 
        {
            int i, j;
            int num;
            num = int.Parse(Console.ReadLine());
            for(i = 0; i < num; i++)
            {
                for(j = 0; j <= i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
    }
}