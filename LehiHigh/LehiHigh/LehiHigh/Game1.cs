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

namespace LehiHigh
{
    public class Game1 : Microsoft.Xna.Framework.Game
    {
        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;

        Form1 form;
        KeyboardState bored;
        int timer;
        Texture2D lehi, student, misRoll;
        Rectangle lehiRec, studentRec, misRollRec;
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

        protected override void Initialize()
        {
            form = new Form1();
            form.Show();

            var gameWindow = (System.Windows.Forms.Form)System.Windows.Forms.Control.FromHandle(this.Window.Handle);
            gameWindow.Location = new System.Drawing.Point(225, 10);

            bored = new KeyboardState();
            lehiRec = new Rectangle(0, 0, 1040, 940);
            studentRec = new Rectangle(470, 840, 100, 100);

            int x = 0;
            for (int i = 0; i < 9; i++)
            {
                x += 100;
                rec[i] = new Rectangle(x, 100, 60, 60);

                pic[i] = Content.Load<Texture2D>(i.ToString());
                op[i] = 1.0f;

                ySpeed[i] = 1 * rand.Next(1, 4);
            }

            base.Initialize();
        }

        protected override void LoadContent()
        {

            
            
            spriteBatch = new SpriteBatch(GraphicsDevice);

            lehi = Content.Load<Texture2D>("Back");
            student = Content.Load<Texture2D>("Student");
            misRoll = Content.Load<Texture2D>("MisRoll");


        }

        protected override void Update(GameTime gameTime)
        {
            bored = Keyboard.GetState();   
            if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed)
                this.Exit();
            if (bored.IsKeyDown(Keys.Right) && studentRec.Right <= 1040)
                studentRec.X += 5;
            if (bored.IsKeyDown(Keys.Left) && studentRec.Left >= 0)
                studentRec.X -= 5;
            if (bored.IsKeyDown(Keys.Space) && misRollRec.IsEmpty == true)
            {
                misRollRec = new Rectangle(studentRec.X + 40, studentRec.Y + 40, 20, 20);
                form.shots++;
                form.totalScore--;
            }
            if (misRollRec.IsEmpty == false)
                misRollRec.Y -= 50;
            if (misRollRec.Y < 50)
                misRollRec = new Rectangle();

            for (int i = 0; i < 9; i++)
            {
                rec[i].Y += ySpeed[i];

                if (rec[i].Intersects(misRollRec) || rec[i].Intersects(studentRec) || rec[i].Top > 940)
                {
                    if (rec[i].Intersects(studentRec))
                        studentOp -= 0.20f;
                    if (rec[i].Intersects(misRollRec))
                    {
                        if (i == 8)
                        {
                            op[8] -= 0.2f;
                            form.totalScore += 7;
                        }
                        form.score[i]++;
                        misRollRec = new Rectangle();
                        form.totalScore += 3;
                    }
                    rec[i] = new Rectangle(rand.Next(990), -1 * rand.Next(100, 400), 60, 60);
                }

            }

            if (studentOp < 0.1f && op[8] > 0.0f && timer <= 4500)
            {
                Exit();
            }

            timer++;
            base.Update(gameTime);
        }

        
        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(Color.LightGray);

            spriteBatch.Begin();

            spriteBatch.Draw(lehi, lehiRec, Color.White * 0.50f);
            spriteBatch.Draw(misRoll, misRollRec, Color.White);
            spriteBatch.Draw(student, studentRec, Color.White * studentOp);

            for (int i = 0; i < 9; i++)
            {
                spriteBatch.Draw(pic[i], rec[i], Color.White * op[i]);
            }

            spriteBatch.End();
            

            base.Draw(gameTime);
        }
    }
}
