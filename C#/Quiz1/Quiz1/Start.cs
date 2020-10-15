using Cricket;
using System;


namespace Quiz1
{
    class Start 
    {
        static void Main(string[] args)
        {
            Bowler b = new Bowler(10, 240, 350);
            b.Wkts = 34;
            //b.CalculateAve();
            Console.WriteLine(b.CalculateAve());
            Console.WriteLine(b.CalculateSr());
            Console.WriteLine(b.Wkts);
        }
    }
}
