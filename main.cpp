#include <stdio.h> 
#include <string> 
#include <iostream> 
using namespace std;

int main() {
    int a;
    char b;
    string c;
    printf("������ ����� �����:\n*��������, m-���� ,d-���� ,e-����� ,n-����\n");
    scanf("%c", &b);
    switch (b) {
    case 'm': c = "������ ����"; break;
    case 'd': c = "������ ����"; break;
    case 'e': c = "������ �����"; break;
    case 'n': c = "������ ����"; break;
    default: printf("m ���� d ���� e ���� n\n"); break;
    }
    printf("������ ����� ���������:\n1���\n2�������\n3�������\n");
    scanf("%d", &a);
    switch (a) {
    case 1:
        printf("*�������� �����������: �����*\n�����������, �������� �����, ������ ������� ������:\n1�����\n2�������\n");
        scanf("%d", &a);
        switch (a) {
        case 1: printf("�������� �����\n"); break;
        case 2: printf("�������\n"); break;
        default: printf("������-�� � ��� ��� ������ ��������\n"); break;
        }
    case 2:
        printf("*�������� �����������: ��������*\n�����������, �������� ����, ������ ������� ������:\n1���\n2����\n");
        scanf("%d", &a); break;
    case 3:
        printf("*�������� ����������: ��� ������ � ������*\n������ ���������:\n1�����\n2��������\n");
        scanf("%d", &a);
        switch (a) {
        case 1: printf("������, �����, �������(1) ��� �������(2) ������?\n"); break;
        case 2: printf("%s", 'c', ", �� ���� ��� ��(1) ��� ����(2)?\n"); break;
        default:printf("ok"); break;
        }
    }
    printf("����������� �������...");
    return 0;
}