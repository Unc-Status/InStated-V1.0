#ifndef D3D_H
#define D3D_H

namespace D3D{

 namespace D3DBuffer{
   static char cBuff[1024];
 }

   void Render(ID3DResource * pResource);
   void Release(ID3DResource * pResource);

}

#endif
