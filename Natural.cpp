#include "Natural.h"
#define PI 3.1415926535898 
GLint circle_points = 100;
#define EDGES 30 
#define PETALOS 7
void Natural::DibujarCirculo(float x, float y, float z,float ancho,float alto) {
	glPushMatrix();
	glBegin(GL_LINE_STRIP);

	glColor3f(0.8, 0.8, 0.8);
	for (int i = 0; i <= EDGES; i++) {

		glColor3f(0.8, 0.8, 0.8);
		glVertex2f(ancho*cos((2 * PI * i) / EDGES),alto* sin((2 * PI * i) / EDGES));
	}
	glEnd();
	glPopMatrix();
	
}
void Natural::DibujarFlor(float x, float y, float z, float ancho, float alto) {
	glPushMatrix();
	glTranslatef(x, y, z);
	DibujarCirculo(x, y, z, 0.5, 0.5);
	for (int i = 0; i < PETALOS; i++) {

		glTranslatef(cos((2 * PI * i) / PETALOS), sin((2 * PI * i) / PETALOS), 0);
		glRotatef(i *(360/ PETALOS), 0.0, 0.0, 1.0);

		DibujarCirculo( 0, 0, 0, 1.5, 0.5);
		glRotatef(-i* (360 / PETALOS), 0.0, 0.0, 1.0);

		glTranslatef(-cos((2 * PI * i) / PETALOS),-sin((2 * PI * i) / PETALOS), -0);
	}




	glTranslatef(-x, -y, -z);
	glPopMatrix();
}
