#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include <string>
#include "Service.h"
#include "ClockService.h"

class Controller
{
private:
    int lightState;
    Service *service;
    ClockService *clockService;

public:
    Controller(Service *serv,ClockService *clockService);
    virtual ~Controller();
    void updateEvent(std::string strBtn);
};

#endif /* __CONTROLLER_H__ */