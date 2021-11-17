#include "Face4v.h"
#include <math.h>

Face4v::Face4v(int tId, float tvertices[4][3])
{
	vertices[0][0] = tvertices[0][0];
	vertices[0][1] = tvertices[0][1];
	vertices[0][2] = tvertices[0][2];
	vertices[1][0] = tvertices[1][0];
	vertices[1][1] = tvertices[1][1];
	vertices[1][2] = tvertices[1][2];
	vertices[2][0] = tvertices[2][0];
	vertices[2][1] = tvertices[2][1];
	vertices[2][2] = tvertices[2][2];
	vertices[3][0] = tvertices[3][0];
	vertices[3][1] = tvertices[3][1];
	vertices[3][2] = tvertices[3][2];

	Vetor v1(0, 0, 0, 0), v2(0, 0, 0, 0);

	v1.xcomp = vertices[0][0] - vertices[1][0];
	v1.ycomp = vertices[0][1] - vertices[1][1];
	v1.zcomp = vertices[0][2] - vertices[1][2];

	v2.xcomp = vertices[1][0] - vertices[2][0];
	v2.ycomp = vertices[1][1] - vertices[2][1];
	v2.zcomp = vertices[1][2] - vertices[2][2];

	normal = normal.ProdutoVetorial(v1, v2);
	normal.Normalizar();
}
Face4v :: ~Face4v()
{
}