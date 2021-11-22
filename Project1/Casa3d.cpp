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

}