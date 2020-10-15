using System;


namespace Library1
{
    public class Parent
    {
        int x = 100;

        public int X { get => x; set => x = value; }

        public virtual void MathodToOverride() => Console.WriteLine("Parent ");


    }
}
