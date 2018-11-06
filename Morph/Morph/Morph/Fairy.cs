using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;

namespace Morph
{
    class Fairy : Skeleton
    {
        protected int zSpeed;

        public new void setSkeleton()
        {
            skeleton = content.Load<Texture2D>("princess");
        }
        public void setZSpeed(int z = 1)
        {
            zSpeed = z;
        }
        public void move()
        {
            skeletonRec.Inflate(zSpeed, zSpeed);
            if (skeletonRec.Width <= 50 || skeletonRec.Width >= 150)
            {
                zSpeed *= -1;
            }
        }
        public Fairy()
        {
            sourceRec = new Rectangle(0, 0, 100, 100);
        }
        public Fairy(Rectangle box, int z = 1)     :base(box)
        {
            sourceRec = new Rectangle(0, 0, 100, 100);
            zSpeed = z;
        }
    }
}
