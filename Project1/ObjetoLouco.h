#pragma once
class ObjetoLouco
{
public:
	float pcx, pcy, pcz;
	float a;
	int id;
	float f1[4][3];
	float f2[4][3];
	float f3[4][3];
	float f4[4][3];
	float f5[4][3];
	float f6[4][3];
public:
	ObjetoLouco();
	void Desenha();
	~ObjetoLouco();
};

