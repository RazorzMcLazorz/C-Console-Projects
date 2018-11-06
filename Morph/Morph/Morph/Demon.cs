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
    class Demon : Zombie
    {
        protected int ySpeed;

        public void setYSpeed(int y = 2)
        {
            ySpeed = y;
        }
        public override void setSkeleton()
        {
            skeleton = content.Load<Texture2D>("demon");
        }
        public override void move()
        {
            skeletonRec.X += xSpeed;
            skeletonRec.Y += ySpeed;
            if (skeletonRec.Left <= boxRec.Left || skeletonRec.Right >= boxRec.Right)
            {
                xSpeed *= -1;
                sourceRec.Y = 50 - 50 * (xSpeed / Math.Abs(xSpeed));
            }
            skeletonRec.Y += ySpeed;
            if (skeletonRec.Top <= boxRec.Top || skeletonRec.Bottom >= boxRec.Bottom)
            {
                ySpeed *= -1;
            }
        }

        public Demon(Rectangle box, int x = 3, int y = 2)    :base(box, x)
        {
            sourceRec = new Rectangle(0, 0, 100, 100);
            ySpeed = y;
        }
    }
}
