#include "Controller.h"


Controller::Controller(Service *serv)
{
    service = serv;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "modeButton") 
        {
            service->updateState("modeButton"); //modebutton이 눌린것을 알려줌
        }
        break;
    }
}