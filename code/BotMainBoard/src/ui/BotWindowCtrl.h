/*
 * BotWindowCtrl.h
 *
 *  Created on: 05.08.2016
 *      Author: SuperJochenAlt
 */

#ifndef UI_BOTWINDOWCTRL_H_
#define UI_BOTWINDOWCTRL_H_

#include <windows.h>  // For MS Windows
#include <GL/gl.h>
#include <GL/freeglut.h>
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h
#include <GL/Glui.h>

class BotWindowCtrl {
public:
	BotWindowCtrl() {
		anglesCallback = NULL;
		tcpCallback = NULL;
	};
	void main(int argc, char** argv);

	void setAngles(float angles[], float tcp[]);
	void setAnglesCallback(void (* callback)( float[]));
	void setTcpCallback(void (* callback)( float[]));

	void callbackAngles();
	void callbackTCP();

private:
	 int createBotSubWindow(int mainWindowHandle);
	 GLUI* createInteractiveWindow(int mainWindow);

	 void (*anglesCallback)( float[]);
	 void (*tcpCallback)( float[]);
};

extern BotWindowCtrl botWindowCtrl;


#endif /* UI_BOTWINDOWCTRL_H_ */
