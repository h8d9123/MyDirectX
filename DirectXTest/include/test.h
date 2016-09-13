#ifndef DIRECTXTEST_TEST_H_
#define DIRECTXTEST_TEST_H_

#include<d3d9.h>

namespace myd3d
{
	static void *pdata;
	typedef struct
	{
		float x, y, z;
		unsigned long color;
	}VertexXYZColor;

#define	FVF_XYZ_COLOR (D3DFVF_XYZ | D3DFVF_DIFFUSE)

	void test(int);
	//do all work here
	HRESULT MyRender(LPDIRECT3DDEVICE9 pd3dDevice);
	HRESULT MyCleanUp()

}

#endif



