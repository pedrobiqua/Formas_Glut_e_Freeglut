#include "Cone.h"
#include "math.h"
#include "Vetor.h"
#include "Disco.h"
#include "GL\Freeglut.h"

Cone::Cone(int idC, float ppcx, float ppcy, float ppcz, float rraio, float Hh)
{
	pcx = ppcx,
		pcy = ppcy,
		pcz = ppcz;
	raio = rraio;
	id = idC;
	H = Hh;
}
void Cone::Desenha() 
{
	float angle = 0.0f;
	glPolygonMode(GL_FRONT, GL_FILL);
	glBegin(GL_TRIANGLE_FAN); //BASE
	glVertex3f(0.0, 0.0, H); // centro
	for (angle = 0.0; angle < (2.0 * PI); angle += (2.0 * PI / 36.0))
	{
		pcx = raio * sin(angle);
		pcy = raio * cos(angle);
		glVertex3f(pcx, pcy, 0.0);
	}
	glEnd();
	glPolygonMode(GL_FRONT, GL_FILL);
	glFrontFace(GL_CCW);
	glBegin(GL_TRIANGLE_FAN); // LATERAL
	glVertex3f(0.0 ,0.0 , H); // centro
	for (angle = 2.0 * PI; angle < (0.0); angle -= (2.0 * PI / 36.0))
	{
		pcx = raio * sin(angle);
		pcy = raio * cos(angle);
		glVertex3f(pcx, pcy, 0.0);
	}
	glEnd();
	glFrontFace(GL_CCW);

}
Cone :: ~Cone() 
{

}