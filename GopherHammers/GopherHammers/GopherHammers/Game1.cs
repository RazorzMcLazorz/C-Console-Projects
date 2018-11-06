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

namespace GopherHammers
{
    
    /// This is the main type for your game
    
    public class Game1 : Microsoft.Xna.Framework.Game
    {

        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;
        

        Form1 form;
        KeyboardState bored;
        int timer;
        Texture2D Gopher, Hammer, Grass, Screen;
        Rectangle GopherRec, HammerRec, GrassRec, ScreenRec;
        Random rand = new Random();
        float studentOp = 1.0f;

        Texture2D[] pic = new Texture2D[9];
        Rectangle[] rec = new Rectangle[9];
        float[] op = new float[9];
        int[] ySpeed = new int[9];

        public Game1()
        {
            graphics = new GraphicsDeviceManager(this);

            graphics.PreferredBackBufferWidth = 1040;
            graphics.PreferredBackBufferHeight = 940;

            Content.RootDirectory = "Content";
        }

        
        /// Allows the game to perform any initialization it needs to before starting to run.
        /// This is where it can query for any required services and load any non-graphic
        /// related content.  Calling base.Initialize will enumerate through any components
        /// and initialize them as well.
        
        protected override void Initialize()
        {
            // TODO: Add your initialization logic here
            form = new Form1();
            form.Show();

            var gameWindow = (System.Windows.Forms.Form)System.Windows.Forms.Control.FromHandle(this.Window.Handle);
            gameWindow.Location = new System.Drawing.Point(225, 10);

            bored = new KeyboardState();
            GrassRec = new Rectangle(0, 0, 1040, 940);
            //HammerRec = new Rectangle(470, 840, 100, 100);

            int x = 0;
            for (int i = 0; i < 9; i++)
            {
                x += 100;
                rec[i] = new Rectangle(x, 100, 60, 60);

                //pic[i] = Content.Load<Texture2D>(i.ToString());
                op[i] = 1.0f;

                ySpeed[i] = 1 * rand.Next(1, 4);
            }

            
            base.Initialize();
        }

        
        /// LoadContent will be called once per game and is the place to load
        /// all of your content.
        
        protected override void LoadContent()
        {
            // Create a new SpriteBatch, which can be used to draw textures.
            spriteBatch = new SpriteBatch(GraphicsDevice);


            Screen = Content.Load<Texture2D>("screen02");
            Gopher = Content.Load<Texture2D>("Gopher");
            Grass = Content.Load<Texture2D>("Grass");
            Hammer = Content.Load<Texture2D>("Hammer");
            // TODO: use this.Content to load your game content here
        }

        
        /// UnloadContent will be called once per game and is the place to unload
        /// all content.
        
        protected override void UnloadContent()
        {
            // TODO: Unload any non ContentManager content here
        }

        
        /// Allows the game to run logic such as updating the world,
        /// checking for collisions, gathering input, and playing audio.
        
        
        protected override void Update(GameTime gameTime)
        {
            // Allows the game to exit
            if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed)
                this.Exit();

            // TODO: Add your update logic here

            base.Update(gameTime);
        }

        
        /// This is called when the game should draw itself.
        
        protected override void Draw(GameTime gameTime)
        {
            
            GraphicsDevice.Clear(Color.LightGray);

            spriteBatch.Begin();

            spriteBatch.Draw(Grass, GrassRec, Color.White);
            spriteBatch.Draw(Gopher, GopherRec, Color.White);
            spriteBatch.Draw(Hammer, HammerRec, Color.White);
            spriteBatch.Draw(Grass, GrassRec, Color.White);

            for (int i = 0; i < 9; i++)
            {
                //spriteBatch.Draw(pic[i], rec[i], Color.White * op[i]);
            }

            spriteBatch.End();
            // TODO: Add your drawing code here

            base.Draw(gameTime);
        }
    }
}
