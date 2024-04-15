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
		"2020年に発売され、ヒットしたNintendo Switchのゲーム「○○○○　どうぶつの森」。○○○○に入る言葉は？",
		"2010年代にスマートフォンでヒットしたソーシャルゲーム「パズドラ」の正式名称は？",
		"2000年代にガラケーでヒットした、自転車に乗った棒人間を操作して遊ぶゲームの名前は？",
		"1990年代にゲームセンターに設置され、ブームとなった写真シール機「プリクラ」の正式名称は？"
	};
	char _correctAnsArray[QUIZ_MAX][40] =
	{
		"あつまれ",
		"パズル＆ドラゴンズ",
		"チャリ走",
		"プリント倶楽部"
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
			printf("正解です\n");
			_ansNum++;
		}
		else printf("間違いです。正しい答えは、%sです\n", *(_correctAns + i));
	}

	printf("あなたは%d問、正解しました。", _ansNum);
}