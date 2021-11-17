#include "Disco.h"
#include <math.h>
#include <GL\freeglut.h>
#include "Triangle.h"

Disco::Disco(int idC, float ppcx, float ppcy, float ppcz, float rraio)
{
	pcx = ppcx, 
	pcy = ppcy, 
	pcz = ppcz;
	raio = rraio;
	id = idC;
}

void Disco::Desenha()
{
	glPolygonMode(GL_BACK, GL_LINE);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPushMatrix();
		glTranslatef(pcx, pcy, pcz);
		float angulo = 0.0f;
		float x = 0.0f, y = 0.0f, z = 0.0f;
		glBegin(GL_TRIANGLE_FAN);
			glNormal3f(0.0f, 0.0f, 1.0f);
			glVertex3f(x, y, z);
			while (angulo <= 2.01 * PI) {
				angulo = angulo + PI / RES;
				x = raio * cos(angulo);
				y = raio * sin(angulo);
				glVertex3f(x, y, z);
			}
			glEnd();
			glColor3f(1.0f, 1.0f, 1.0f);
			glBegin(GL_LINES);
				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(0.0f, 0.0f, 20.0f);
			glEnd();
	glPopMatrix();
}

Disco :: ~Disco()
{
}