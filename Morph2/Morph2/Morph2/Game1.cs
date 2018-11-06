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
    
    public class Game1 : Microsoft.Xna.Framework.Game
    {
        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;
        
        Vector2 spot1 = new Vector2(50, 200);
        Vector2 spot2 = new Vector2(50, 350);
        Vector2 spot3 = new Vector2(50, 660);
        Vector2 spot4 = new Vector2(50, 810);

        Random num = new Random();
        Texture2D back;
        Rectangle backRec;
        SpriteFont font;
        int timer = 0, people = 0, reptiles = 0;

        Skeleton[] humans = new Skeleton[32];

        public Game1()
        {
            graphics = new GraphicsDeviceManager(this);
            graphics.PreferredBackBufferWidth = 1200;
            graphics.PreferredBackBufferHeight = 950;
            Content.RootDirectory = "Content";
        }

        
        protected override void Initialize()
        {
            // TODO: Add your initialization logic here

            Skeleton.Content = Content;

            base.Initialize();
        }

        
        protected override void LoadContent()
        {
            // Create a new SpriteBatch, which can be used to draw textures.
            spriteBatch = new SpriteBatch(GraphicsDevice);

            back = Content.Load<Texture2D>("back7");
            backRec = new Rectangle(0, 0, 1200, 950);
            font = Content.Load<SpriteFont>("Font");
            // TODO: use this.Content to load your game content here
        }

       
        protected override void UnloadContent()
        {
            // TODO: Unload any non ContentManager content here
        }

        
        protected override void Update(GameTime gameTime)
        {
            // Allows the game to exit
            if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed)
                this.Exit();

            if (timer % 113 == 0)
            {
                int build = num.Next(3);
                if (build == 0)    
                humans[people] = new Skeleton();
                else
                humans[people] = new Zombie();
                people++;
            }
            // TODO: Add your update logic here
            timer++;
            base.Update(gameTime);
        }

        
        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(Color.CornflowerBlue);



            spriteBatch.Begin();

            spriteBatch.Draw(back, backRec, Color.White);

            spriteBatch.DrawString(font, "32", spot1, Color.Red);
            spriteBatch.DrawString(font, "32", spot2, Color.Red);
            spriteBatch.DrawString(font, "32", spot3, Color.Red);
            spriteBatch.DrawString(font, "32", spot4, Color.Red);

            for (int i = 0; i < people; i++)
            {
                humans[i].Draw(spriteBatch);
            }
            spriteBatch.End();

            // TODO: Add your drawing code here

            base.Draw(gameTime);
        }
    }
}
