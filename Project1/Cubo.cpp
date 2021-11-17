#include "Cubo.h"
#include "math.h"
#include "Vetor.h"
#include "Face4v.h"
#include "GL\Freeglut.h"


Cubo::Cubo(int idC, float ppcx, float ppcy, float ppcz, float aa)
{
	pcx = ppcx;
	pcy = ppcy;
	pcz = ppcz;
	a = aa;
	id = idC;

	f1[0][0] = -a / 2; f1[0][1] = a / 2; f1[0][2] = a / 2;
	f1[1][0] = -a / 2; f1[1][1] = -a / 2; f1[1][2] = a / 2;
	f1[2][0] = a / 2; f1[2][1] = a / 2; f1[2][2] = a / 2;
	f1[3][0] = a / 2; f1[3][1] = -a / 2; f1[3][2] = a / 2;

	f2[0][0] = a / 2; f2[0][1] = a / 2; f2[0][2] = a / 2;
	f2[1][0] = a / 2; f2[1][1] = -a / 2; f2[1][2] = a / 2;
	f2[2][0] = a / 2; f2[2][1] = a / 2; f2[2][2] = -a / 2;
	f2[3][0] = a / 2; f2[3][1] = -a / 2; f2[3][2] = -a / 2;

	f3[0][0] = a / 2; f3[0][1] = a / 2; f3[0][2] = -a / 2;
	f3[1][0] = a / 2; f3[1][1] = -a / 2; f3[1][2] = -a / 2;
	f3[2][0] = -a / 2; f3[2][1] = a / 2; f3[2][2] = -a / 2;
	f3[3][0] = -a / 2; f3[3][1] = -a / 2; f3[3][2] = -a / 2;

	f4[0][0] = -a / 2; f4[0][1] = a / 2; f4[0][2] = -a / 2;
	f4[1][0] = -a / 2; f4[1][1] = -a / 2; f4[1][2] = -a / 2;
	f4[2][0] = -a / 2; f4[2][1] = a / 2; f4[2][2] = a / 2;
	f4[3][0] = -a / 2; f4[3][1] = -a / 2; f4[3][2] = a / 2;

	f5[0][0] = -a / 2; f5[0][1] = a / 2; f5[0][2] = -a / 2;
	f5[1][0] = -a / 2; f5[1][1] = a / 2; f5[1][2] = a / 2;
	f5[2][0] = a / 2; f5[2][1] = a / 2; f5[2][2] = -a / 2;
	f5[3][0] = a / 2; f5[3][1] = a / 2; f5[3][2] = a / 2;

	f6[0][0] = a / 2; f6[0][1] = -a / 2; f6[0][2] = -a / 2;
	f6[1][0] = a / 2; f6[1][1] = a / 2; f6[1][2] = a / 2;
	f6[2][0] = -a / 2; f6[2][1] = -a / 2; f6[2][2] = -a / 2;
	f6[3][0] = -a / 2; f6[3][1] = -a / 2; f6[3][2] = a / 2;
}

void Cubo::Desenha() 
{
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glPushMatrix();
		glTranslatef(pcx, pcy, pcz);

		glBegin(GL_TRIANGLE_STRIP);
			Face4v f11(1, f1);
			glNormal3f(f11.normal.xcomp, f11.normal.ycomp, f11.normal.zcomp);
			glVertex3f(f1[0][0], f1[0][1], f1[0][2]);
			glVertex3f(f1[1][0], f1[1][1], f1[1][2]);
			glVertex3f(f1[2][0], f1[2][1], f1[2][2]);
			glVertex3f(f1[3][0], f1[3][1], f1[3][2]);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
			Face4v f22(1, f2);
			glNormal3f(f22.normal.xcomp, f22.normal.ycomp, f22.normal.zcomp);
			glVertex3f(f2[0][0], f2[0][1], f2[0][2]);
			glVertex3f(f2[1][0], f2[1][1], f2[1][2]);
			glVertex3f(f2[2][0], f2[2][1], f2[2][2]);
			glVertex3f(f2[3][0], f2[3][1], f2[3][2]);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
			Face4v f33(1, f3);
			glNormal3f(f33.normal.xcomp, f33.normal.ycomp, f33.normal.zcomp);
			glVertex3f(f3[0][0], f3[0][1], f3[0][2]);
			glVertex3f(f3[1][0], f3[1][1], f3[1][2]);
			glVertex3f(f3[2][0], f3[2][1], f3[2][2]);
			glVertex3f(f3[3][0], f3[3][1], f3[3][2]);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
			Face4v f44(1, f4);
			glNormal3f(f44.normal.xcomp, f44.normal.ycomp, f44.normal.zcomp);
			glVertex3f(f4[0][0], f4[0][1], f4[0][2]);
			glVertex3f(f4[1][0], f4[1][1], f4[1][2]);
			glVertex3f(f4[2][0], f4[2][1], f4[2][2]);
			glVertex3f(f4[3][0], f4[3][1], f4[3][2]);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
			Face4v f55(1, f5);
			glNormal3f(f55.normal.xcomp, f55.normal.ycomp, f55.normal.zcomp);
			glVertex3f(f5[0][0], f5[0][1], f5[0][2]);
			glVertex3f(f5[1][0], f5[1][1], f5[1][2]);
			glVertex3f(f5[2][0], f5[2][1], f5[2][2]);
			glVertex3f(f5[3][0], f5[3][1], f5[3][2]);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
			Face4v f66(1, f6);
			glNormal3f(f66.normal.xcomp, f66.normal.ycomp, f66.normal.zcomp);
			glVertex3f(f6[0][0], f6[0][1], f6[0][2]);
			glVertex3f(f6[1][0], f6[1][1], f6[1][2]);
			glVertex3f(f6[2][0], f6[2][1], f6[2][2]);
			glVertex3f(f6[3][0], f6[3][1], f6[3][2]);
		glEnd();

		float cf1x = (f1[0][0] + f1[1][0] + f1[2][0] + f1[3][0]) / 4;
		float cf1y = (f1[0][1] + f1[1][1] + f1[2][1] + f1[3][1]) / 4;
		float cf1z = (f1[0][2] + f1[1][2] + f1[2][2] + f1[3][2]) / 4;

		f11.normal.MultEscalar(10.0f);
		f22.normal.MultEscalar(10.0f);
		f33.normal.MultEscalar(10.0f);
		f44.normal.MultEscalar(10.0f);
		f55.normal.MultEscalar(10.0f);
		f66.normal.MultEscalar(10.0f);

		glColor3f(1.0f, 1.0f, 1.0f);
		glBegin(GL_LINES);
			glVertex3f(cf1x, cf1y, cf1z);
			glVertex3f(cf1x + f11.normal.xcomp, cf1y + f11.normal.ycomp, cf1z + f11.normal.zcomp);
		glEnd();

		float cf2x = (f2[0][0] + f2[1][0] + f2[2][0] + f2[3][0]) / 4;
		float cf2y = (f2[0][1] + f2[1][1] + f2[2][1] + f2[3][1]) / 4;
		float cf2z = (f2[0][2] + f2[1][2] + f2[2][2] + f2[3][2]) / 4;
		glColor3f(1.0f, 1.0f, 1.0f);
		glBegin(GL_LINES);
			glVertex3f(cf2x, cf2y, cf2z);
			glVertex3f(cf2x + f22.normal.xcomp, cf2y + f22.normal.ycomp, cf2z + f22.normal.zcomp);
		glEnd();

		float cf3x = (f3[0][0] + f3[1][0] + f3[2][0] + f3[3][0]) / 4;
		float cf3y = (f3[0][1] + f3[1][1] + f3[2][1] + f3[3][1]) / 4;
		float cf3z = (f3[0][2] + f3[1][2] + f3[2][2] + f3[3][2]) / 4;
		glColor3f(1.0f, 1.0f, 1.0f);
		glBegin(GL_LINES);
		glVertex3f(cf3x, cf3y, cf3z);
		glVertex3f(cf3x + f33.normal.xcomp, cf3y + f33.normal.ycomp, cf3z + f33.normal.zcomp);
		glEnd();

		float cf4x = (f2[0][0] + f4[1][0] + f4[2][0] + f4[3][0]) / 4;
		float cf4y = (f2[0][1] + f4[1][1] + f4[2][1] + f4[3][1]) / 4;
		float cf4z = (f2[0][2] + f4[1][2] + f4[2][2] + f4[3][2]) / 4;
		glColor3f(1.0f, 1.0f, 1.0f);
		glBegin(GL_LINES);
		glVertex3f(cf4x, cf4y, cf4z);
		glVertex3f(cf4x + f44.normal.xcomp, cf4y + f44.normal.ycomp, cf4z + f44.normal.zcomp);
		glEnd();

		float cf5x = (f5[0][0] + f5[1][0] + f5[2][0] + f5[3][0]) / 4;
		float cf5y = (f5[0][1] + f5[1][1] + f5[2][1] + f5[3][1]) / 4;
		float cf5z = (f5[0][2] + f5[1][2] + f5[2][2] + f5[3][2]) / 4;
		glColor3f(1.0f, 1.0f, 1.0f);
		glBegin(GL_LINES);
		glVertex3f(cf5x, cf5y, cf5z);
		glVertex3f(cf5x + f55.normal.xcomp, cf5y + f55.normal.ycomp, cf5z + f55.normal.zcomp);
		glEnd();
		
		float cf6x = (f6[0][0] + f6[1][0] + f6[2][0] + f6[3][0]) / 4;
		float cf6y = (f6[0][1] + f6[1][1] + f6[2][1] + f6[3][1]) / 4;
		float cf6z = (f6[0][2] + f6[1][2] + f6[2][2] + f6[3][2]) / 4;
		glColor3f(1.0f, 1.0f, 1.0f);
		glBegin(GL_LINES);
		glVertex3f(cf6x, cf6y, cf6z);
		glVertex3f(cf6x + f66.normal.xcomp, cf6y + f66.normal.ycomp, cf6z + f66.normal.zcomp);
		glEnd();

	glPopMatrix();
}

Cubo :: ~Cubo()
{
}

