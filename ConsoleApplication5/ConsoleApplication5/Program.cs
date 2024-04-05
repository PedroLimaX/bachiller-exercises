using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Calculadora_
{
    class Aritmetica
    {
        public Double sumar(double a, double b)
        {
            return a + b;
        }
        public Double restar(double a, double b)
        {
            return a - b;
        }
        public Double multiplicar(double a, double b)
        {
            return a * b;
        }
        public Double cuadrado(double a)
        {
            return a * a;
        }
        public Double raiz(int a)
        {
            return Math.Sqrt(a);
        }
    }
}
namespace Calculadora_
{
    class Program
    {
        static void Main(string[] args)
        {
            Aritmetica obj = new Aritmetica();//aqui se instancia la clase para crear un objeto
            double a = 0, b = 0, resultado = 0;
            Console.WriteLine("Escoge que operacion quieres realizar");
            Console.WriteLine("[1]Suma");
            Console.WriteLine("[2]Resta");
            Console.WriteLine("[3]Multiplicacion");
            Console.WriteLine("[4]Cuadrado");
            Console.WriteLine("[5]Raiz");
            Console.WriteLine("Tu eleccion es :");
            int opc = int.Parse(Console.ReadLine());
            switch (opc)
            {
                case 1:
                    Console.WriteLine("Valor 1:");
                    a = Double.Parse(Console.ReadLine());
                    Console.WriteLine("Valor 2:");
                    b = Double.Parse(Console.ReadLine());
                    resultado = obj.sumar(a, b);
                    Console.Write("Suma :" + resultado);
                    break;
                case 2:
                    Console.WriteLine("Valor 1:");
                    a = Double.Parse(Console.ReadLine());
                    Console.WriteLine("Valor 2:");
                    b = Double.Parse(Console.ReadLine());
                    resultado = obj.restar(a, b);
                    Console.Write("Restar :" + resultado);
                    break;
                case 3:
                    Console.WriteLine("Valor 1:");
                    a = Double.Parse(Console.ReadLine());
                    Console.WriteLine("Valor 2:");
                    b = Double.Parse(Console.ReadLine());
                    resultado = obj.multiplicar(a, b);
                    Console.Write("Multiplicar :" + resultado);
                    break;
                case 4:
                    Console.WriteLine("Valor :");
                    a = Double.Parse(Console.ReadLine());
                    resultado = obj.cuadrado(a);
                    Console.Write("Cuadrado :" + resultado);
                    break;
                case 5:
                    Console.WriteLine("Valor :");
                    int x = Int32.Parse(Console.ReadLine());
                    resultado = obj.raiz(x);
                    Console.Write("Raiz :" + resultado);
                    break;
            }
            Console.Read();
        }
    }
}

