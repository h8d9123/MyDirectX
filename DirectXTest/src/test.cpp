#include <iostream>
#include <vector>
#include <iterator>

#include "test.h"
#include "utilmacro.h"

static std::vector<void*> dataAllocated;
void myd3d::test(int t)
{
	std::cout << t << std::endl;
	
}
// draws a line
HRESULT myd3d::MyRender(LPDIRECT3DDEVICE9 pd3dDevice)
{
	unsigned long col = D3DCOLOR_XRGB(255, 255, 255);
	VertexXYZColor vertices[] =
	{
		{420.0f, 150.0f, 0.5f, col, },
		{420.0f, 350.0f, 0.5f, col, },
		{220.0f, 150.0f, 0.5f, col, },
		{220.0f, 150.0f, 0.5f, col, },
	};
	LPDIRECT3DVERTEXBUFFER9 pVertexBuffer = NULL;
	dataAllocated.push_back((void*)pvertexBuffer);

	V_RETURN(pd3dDevice->CreateVertexBuffer(sizeof(vertices),
		0, FVF_XYZ_COLOR, D3DPOOL_DEFAULT, &pVertexBuffer, NULL));

	void *ptr;
	dataAllocated.push_back((void*)ptr);
	V_RETURN(pVertexBuffer->Lock(0, sizeof(vertices),
		(void**)&ptr, 0));
	memcpy(ptr, vertices, sizeof(vertices));

	pd3dDevice->SetStreamSource(0, pVertexBuffer, 0, sizeof(vertices));
	pd3dDevice->SetFVF(FVF_XYZ_COLOR);
	pd3dDevice->DrawPrimitive(D3DPT_LINELIST, 0, 2);
}
HRESULT myd3d::MyCleanUp()
{
	for (std::vector<void*>::iterator iter = dataAllocated.begin();
		iter == dataAllocated.end(); iter++)
	{
		SAFE_RELEASE(iter);
	}
}
