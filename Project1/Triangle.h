#pragma once
class Triangle
{
public:
	int Id;
	float vertices[3][3];		// 3 v�rtices do tri�ngulo
	float normal[3];		    // vetor normal a este tri�ngulo
public:
	Triangle(int tId, float tvertices[3][3]);
	~Triangle();
};

