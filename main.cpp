#include <stdio.h> 
#include <string> 
#include <iostream> 
using namespace std;

int main() {
    int a;
    char b;
    string c;
    printf("Выбери время суток:\n*подказка, m-утро ,d-день ,e-вечер ,n-ночь\n");
    scanf("%c", &b);
    switch (b) {
    case 'm': c = "Доброе утро"; break;
    case 'd': c = "Добрый день"; break;
    case 'e': c = "Добрый вечер"; break;
    case 'n': c = "Доброй ночи"; break;
    default: printf("m либо d либо e либо n\n"); break;
    }
    printf("Выбери класс персонажа:\n1Маг\n2Стрелок\n3Нифилим\n");
    scanf("%d", &a);
    switch (a) {
    case 1:
        printf("*Получена способность: Магия*\nПриветствую, Гендальф серый, выбери любимое оружие:\n1Посох\n2Палочка\n");
        scanf("%d", &a);
        switch (a) {
        case 1: printf("Отличный выбор\n"); break;
        case 2: printf("Неплохо\n"); break;
        default: printf("Вообще-то я дал два выбора варианта\n"); break;
        }
    case 2:
        printf("*Получена способность: Точность*\nПриветствую, Орлинный глаз, выбери любимое оружие:\n1Лук\n2Ножи\n");
        scanf("%d", &a); break;
    case 3:
        printf("*Получено достижение: Сын ангела и демона*\nВыбери персонажа:\n1Данте\n2Вергилий\n");
        scanf("%d", &a);
        switch (a) {
        case 1: printf("Привет, Данте, ближнее(1) или дальнее(2) оружие?\n"); break;
        case 2: printf("%s", 'c', ", на этот раз ум(1) или сила(2)?\n"); break;
        default:printf("ok"); break;
        }
    }
    printf("Продолжение следует...");
    return 0;
}