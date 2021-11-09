using System;
using System.Collections.Generic;
using System.Text;

namespace lab1C_
{
    public static class IOUtils
    {
        public static int SafeReadInteger(string message)
        {
            if (!string.IsNullOrEmpty(message))
            {
                Console.WriteLine(message);
            }
            while (true)
            {
                string sValue = Console.ReadLine();
                int iValue = 0;
                if (Int32.TryParse(sValue, out iValue))
                {
                    return iValue;
                }
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("Error: Incorrect format. Enter integer value");
                Console.ForegroundColor = ConsoleColor.White;
            }
        }
        public static int SafeReadIntegerNotZero(string message)
        {
            if (!string.IsNullOrEmpty(message))
            {
                Console.WriteLine(message);
            }
            while (true)
            {
                string sValue = Console.ReadLine();
                int iValue = 0;
                if (Int32.TryParse(sValue, out iValue))
                {
                    if (iValue != 0)
                    {
                        return iValue;
                    }
                }
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("Error: the denominator cannot be zero");
                Console.ForegroundColor = ConsoleColor.White;
            }
        }
        public static int SafeReadIntegerGreaterThanZero(string message)
        {
            if (!string.IsNullOrEmpty(message))
            {
                Console.WriteLine(message);
            }
            while (true)
            {
                string sValue = Console.ReadLine();
                int iValue = 0;
                if (Int32.TryParse(sValue, out iValue))
                {
                    if (iValue >= 0)
                    {
                        return iValue;
                    }
                }
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("Error: value must be greater than zero ");
                Console.ForegroundColor = ConsoleColor.White;
            }
        }
    }
}
