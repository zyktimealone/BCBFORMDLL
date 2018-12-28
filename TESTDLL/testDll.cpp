//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "testDll.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//必须加入这句，如果打包给别人用，就需要另外创建一个头文件，包含下面这句话。此句含义是导入该函数
extern "C"  void __declspec(dllimport) __stdcall ShowFrm();
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn1Click(TObject *Sender)
{
        ShowFrm();        
}
//---------------------------------------------------------------------------
