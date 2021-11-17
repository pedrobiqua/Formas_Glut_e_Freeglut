#pragma once
#include <math.h>
#include <GL\freeglut.h>  // GLUT, include glu.h and gl.h

class Vetor {
public:
	int Id;
	float xcomp;
	float ycomp;
	float zcomp;
public:
	Vetor();
	Vetor(int tId, float txcomp, float tycomp, float tzcomp);
	void Desenha(float xpos, float ypos, float zpos);
	float Magnitude();
	void MultEscalar(float k);
	void SomaVetor(Vetor tVetor);
	void SubtraiVetor(Vetor tVetor);
	float ProdutoEscalar(Vetor tVetor);
	Vetor ProdutoVetorial(Vetor v1, Vetor v2);
	bool Ortogonal(Vetor tVetor);
	void Normalizar();
	Vetor Soma2Vetores(Vetor v1, Vetor v2);
	Vetor Subtrai2Vetores(Vetor v1, Vetor v2);
};