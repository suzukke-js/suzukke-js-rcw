#include "stdafx.h"
#include "Recipe.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// ���{��o�͗p�̃��P�[���ݒ�
	setlocale(LC_ALL, "ja-JP");

	// �����`�F�b�N
	if (argc < 1) {
		exit(-1);
	}

	// �t�@�C����
	LPCWSTR filePath = argv[0];
	// ToDo: �t�@�C���ǂݍ���

	// ���V�s�^�C�g���̏o��
	Recipe recipe(L"�I�����C�X");
	std::wcout << recipe.GetTitle();
	return 0;
}

