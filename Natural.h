#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"


class Natural
{
public: Natural() {};
	  void DibujarCirculo(float c, float y, float z, float ancho, float alto);
	  void DibujarFlor(float x, float y, float z, float ancho, float alto);
};

