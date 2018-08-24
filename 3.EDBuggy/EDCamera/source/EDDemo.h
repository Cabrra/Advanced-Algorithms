#ifndef _EDDEMO_H_
#define _EDDEMO_H_

#include "EDApp.h"

void RenderScene(void);
void ResizeGL(int w, int h);
void SetupGL();
void Menu(int option);
void DrawGround(void);
void ShutDown(void);
void DrawAxes(float fScale = 1.0f);

// Our menu options
enum{EXIT};

#endif