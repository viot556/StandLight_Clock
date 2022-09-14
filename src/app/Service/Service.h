#ifndef __SERVICE_H__
#define __SERVICE_H__

#include <string>
#include "View.h"
#include "LightState.h"


class Service
{
private:
    int lightState; //상태 변경 인수
    View *view; //인스턴스 객체생성

public:
    Service(View *viewer); //생성자에서 객체를 넣어줌
    Service();
    ~Service();
    void updateState(std::string strState);

};

#endif