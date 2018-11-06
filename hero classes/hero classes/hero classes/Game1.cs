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

namespace hero_classes
{
    
    public class Game1 : Microsoft.Xna.Framework.Game
    {
        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;
        Texture2D back;
        Rectangle backRec;
        SuperHero sandwich;

        public Game1()
        {
            graphics = new GraphicsDeviceManager(this);
            graphics.PreferredBackBufferWidth = 1200;
            graphics.PreferredBackBufferHeight = 900;
            Content.RootDirectory = "Content";
        }
        protected override void Initialize()
        {
            SuperHero.Content = Content;

            // TODO: Add your initialization logic here
            back = Content.Load<Texture2D>("Back");
            backRec = new Rectangle(0, 0, 1200, 900);

            sandwich = new SuperHero();

            base.Initialize();
        }
        protected override void LoadContent()
        {
            // Create a new SpriteBatch, which can be used to draw textures.
            spriteBatch = new SpriteBatch(GraphicsDevice);

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

            // TODO: Add your update logic here

            base.Update(gameTime);
        }
        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(Color.CornflowerBlue);

            // TODO: Add your drawing code here

            spriteBatch.Begin();

            spriteBatch.Draw(back, backRec, Color.White * 0.7f);

            sandwich.Move();
            spriteBatch.Draw(sandwich.pic, sandwich.picRec, Color.White);

            spriteBatch.End();

            base.Draw(gameTime);
        }
    }

    public class SuperHero
    {
        public static ContentManager Content;
        public static int x = 20;
        // a class needs 
        //physical attributes (Data Types)
        public Texture2D pic = Content.Load<Texture2D>("BaseHero");
        public Rectangle picRec = new Rectangle(x, 700, 200, 200);
        public bool fly = false;
        public int flySpeed = 4;




        //behaviors (Methods)
        public void Move()
        {
            picRec.X += 3;
            if (picRec.Left > 2100)
                picRec.X = -200;
            Fly();
        }

        public void Fly()
        {
            if (fly)
            {
                picRec.Y += flySpeed;
                if (picRec.Top < 0 || picRec.Bottom > 900)
                    flySpeed *= -1;
            }
        }




        //way to build a real object of the class (Contructors)
        public SuperHero()
        {
            // Reserves space in memory for all the data
            x += 210;
        }






    }




}
