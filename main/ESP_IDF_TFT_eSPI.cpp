#include <TFT_eSPI.h>

#include "duck.h"

static const char *TAG = "TFT";

TFT_eSPI tft = TFT_eSPI();

extern "C" void app_main(void)
{
    tft.init();
    tft.setRotation(3);

    tft.setSwapBytes(true);
    tft.fillScreen(TFT_BLACK);

    // center x y
    int img_x = (tft.width() - animation_width) / 2;
    int img_y = (tft.height() - animation_height) / 2;

    int frame_delay = 20;

    while(1) {
        for(int i = 0; i < frames; i++)
        {
            vTaskDelay(frame_delay / portTICK_PERIOD_MS);
            tft.pushImage(img_x, img_y, animation_width, animation_height, ani_img[i]);
        }
    }
  
}
