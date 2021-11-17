#pragma once

#define PI 3.141592653589793238462643383279502884L
#define RES 8.0f

class Disco
{
public:
	float pcx, pcy, pcz;
	float raio;
	float id;

	Disco(int idC, float ppcx, float ppcy, float ppcz, float rraio);
	void Desenha();
	~Disco();
};

