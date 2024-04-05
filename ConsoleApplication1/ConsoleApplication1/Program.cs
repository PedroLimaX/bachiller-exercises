using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Principal
    {
        public double venta(double precio)
        {
            return precio;
        }
    }
    class Porcentajes
    {
        static void Main(string[] args)
        {
            Console.BackgroundColor = ConsoleColor.Black;
            Console.ForegroundColor = ConsoleColor.Green;
            Porcentajes obj = new Porcentajes();
            Console.WriteLine("Dame el costo del producto : ");
            double precio = int.Parse(Console.ReadLine());
            double total = precio + (precio * .3);
            Console.Write("\nEl precio para obtener ganancias es: " + total);
            Console.ReadKey();
        }
    }
}
