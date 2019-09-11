#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);//ウィンドウモードに変更
	SetDrawScreen(DX_SCREEN_BACK);//画面の裏に描画するように変更

	if (DxLib_Init() == -1)//Dxlibの初期化処理
		return -1;//エラーが出たら直ちに終了

	char key[256];//GetKeyStateAll用配列

	while (ScreenFlip() == 0/*画面の裏表を入れ替える*/ && ProcessMessage() == 0 && GetHitKeyStateAll(key) == 0/*入力されたキーを知る*/)
	{
		ClearDrawScreen();//裏の描画を消す
		//DrawBox(0, 0, 100, 100, 0xFFFFFF, TRUE);
		
	//WaitKey();//キーの入力待ち
		if (key[KEY_INPUT_ESCAPE] == 1)//ESCが押されたら
		{
			DxLib_End();//Dxlibの終了
			return 0;//ソフトの終了
		}
	}
}
