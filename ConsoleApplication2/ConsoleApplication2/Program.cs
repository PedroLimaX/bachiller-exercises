using Aumentodesalario;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aumentodesalario
{
    class Aumentosalarial
    {
        public double aumentos(double salario)
        {
            return salario;
        }
    }
    class Principal
    {
        static void Main(string[] args)
        {
            Console.BackgroundColor = ConsoleColor.Black;
            Console.ForegroundColor = ConsoleColor.Green;
            Aumentosalarial obj = new Aumentosalarial();
            Console.WriteLine("Dame el salario del empleado");
            double salario = int.Parse(Console.ReadLine());
            double aumento = salario * .25;
            double total = salario + aumento;
            Console.WriteLine("El salario total del empleado es: " + total);
            Console.ReadKey();
        }
    }
}
