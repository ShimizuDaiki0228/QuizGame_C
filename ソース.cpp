#define _CRT_SECURE_NO_WARNINGS
#define QUIZ_MAX 4
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char _quizArray[QUIZ_MAX][300] =
	{
		"2020�N�ɔ�������A�q�b�g����Nintendo Switch�̃Q�[���u���������@�ǂ��Ԃ̐X�v�B���������ɓ��錾�t�́H",
		"2010�N��ɃX�}�[�g�t�H���Ńq�b�g�����\�[�V�����Q�[���u�p�Y�h���v�̐������̂́H",
		"2000�N��ɃK���P�[�Ńq�b�g�����A���]�Ԃɏ�����_�l�Ԃ𑀍삵�ėV�ԃQ�[���̖��O�́H",
		"1990�N��ɃQ�[���Z���^�[�ɐݒu����A�u�[���ƂȂ����ʐ^�V�[���@�u�v���N���v�̐������̂́H"
	};
	char _correctAnsArray[QUIZ_MAX][40] =
	{
		"���܂�",
		"�p�Y�����h���S���Y",
		"�`������",
		"�v�����g��y��"
	};
	
	char(* _quiz)[300] = _quizArray;
	char(* _correctAns)[40] = _correctAnsArray;
	int _quizLen = sizeof(_quizArray) / sizeof(_quizArray[0]);
	char _ans[30];
	int _ansNum = 0;
	for (int i = 0; i < QUIZ_MAX; i++)
	{
		printf("%s\n", *(_quiz + i));
		scanf("%s", _ans);
		if (strcmp(_ans, *(_correctAns + i)) == 0)
		{
			printf("�����ł�\n");
			_ansNum++;
		}
		else printf("�ԈႢ�ł��B�����������́A%s�ł�\n", *(_correctAns + i));
	}

	printf("���Ȃ���%d��A�������܂����B", _ansNum);
}