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
    class Pony : Fairy
    {
        protected int ySpeed;
        protected int xSpeed;

        public new void setSkeleton()
        {
            skeleton = content.Load<Texture2D>("pony");
        }
        public new void move()
        {
            skeletonRec.X += xSpeed;
            skeletonRec.Y += ySpeed;
            skeletonRec.Inflate(zSpeed, zSpeed);
            if (skeletonRec.Width <= 50 || skeletonRec.Width >= 150)
            {
                zSpeed *= -1;
            }
            if (skeletonRec.Left <= boxRec.Left || skeletonRec.Right >= boxRec.Right)
            {
                xSpeed *= -1;
                skeletonRec.X += xSpeed;
            }
            skeletonRec.Y += ySpeed;
            if (skeletonRec.Top <= boxRec.Top || skeletonRec.Bottom >= boxRec.Bottom)
            {
                ySpeed *= -1;
                skeletonRec.Y += ySpeed;
            }
        }

        public Pony(Rectangle box, int z = 1, int y = 2, int x = 3)    :base(box, z)
        {
            sourceRec = new Rectangle(0, 0, 100, 100);
            ySpeed = y;
            xSpeed = x;
            zSpeed = z;
        }
    }
}
