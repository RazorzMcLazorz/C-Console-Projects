using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace grow
{
    class Grow
    {
        private int[] stuff = new int[1];
        private int capacity;
        private int members;

        public int Capacity
        {
            get (return capacity; )
        }
        public int Members
        {
            get (return members;)
        }

        public void DoubleCapacity()
        {
            int[] tempstuff = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
                tempstuff[i] = stuff[i];
            capacity *= 2;

        }
    }
}
