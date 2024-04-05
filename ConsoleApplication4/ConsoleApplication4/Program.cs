using inciso_f;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace inciso_f
{
    class Descuento
    {
    public double compras(double subtotal)
        {
            return subtotal;
        }  
     }
class Principal
{
    static void Main(string[] args)
        {
            Console.BackgroundColor = ConsoleColor.Black;
            Console.ForegroundColor = ConsoleColor.Green;
            Descuento obj = new Descuento();
            Console.WriteLine("Ingrese el monto de compra: ");
            double subtotal = int.Parse(Console.ReadLine());
            double descuento = subtotal * .15;
            double total = subtotal - descuento;
            Console.Clear();
            Console.WriteLine("Subtotal: " + subtotal);
            Console.WriteLine("Descuento (15%): " + descuento);
            Console.WriteLine("Total: " + total);
            Console.ReadKey();
        }
    }
}   

