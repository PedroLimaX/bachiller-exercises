using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
namespace Seguro
{
    class Fianza
    {
        public Fianza(double pago1)
        {
            double cuota;
            cuota = pago1 * .01;
            Console.WriteLine("La cuota que debe pagar es de: " + cuota);
        }
        public Fianza(double pago1, double pago2)
        {
            double cuota, cuota1, cuota2;
            cuota1 = pago1 * .02;
            cuota2 = pago2 * .02;
            cuota = cuota1 + cuota2;
            Console.WriteLine("La cuota que debe pagar es de: " + cuota);
        }
        public Fianza(double pago1, double pago2, double pago3)
        {
            double cuota, cuota1, cuota2, cuota3;
            cuota1 = pago1 * .03;
            cuota2 = pago2 * .03;
            cuota3 = pago3 * .03;
            cuota = cuota1 + cuota2 + cuota3;
            Console.WriteLine("La cuota que debe pagar es de: " + cuota);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            double pago1 = 0, pago2 = 0, pago3 = 0;
            Console.ForegroundColor = ConsoleColor.Green;
            Console.Write("Cuantos pagos realizo el cliente: ");
            int opc = int.Parse(Console.ReadLine());
            switch (opc)
            {
                case 1:
                    Console.WriteLine("Cantidad del pago: ");
                    pago1 = double.Parse(Console.ReadLine());
                    Fianza obj = new Fianza(pago1);
                    break;
                case 2:
                    Console.Write("Cantidad del pago 1: ");
                    pago1 = double.Parse(Console.ReadLine());
                    Console.Write("Cantidad del pago 2: ");
                    pago2 = double.Parse(Console.ReadLine());
                    Fianza obj1 = new Fianza(pago1, pago2);
                    break;
                case 3:
                    Console.Write("Cantidad del pago 1: ");
                    pago1 = double.Parse(Console.ReadLine());
                    Console.Write("Cantidad del pago 2: ");
                    pago2 = double.Parse(Console.ReadLine());
                    Console.Write("Cantidad del pago 3: ");
                    pago3 = double.Parse(Console.ReadLine());
                    Fianza obj2 = new Fianza(pago1, pago2, pago3);
                    break;
            }
            Console.ReadKey();
        }
    }
}