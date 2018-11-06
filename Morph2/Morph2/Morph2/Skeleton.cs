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

namespace Morph2
{
    class Skeleton
    {
        //DataMembers
        protected static ContentManager content;
        protected static int x = 250, y = 50;

        protected Texture2D skeleton;
        protected Rectangle skeletonRec, sourceRec;
        protected int counter;

        //Member Methods
        public static ContentManager Content
        {
            set { content = value; }
        }
        //Constructor
        public Skeleton()
        {
            sourceRec = new Rectangle(0, 0, 100, 100);
            skeletonRec = new Rectangle(x, y, 100, 100);
            x += 100;
            if (x >= 1000)
            {
                x = 250;
                y = 110;
            }

        }
        // Settle
        public virtual void setskeleton()
        {
            skeleton = content.Load<Texture2D>("skeleton");
        }
        
        // Calculation methods
        public void Animate()
        {
            if (counter == 15)
            {
                sourceRec.X += 100;
                counter = 0;

                if (sourceRec.X == 400)
                {
                    sourceRec.X = 0;
                }
            }
            counter++;
        }

        public void Draw(SpriteBatch sB)
        {
            setskeleton();
            Animate();
            sB.Draw(skeleton, skeletonRec, sourceRec, Color.White);
        }
    }
}
