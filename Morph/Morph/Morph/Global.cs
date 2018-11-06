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
    class Global
    {
        public static Rectangle[] box = new Rectangle[10];

        public static void setBox()
        {
            box[0] = new Rectangle(200, 0, 900, 900);
            
            box[1] = new Rectangle(200, 0, 300, 300);
            box[2] = new Rectangle(500, 0, 300, 300);
            box[3] = new Rectangle(800, 0, 300, 300);
            box[4] = new Rectangle(200, 300, 300, 300);
            box[5] = new Rectangle(500, 300, 300, 300);
            box[6] = new Rectangle(800, 300, 300, 300);
            box[7] = new Rectangle(200, 600, 300, 300);
            box[8] = new Rectangle(500, 600, 300, 300);
            box[9] = new Rectangle(800, 600, 300, 300);
        }


    }
}
