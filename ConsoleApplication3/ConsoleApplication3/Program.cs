using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication3
{
    class Masa
    {
        public double calculo_masa(float presion, float volumen, float temperatura)
        {
            return (presion * volumen) / (.37 * (temperatura + 460));
        }
    }
    class Principal
    {
        static void Main(string[] args)
        {
            Console.BackgroundColor=ConsoleColor.Black;
            Console.ForegroundColor = ConsoleColor.Green;
            Masa obj = new Masa();
            Console.WriteLine("Presion:");
            float presion = int.Parse(Console.ReadLine());
            Console.WriteLine("Volumen :");
            float volumen = int.Parse(Console.ReadLine());
            Console.WriteLine("Temperatura: ");
            float temperatura = int.Parse(Console.ReadLine());
            double masa= (presion * volumen) / (.37 * (temperatura + 460));
            Console.WriteLine("El valor de la masa es: "+masa);
            Console.ReadKey();
        }
    }
}
