#include "Geomet.h"
void Geomet::Dibujar(float x, float y, float z) {
	//tetera
	glPushMatrix();
	glTranslatef(x+3, y, z);
	glutSolidTeapot(1.0);
	glTranslatef(-(x+3), -y,-z);
	glPopMatrix();



	//triangulo

	glPushMatrix();
	glTranslatef(x, y+3, z);
	glBegin(GL_TRIANGLES);
	glColor3f(0.1, 0.2, 0.3);
	glVertex3f(-1.5, 0, 0);
	glVertex3f(1.5, 0, 0);
	glVertex3f(0, 2.5980, 0);
	glEnd();
	glTranslatef(-x, -(y+3), -z);
	glPopMatrix();
}