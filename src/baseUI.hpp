#ifndef _BASEUI_HPP_
#define _BASEUI_HPP_

#include "mazeCreator.hpp"

class Event
{
};

class BaseUI
{

public:
	~BaseUI();
	BaseUI();
	virtual void render() = 0;
	virtual void update() = 0;
	virtual Event* getEvent() = 0;
};

#endif
