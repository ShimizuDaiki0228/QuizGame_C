#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char name[][9] = { "�E��", "�_��", "���@�g��" };
    FILE* fp;
    fp = fopen("save_data.txt", "w");
    if (fp == NULL)
    {
        printf("�t�@�C�����J�����Ƃ��ł��܂���");
        return -1;
    }
    for (int i = 0; i < 3; i++) fprintf(fp, "%s\n", name[i]);
    fclose(fp);
    printf("�t�@�C���ɏ������݂܂���");
}