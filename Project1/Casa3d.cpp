#include "Casa3d.h"
#include "GL\Freeglut.h"
#include "Cubo.h"
#include "TetraHedro.h"


void Casa3d::Desenha(int Um)
{
	// Desenha uma casinha composta de um quadrado e um triângulo

	// Altera a cor do desenho para azul
	glColor3f(0.0f, 0.0f, 1.0f);
	// Desenha a casa
	glBegin(GL_QUADS);
	glVertex2f(-15.0f, -15.0f);
	glVertex2f(-15.0f, 5.0f);
	glVertex2f(15.0f, 5.0f);
	glVertex2f(15.0f, -15.0f);
	glEnd();

	// Altera a cor do desenho para branco
	glColor3f(1.0f, 1.0f, 1.0f);
	// Desenha a porta e a janela  
	glBegin(GL_QUADS);
	glVertex2f(-4.0f, -14.5f);
	glVertex2f(-4.0f, 0.0f);
	glVertex2f(4.0f, 0.0f);
	glVertex2f(4.0f, -14.5f);
	glVertex2f(7.0f, -5.0f);
	glVertex2f(7.0f, -1.0f);
	glVertex2f(13.0f, -1.0f);
	glVertex2f(13.0f, -5.0f);
	glEnd();

	// Altera a cor do desenho para azul
	glColor3f(0.0f, 0.0f, 1.0f);
	// Desenha as "linhas" da janela  
	glBegin(GL_LINES);
	glVertex2f(7.0f, -3.0f);
	glVertex2f(13.0f, -3.0f);
	glVertex2f(10.0f, -1.0f);
	glVertex2f(10.0f, -5.0f);
	glEnd();

	// Altera a cor do desenho para vermelho
	glColor3f(1.0f, 0.0f, 0.0f);
	// Desenha o telhado
	glBegin(GL_TRIANGLES);
	glVertex2f(-15.0f, 5.0f);
	glVertex2f(0.0f, 17.0f);
	glVertex2f(15.0f, 5.0f);
	glEnd();

	// Executa os comandos OpenGL 
	glFlush();
}
Casa3d::Casa3d(float xcc, float ycc, float zcc, float acc, float xtt, float ytt, float ztt, float att)
{
	//Parte do cubo
	xc = xcc;
	yc = ycc;
	zc = zcc;
	aac = acc;

	Cubo cubo1(1, xc, yc, zc, aac);

	xt = xtt;
	yt = ytt;
	zt = ytt;
	aat = att;
	TetraHedro tetra1(1, xt, yt, zt, aat);

}
void Casa3d::Desenha()
{
    /* main rec */
    glColor3f(.5, .75, .35);
    glBegin(GL_POLYGON);
    glVertex3f(30.2, 30.1, 30.0);
    glVertex3f(30.9, 30.1, 30.0);
    glVertex3f(30.9, 30.575, 30.0);
    glVertex3f(30.2, 30.575, 30.0);
    glEnd();

    /*back rec*/
    glColor3f(.5, .75, .35);
    glBegin(GL_POLYGON);
    glVertex3f(30.2, 30.1, 30.5);
    glVertex3f(30.9, 30.1, 30.5);
    glVertex3f(30.9, 30.575, 30.5);
    glVertex3f(30.2, 30.575, 30.5);
    glEnd();

    /* left rec */
    glColor3f(.75, 0.75, .25);
    glBegin(GL_POLYGON);
    glVertex3f(30.2, 30.1, 30.5);
    glVertex3f(30.2, 30.1, 30.0);
    glVertex3f(30.2, 30.575, 30.0);
    glVertex3f(30.2, 30.575, 30.5);
    glEnd();

    /* right rec */
    glColor3f(.75, 0.75, .25);
    glBegin(GL_POLYGON);
    glVertex3f(30.9, 30.1, 30.5);
    glVertex3f(30.9, 30.1, 30.0);
    glVertex3f(30.9, 30.575, 30.0);
    glVertex3f(30.9, 30.575, 30.5);
    glEnd();

    /* left tri */
    glColor3f(.5, 0.5, .25);
    glBegin(GL_TRIANGLES);
    glVertex3f(30.9, 30.575, 30.0);
    glVertex3f(30.9, 30.575, 30.5);
    glVertex3f(30.9, 30.8, 30.25);
    glEnd();

    /* right tri */
    glColor3f(.5, 0.5, .25);
    glBegin(GL_TRIANGLES);
    glVertex3f(30.2, 30.575, 30.0);
    glVertex3f(30.2, 30.575, 30.5);
    glVertex3f(30.2, 30.8, 30.25);
    glEnd();

    /* roof */
    glColor3f(.55, 0.35, .2);
    glBegin(GL_POLYGON);
    glVertex3f(30.2, 30.575, 30.0);
    glVertex3f(30.9, 30.575, 30.0);
    glVertex3f(30.9, 30.8, 30.25);
    glVertex3f(30.2, 30.8, 30.25);
    glEnd();

    /*back roof */
    glColor3f(.55, 0.35, .2);
    glBegin(GL_POLYGON);
    glVertex3f(30.2, 30.575, 30.5);
    glVertex3f(30.9, 30.575, 30.5);
    glVertex3f(30.9, 30.8, 30.25);
    glVertex3f(30.2, 30.8, 30.25);
    glEnd();

    /* door */
    glColor3f(.15, 0.2, .3);
    glBegin(GL_POLYGON);
    glVertex3f(30.47, 30.105, 30.0);
    glVertex3f(30.65, 30.105, 30.0);
    glVertex3f(30.65, 30.46, 30.0);
    glVertex3f(30.47, 30.46, 30.0);
    glEnd();

    /* window 1 */
    glColor3f(.3, 0.2, .1);
    glBegin(GL_POLYGON);
    glVertex3f(30.72, 30.25, 30.0);
    glVertex3f(30.83, 30.25, 30.0);
    glVertex3f(30.83, 30.4, 30.0);
    glVertex3f(30.72, 30.4, 30.0);
    glEnd();

    /* window 2 */
    glColor3f(.3, 0.2, .1);
    glBegin(GL_POLYGON);
    glVertex3f(30.27, 30.25, 30.0);
    glVertex3f(30.38, 30.25, 30.0);
    glVertex3f(30.38, 30.4, 30.0);
    glVertex3f(30.27, 30.4, 30.0);
    glEnd();

    glFlush();
    glPopMatrix();
    glutSwapBuffers();
}