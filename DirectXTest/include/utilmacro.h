#ifndef DIRECTTEST_UTIILMACRO_H_
#define DIRECTTEST_UTIILMACRO_H_

#ifndef V
#define V(x) {hr = x;}
#endif // !V

#ifndef V_RETURN
#define V_RETURN(x) { hr = x; if(FAILED(hr)){ return hr; } }
#endif // !V_RETURN

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p) { delete (p); (p) = NULL; } }
#endif // !SAFE_DELETE

#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(x) { if(p) {delete[] (p); (p) = NULL;}}
#endif // !SAFE_DELETE_ARRAY

#ifndef SAFE_RELEASE
#define SAFE_RELEASE(x) { if(p) {(p)->Release(); (p)=NULL;} }
#endif // !SAFE_RELEASE

#endif // !DIRECTTEST_UTIILMACRO_H_
