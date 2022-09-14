#include "ClockService.h"

ClockService::ClockService(ClockView *view)
{
    curTime =0;
    clockView = view; //ClockView를 매개변수 view값으로 넣어줌

}

ClockService::~ClockService()
{
}

void ClockService::updateEvent()
{
    curTime = time(NULL);
    struct tm *timeDate = localtime(&curTime);
    clockView->updateTime(timeDate);
    
}