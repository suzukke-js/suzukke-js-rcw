#include "stdafx.h"
#include "Recipe.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// ���{��o�͗p�̃��P�[���ݒ�
	setlocale(LC_ALL, "ja-JP");

	// ���V�s�^�C�g���̏o��
	Recipe recipe(L"�I�����C�X");
	std::wcout << recipe.GetTitle();
	return 0;
}

