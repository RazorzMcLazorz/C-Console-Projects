using System;
using System.Collections.Generic;
using System.Linq;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;

namespace Morph
{

    public class Game1 : Microsoft.Xna.Framework.Game
    {
        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;

        Texture2D back;
        Rectangle mrWhite;

        Skeleton[] bones = new Skeleton[3];
        Zombie[] flesh






        //Fairy cat;
        //Pony troll;

        public Game1()
        {
            graphics = new GraphicsDeviceManager(this);
            Content.RootDirectory = "Content";
            graphics.PreferredBackBufferHeight = 950;
            graphics.PreferredBackBufferWidth = 1200;
            this.IsMouseVisible = true;
        }

        protected override void Initialize()
        {
            mrWhite = new Rectangle(0, 0, 1200, 950);
            Global.setBox();
            Skeleton.Content = Content;

            bones[0] = new Skeleton(Global.box[1]);
            bones[1] = new Zombie(Global.box[2]);
            bones[2] = new Demon(Global.box[3]);


            /*
            cat = new Fairy(Global.box[6]);

            troll = new Pony(Global.box[9]);
            */
            base.Initialize();
        }
        
        
        protected override void LoadContent()
        {
            
            spriteBatch = new SpriteBatch(GraphicsDevice);

            back = Content.Load<Texture2D>("back5");
        }
    
        protected override void Update(GameTime gameTime)
        {
            // Allows the game to exit
            if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed)
                this.Exit();
            base.Update(gameTime);
        }

        
        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(Color.CornflowerBlue);

            spriteBatch.Begin();

            spriteBatch.Draw(back, mrWhite, Color.White);
            foreach (Skeleton key in bones)
            {
                key.setSkeleton();
                key.animate();
                key.draw(spriteBatch);

                //OVERCAST!
                if (key is Zombie)
                {
                    Zombie spencer = key as Zombie;
                    spencer.move();
                }
            }
            spriteBatch.End();

            base.Draw(gameTime);
        }
    }
}