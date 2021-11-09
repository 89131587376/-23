using System;
using System.Collections.Generic;
using System.Text;

namespace lab1C_
{
    public class Menu
    {
        public static void Execute()
        {
            switch (getMenuItem())
            {
                case 0:
                    Console.ForegroundColor = ConsoleColor.White;
                    Console.WriteLine("Exit...");
                    Environment.Exit(0);
                    break;
                case 1:
                    Console.ForegroundColor = ConsoleColor.White;
                    Console.WriteLine("Hello World!");
                    break;
                case 2:
                    Console.ForegroundColor = ConsoleColor.White;
                    int X = IOUtils.SafeReadInteger("input number X - ");
                    X = IOUtils.SafeReadIntegerNotZero("input number X - ");
                    int Y = IOUtils.SafeReadInteger("input number Y - ");
                    Y = IOUtils.SafeReadIntegerGreaterThanZero("input number Y - ");
                    int Z = IOUtils.SafeReadInteger("input number Z - ");

                    double Result = Z / X + 7 * Math.Sqrt(Y);

                    Console.WriteLine("Result {0:N3}", Result);
                    break;
                default:
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Menu item not found.");
                    break;
            }
        }
        private static int getMenuItem()
        {
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.WriteLine("Main menu:");
            Console.ForegroundColor = ConsoleColor.Green;
            Console.WriteLine("[0] Exit");
            Console.WriteLine("[1] Hello world!");
            Console.WriteLine("[2] calculate the formula  Z/X + 7*sqrt(Y)");
            Console.ForegroundColor = ConsoleColor.White;
            int imenu = IOUtils.SafeReadInteger(null);
            return imenu;
        }
    }
}
