#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();


int ball_x, ball_y;
int ball_dx = 2;
int ball_dy = 2;
int ball_radius = 8;

void setup() {
  Serial.begin(115200);
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);


  ball_x = tft.width() / 2;
  ball_y = tft.height() / 2;

  Serial.println("Setup complete. Starting animation.");
}

void loop() {
  
  tft.fillCircle(ball_x, ball_y, ball_radius, TFT_BLACK);

  
  ball_x = ball_x + ball_dx;
  ball_y = ball_y + ball_dy;

  
  if (ball_x < ball_radius || ball_x > tft.width() - ball_radius) {
    ball_dx = -ball_dx; 
  }

  if (ball_y < ball_radius || ball_y > tft.height() - ball_radius) {
    ball_dy = -ball_dy; 
  }
  
  
  tft.fillCircle(ball_x, ball_y, ball_radius, TFT_CYAN);
  

  Serial.print("Ball Position: x=");
  Serial.print(ball_x);
  Serial.print(", y=");
  Serial.println(ball_y);


  delay(20); 
}