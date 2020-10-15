using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cricket
{
    public class Bowler
    {
        int mat, balls, run;
        public  Bowler(int mt,int bl,int rn)
        {
            this.mat = mt;
            this.balls = bl;
            this.run = rn;
        }
        public int Wkts;
        //{
        //    set;
        //    get;
        //}
    public double CalculateAve()
        {
            return (double)run / (double)balls;
          
        }
        public double CalculateSr()
        {
            return (double)run / (double)Wkts;
        }
    }
}
