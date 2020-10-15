using System;

namespace Library1
{
    public class SecondGen:Parent
    {
        int x = 200;
        public new int X { get => x; set => x = value; }

        public new virtual void MathodToOverride() => Console.WriteLine("SecondGen ");
    }
}
