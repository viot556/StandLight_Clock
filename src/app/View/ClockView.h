#ifndef __CLOCKVIEW_H__
#define __CLOCKVIEW_H__

#include "LCD.h"
#include <time.h>

class ClockView
{
public:
    ClockView(LCD *lcd);
    ~ClockView();
    void updateTime(struct tm *timeData);

private:
    struct tm timeDate;
    LCD *lcd;
};

#endif