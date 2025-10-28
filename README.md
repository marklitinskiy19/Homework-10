## Условие:
<img width="781" height="199" alt="image" src="https://github.com/user-attachments/assets/cb88ea5c-e0af-4f9c-93d5-b28874592ffe" />
<img width="1441" height="894" alt="image" src="https://github.com/user-attachments/assets/4e29e20c-1c91-431e-9e9e-53e6b3100a89" />

## Код:
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
        printf("\n=== ОПРЕДЕЛЕНИЕ ФИГУРЫ 'ДВА КВАДРАТА' ===\n");
        printf("Фигура состоит из трех независимых квадратов\n");
        printf("с разными длинами сторон. Каждый квадрат имеет:\n");
        printf("- Все стороны равны\n");
        printf("- Все углы прямые (90 градусов)\n");
        printf("- Площадь вычисляется как сторона в квадрате\n");
        printf("Общая площадь фигуры равна сумме площадей трех квадратов.\n");
    }
    float get_side1() { return side1; }
    float get_side2() { return side2; }
    float get_side3() { return side3; }
    
    void print_parameters() {
        printf("\n=== ПАРАМЕТРЫ ФИГУРЫ ===\n");
        printf("Сторона первого квадрата: %.2f\n", get_side1());
        printf("Сторона второго квадрата: %.2f\n", get_side2());
        printf("Сторона третьего квадрата: %.2f\n", get_side3());
        printf("Общая площадь фигуры: %.2f\n", area_two_squares(side1, side2, side3));
    }
    
    int main() {
        setlocale(LC_CTYPE, "RUS");
        int choice;
    
        
        printf("Введите сторону первого квадрата: ");
        scanf("%f", &side1);
        printf("Введите сторону второго квадрата: ");
        scanf("%f", &side2);
        printf("Введите сторону третьего квадрата: ");
        scanf("%f", &side3);
    
        
        printf("Введите символ для рисования фигуры: ");
        scanf(" %c", &draw_symbol);
    
        do {
            printf("\nМеню:\n");
            printf("1 - Рассчитать площадь\n");
            printf("2 - Определение фигуры\n");
            printf("3 - Нарисовать фигуру\n");
            printf("4 - Сравнить с другой фигурой\n");
            printf("5 - Вывести параметры фигуры\n");
            printf("6 - Изменить символ рисования\n");
            printf("0 - Выход\n");
            printf("Выберите: ");
            scanf("%d", &choice);
    
            switch (choice) {
            case 1:
                printf("Общая площадь фигуры: %.2f\n", area_two_squares(side1, side2, side3));
                break;
    
            case 2:
                print_definition();
                break;
    
            case 3:
                printf("Квадрат 1:\n");
                draw_square((int)side1, draw_symbol);
                printf("Квадрат 2:\n");
                draw_square((int)side2, draw_symbol);
                printf("Квадрат 3:\n");
                draw_square((int)side3, draw_symbol);
                break;
    
            case 4:
            {
                float s4, s5, s6; printf("Введите стороны второй фигуры:\n");
                printf("Сторона 1: "); scanf("%f", &s4);
                printf("Сторона 2: "); scanf("%f", &s5);
                printf("Сторона 3: "); scanf("%f", &s6);
    
                float difference = compare_figures(side1, side2, side3, s4, s5, s6);
    
                if (difference > 0) {
                    printf("Первая фигура больше на %.2f\n", difference);
                }
                else if (difference < 0) {
                    printf("Вторая фигура больше на %.2f\n", -difference);
                }
                else {
                    printf("Фигуры равны по площади\n");
                }
            }
            break;
    
            case 5:
                print_parameters();
                break;
    
            case 6:
                printf("Введите новый символ для рисования: ");
                scanf(" %c", &draw_symbol);
                break;
    
            case 0:
                printf("Выход\n");
                break;
    
            default:
                printf("Неверный выбор\n");
            }
        } while (choice != 0);
    
        return 0;
    }

## Результаты работы программы:
<img width="510" height="849" alt="image" src="https://github.com/user-attachments/assets/67dcae36-60a4-4a5d-93ff-1face5484587" />
<img width="738" height="434" alt="image" src="https://github.com/user-attachments/assets/33c64a27-dac3-4ac3-b050-ed4301fa3716" />
<img width="647" height="266" alt="image" src="https://github.com/user-attachments/assets/8cce7226-00be-4dcf-9aa9-99fd7b6df615" />
<img width="424" height="330" alt="image" src="https://github.com/user-attachments/assets/77428a74-b9ce-432d-9cf4-1b2fafe4c1fc" />
<img width="398" height="371" alt="image" src="https://github.com/user-attachments/assets/b6313fba-9cea-4f59-8c8f-e4cdb16008b4" />
<img width="469" height="1007" alt="image" src="https://github.com/user-attachments/assets/c400a3bc-9ccd-47e5-a22c-87b21464248a" />




## Информация о разработчике:
Литинский Марк бИЦ-251




    
    

