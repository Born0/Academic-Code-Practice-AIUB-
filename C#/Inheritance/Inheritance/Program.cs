using Library1;
using System;
namespace Inheritance
{
    class Program
    {
        static void Main(string[] args)
        {
            Parent s1 = new ThirdGen();
            ///Console.WriteLine(s1.ValueX); 
            s1.MathodToOverride();
        }
    }
}
