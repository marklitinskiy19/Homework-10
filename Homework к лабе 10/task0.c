#define _CRT_SECURE_NO_DEPRECATE
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
    printf("\n=== ÎĎĐĹÄĹËĹÍČĹ ÔČĂÓĐŰ 'ÄÂŔ ĘÂŔÄĐŔŇŔ' ===\n");
    printf("Ôčăóđŕ ńîńňîčň čç ňđĺő íĺçŕâčńčěűő ęâŕäđŕňîâ\n");
    printf("ń đŕçíűěč äëčíŕěč ńňîđîí. Ęŕćäűé ęâŕäđŕň čěĺĺň:\n");
    printf("- Âńĺ ńňîđîíű đŕâíű\n");
    printf("- Âńĺ óăëű ďđ˙ěűĺ (90 ăđŕäóńîâ)\n");
    printf("- Ďëîůŕäü âű÷čńë˙ĺňń˙ ęŕę ńňîđîíŕ â ęâŕäđŕňĺ\n");
    printf("Îáůŕ˙ ďëîůŕäü ôčăóđű đŕâíŕ ńóěěĺ ďëîůŕäĺé ňđĺő ęâŕäđŕňîâ.\n");
}
float get_side1() { return side1; }
float get_side2() { return side2; }
float get_side3() { return side3; }

void print_parameters() {
    printf("\n=== ĎŔĐŔĚĹŇĐŰ ÔČĂÓĐŰ ===\n");
    printf("Ńňîđîíŕ ďĺđâîăî ęâŕäđŕňŕ: %.2f\n", get_side1());
    printf("Ńňîđîíŕ âňîđîăî ęâŕäđŕňŕ: %.2f\n", get_side2());
    printf("Ńňîđîíŕ ňđĺňüĺăî ęâŕäđŕňŕ: %.2f\n", get_side3());
    printf("Îáůŕ˙ ďëîůŕäü ôčăóđű: %.2f\n", area_two_squares(side1, side2, side3));
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    int choice;


    printf("Ââĺäčňĺ ńňîđîíó ďĺđâîăî ęâŕäđŕňŕ: ");
    scanf("%f", &side1);
    printf("Ââĺäčňĺ ńňîđîíó âňîđîăî ęâŕäđŕňŕ: ");
    scanf("%f", &side2);
    printf("Ââĺäčňĺ ńňîđîíó ňđĺňüĺăî ęâŕäđŕňŕ: ");
    scanf("%f", &side3);


    printf("Ââĺäčňĺ ńčěâîë äë˙ đčńîâŕíč˙ ôčăóđű: ");
    scanf(" %c", &draw_symbol);

    do {
        printf("\nĚĺíţ:\n");
        printf("1 - Đŕńń÷čňŕňü ďëîůŕäü\n");
        printf("2 - Îďđĺäĺëĺíčĺ ôčăóđű\n");
        printf("3 - Íŕđčńîâŕňü ôčăóđó\n");
        printf("4 - Ńđŕâíčňü ń äđóăîé ôčăóđîé\n");
        printf("5 - Âűâĺńňč ďŕđŕěĺňđű ôčăóđű\n");
        printf("6 - Čçěĺíčňü ńčěâîë đčńîâŕíč˙\n");
        printf("0 - Âűőîä\n");
        printf("Âűáĺđčňĺ: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Îáůŕ˙ ďëîůŕäü ôčăóđű: %.2f\n", area_two_squares(side1, side2, side3));
            break;

        case 2:
            print_definition();
            break;

        case 3:
            printf("Ęâŕäđŕň 1:\n");
            draw_square((int)side1, draw_symbol);
            printf("Ęâŕäđŕň 2:\n");
            draw_square((int)side2, draw_symbol);
            printf("Ęâŕäđŕň 3:\n");
            draw_square((int)side3, draw_symbol);
            break;

        case 4:
        {
            float s4, s5, s6; printf("Ââĺäčňĺ ńňîđîíű âňîđîé ôčăóđű:\n");
            printf("Ńňîđîíŕ 1: "); scanf("%f", &s4);
            printf("Ńňîđîíŕ 2: "); scanf("%f", &s5);
            printf("Ńňîđîíŕ 3: "); scanf("%f", &s6);

            float difference = compare_figures(side1, side2, side3, s4, s5, s6);

            if (difference > 0) {
                printf("Ďĺđâŕ˙ ôčăóđŕ áîëüřĺ íŕ %.2f\n", difference);
            }
            else if (difference < 0) {
                printf("Âňîđŕ˙ ôčăóđŕ áîëüřĺ íŕ %.2f\n", -difference);
            }
            else {
                printf("Ôčăóđű đŕâíű ďî ďëîůŕäč\n");
            }
        }
        break;

        case 5:
            print_parameters();
            break;

        case 6:
            printf("Ââĺäčňĺ íîâűé ńčěâîë äë˙ đčńîâŕíč˙: ");
            scanf(" %c", &draw_symbol);
            break;

        case 0:
            printf("Âűőîä\n");
            break;

        default:
            printf("Íĺâĺđíűé âűáîđ\n");
        }
    } while (choice != 0);

    return 0;
}
