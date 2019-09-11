#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);//�E�B���h�E���[�h�ɕύX
	SetDrawScreen(DX_SCREEN_BACK);//��ʂ̗��ɕ`�悷��悤�ɕύX

	if (DxLib_Init() == -1)//Dxlib�̏���������
		return -1;//�G���[���o���璼���ɏI��

	char key[256];//GetKeyStateAll�p�z��

	while (ScreenFlip() == 0/*��ʂ̗��\�����ւ���*/ && ProcessMessage() == 0 && GetHitKeyStateAll(key) == 0/*���͂��ꂽ�L�[��m��*/)
	{
		ClearDrawScreen();//���̕`�������
		//DrawBox(0, 0, 100, 100, 0xFFFFFF, TRUE);
		
	//WaitKey();//�L�[�̓��͑҂�
		if (key[KEY_INPUT_ESCAPE] == 1)//ESC�������ꂽ��
		{
			DxLib_End();//Dxlib�̏I��
			return 0;//�\�t�g�̏I��
		}
	}
}
