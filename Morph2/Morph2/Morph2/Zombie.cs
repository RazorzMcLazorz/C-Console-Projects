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
    class Zombie : Skeleton
    {
        public override void setskeleton()
        {
            skeleton = content.Load<Texture2D>("zombie");
            base.setskeleton();
        }
    }
}
