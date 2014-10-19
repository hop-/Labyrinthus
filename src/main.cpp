#include <iostream>

#ifdef SDLGUI
#include "sdlUI.hpp"
static baseUI* gui = new SdlUI();
#endif
#ifdef QTGUI
#include "qtUI.hpp"
static baseUI* gui new QtUI();
#endif

int main(int argc, char** argv){
	Event* e;
	do{
		e = gui->getEvent();
		if (e != nullptr) {
			gui->update();
			gui->render();
		}
	} while (e == CLOSEALL)
	return 0;
}
