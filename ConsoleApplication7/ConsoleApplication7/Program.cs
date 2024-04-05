using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Porcentajes
    {
        public double calculo(double p1, double p2, double p3)
        {
            return p1 + p2 + p3;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.BackgroundColor = ConsoleColor.Black;
            Console.ForegroundColor = ConsoleColor.Green;
            Porcentajes obj = new Porcentajes();
            Console.WriteLine("Dame la primera inversion : ");
            double p1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Dame la segunda inversion:");
            double p2 = int.Parse(Console.ReadLine());
            Console.WriteLine("Dame la tercera inversion:");
            double p3 = int.Parse(Console.ReadLine());
            double suma = obj.calculo(p1, p2, p3);
            double r1 = p1 * 100 / suma;
            double r2 = p2 * 100 / suma;
            double r3 = p3 * 100 / suma;
            Console.Write("\nEl porcentaje de la primera inversion es:" + r1);
            Console.Write("\nEl porcentaje de la segunda inversion es:" + r2);
            Console.Write("\nEl porcentaje de la tercera inversion es:" + r3);
            Console.ReadKey();
        }
    }
}
