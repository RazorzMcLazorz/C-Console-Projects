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
    class Skeleton
    {
        //data
        protected static ContentManager content;
        protected Texture2D skeleton;
        protected Rectangle boxRec, skeletonRec, sourceRec;
        protected int counter;


        //methods
        public static ContentManager Content
        {
            set { content = value; }
        }

        public Rectangle BoxRec
        {
            set { boxRec = value; }
        }
        public virtual void setSkeleton()
        {
            skeleton = content.Load<Texture2D>("skeleton");
        }
        public void setSkeletonRec()
        {
            skeletonRec = new Rectangle(boxRec.X + 100, boxRec.Y + 100, 100, 100);
        }
        public Rectangle getSkeletonRec()
        {
            return skeletonRec;
        }
        public virtual void animate()
        {
            if (counter == 15)
            {
                sourceRec.X += 100;
                counter = 0;
            }
            if (sourceRec.X == 400)
            {
                sourceRec.X = 0;
            }
            counter++;
        }
        public void draw(SpriteBatch sB)
        {
            sB.Draw(skeleton, skeletonRec, sourceRec, Color.White);
        }
        public Skeleton()
        {
            sourceRec = new Rectangle(0, 0, 100, 100);
        }
        public Skeleton(Rectangle box)
        {
            boxRec = box;
            skeletonRec = new Rectangle(boxRec.X + 100, boxRec.Y + 100, 100, 100);
            sourceRec = new Rectangle(0, 0, 100, 100);
        }


    }
}
