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
    class Zombie : Skeleton
    {
        protected int xSpeed;

        public Zombie(Rectangle box, int x = 3)     :base(box)
        {
            sourceRec = new Rectangle(0, 0, 100, 100);
            xSpeed = x;
        }
        public override void setSkeleton()
        {
            skeleton = content.Load<Texture2D>("zombie");
        }
        public void setXSpeed(int x = 3)
        {
            xSpeed = x;
        }
        public virtual void move()
        {
            skeletonRec.X += xSpeed;
            if (skeletonRec.Left <= boxRec.Left || skeletonRec.Right >= boxRec.Right)
            {
                xSpeed *= -1;
                sourceRec.Y = 50 - 50*(xSpeed/Math.Abs(xSpeed));
            }
        }
    }
}
