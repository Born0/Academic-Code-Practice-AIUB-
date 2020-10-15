using System;


namespace Library1
{
    public class ThirdGen:SecondGen
    {
        private int x = 300;

        public new int X { get => x; set => x = value; }


        public override void MathodToOverride() => Console.WriteLine("ThirdGen ");
    }
}
