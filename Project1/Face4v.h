#pragma once
#include "Vetor.h"

class Face4v
{
public:
	int Id;
	float vertices[4][3];
	Vetor normal;
public:
		Face4v(int tId, float tvertices[4][3]);
		~Face4v();
};

