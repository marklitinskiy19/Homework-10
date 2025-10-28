#include <stdio.h>
#include <locale.h>


float side1, side2, side3;
char draw_symbol = '*';

float area_two_squares(float s1, float s2, float s3) {
    return s1 * s1 + s2 * s2 + s3 * s3;
}

float area_square(float side) {
    return side * side;
}

float compare_figures(float s1, float s2, float s3, float s4, float s5, float s6) {
    float area1 = area_two_squares(s1, s2, s3);
    float area2 = area_two_squares(s4, s5, s6);
    return area1 - area2;
}

void draw_square(int side, char symbol) {
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    printf("\n");
}

void print_definition() {
    printf("\n=== ����������� ������ '��� ��������' ===\n");
    printf("������ ������� �� ���� ����������� ���������\n");
    printf("� ������� ������� ������. ������ ������� �����:\n");
    printf("- ��� ������� �����\n");
    printf("- ��� ���� ������ (90 ��������)\n");
    printf("- ������� ����������� ��� ������� � ��������\n");
    printf("����� ������� ������ ����� ����� �������� ���� ���������.\n");
}
float get_side1() { return side1; }
float get_side2() { return side2; }
float get_side3() { return side3; }

void print_parameters() {
    printf("\n=== ��������� ������ ===\n");
    printf("������� ������� ��������: %.2f\n", get_side1());
    printf("������� ������� ��������: %.2f\n", get_side2());
    printf("������� �������� ��������: %.2f\n", get_side3());
    printf("����� ������� ������: %.2f\n", area_two_squares(side1, side2, side3));
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    int choice;


    printf("������� ������� ������� ��������: ");
    scanf("%f", &side1);
    printf("������� ������� ������� ��������: ");
    scanf("%f", &side2);
    printf("������� ������� �������� ��������: ");
    scanf("%f", &side3);


    printf("������� ������ ��� ��������� ������: ");
    scanf(" %c", &draw_symbol);

    do {
        printf("\n����:\n");
        printf("1 - ���������� �������\n");
        printf("2 - ����������� ������\n");
        printf("3 - ���������� ������\n");
        printf("4 - �������� � ������ �������\n");
        printf("5 - ������� ��������� ������\n");
        printf("6 - �������� ������ ���������\n");
        printf("0 - �����\n");
        printf("��������: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("����� ������� ������: %.2f\n", area_two_squares(side1, side2, side3));
            break;

        case 2:
            print_definition();
            break;

        case 3:
            printf("������� 1:\n");
            draw_square((int)side1, draw_symbol);
            printf("������� 2:\n");
            draw_square((int)side2, draw_symbol);
            printf("������� 3:\n");
            draw_square((int)side3, draw_symbol);
            break;

        case 4:
        {
            float s4, s5, s6; printf("������� ������� ������ ������:\n");
            printf("������� 1: "); scanf("%f", &s4);
            printf("������� 2: "); scanf("%f", &s5);
            printf("������� 3: "); scanf("%f", &s6);

            float difference = compare_figures(side1, side2, side3, s4, s5, s6);

            if (difference > 0) {
                printf("������ ������ ������ �� %.2f\n", difference);
            }
            else if (difference < 0) {
                printf("������ ������ ������ �� %.2f\n", -difference);
            }
            else {
                printf("������ ����� �� �������\n");
            }
        }
        break;

        case 5:
            print_parameters();
            break;

        case 6:
            printf("������� ����� ������ ��� ���������: ");
            scanf(" %c", &draw_symbol);
            break;

        case 0:
            printf("�����\n");
            break;

        default:
            printf("�������� �����\n");
        }
    } while (choice != 0);

    return 0;
}
