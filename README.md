## Условие:
<img width="796" height="220" alt="image" src="https://github.com/user-attachments/assets/7c9a9a3b-ef43-423e-8490-2878b17251aa" />
<img width="1441" height="904" alt="image" src="https://github.com/user-attachments/assets/bf72e3b0-97ec-4826-8ce2-5b5ba272cb07" />



## Код:
    #define _CRT_SECURE_NO_DEPRECATE
    #include <stdio.h>
    #include <locale.h>
    #include <math.h>
    
    float area_triangle(float a, float b);
    void draw_triangle(int a, int b, char symbol);
    void print_definition_triangle();
    int get_cathetus_a();
    int get_cathetus_b();
    
    float side_a, side_b;
    char draw_symbol;
    
    float area_triangle(float a, float b) {
        return (a * b) / 2.0f;
    }
    
    void draw_triangle(int a, int b, char symbol) {
        printf("Прямоугольный треугольник (катеты: %d x %d):\n", a, b);
    
        for (int row = 0; row < a; row++) {
            int width = (int)((float)(row + 1) * b / a + 0.5);
            if (width < 1) width = 1;
            if (width > b) width = b;
    
            for (int col = 0; col < width; col++) {
                printf("%c ", symbol);
            }
            printf("\n");
        }
    }
    
    void print_definition_triangle() {
        printf("\n=== ОПРЕДЕЛЕНИЕ ПРЯМОУГОЛЬНОГО ТРЕУГОЛЬНИКА ===\n");
        printf("Прямоугольный треугольник - треугольник с прямым углом (90 градусов).\n");
        printf("Две стороны, образующие прямой угол, называются катетами.\n");
        printf("Сторона, противолежащая прямому углу, - гипотенуза.\n");
        printf("Формула площади: S = (a * b) / 2\n");
        printf("Теорема Пифагора: c^2 = a^2 + b^2\n");
    }
    
    int get_cathetus_a() {
        return (int)side_a;
    }
    
    int get_cathetus_b() {
        return (int)side_b;
    }
    
    int main() {
        setlocale(LC_CTYPE, "RUS");
        int choice;
        char symbol;
    
        printf("Введите длину первого катета (a): ");
        scanf("%f", &side_a);
        printf("Введите длину второго катета (b): ");
        scanf("%f", &side_b);
    
        if (side_a <= 0 || side_b <= 0) {
            printf("Ошибка: длины должны быть положительными!\n");
            return 1;
        }
    
        printf("Введите символ для рисования фигуры: ");
        scanf(" %c", &symbol);
        draw_symbol = symbol;
    
        do {
            printf("\n=== МЕНЮ ===\n");
            printf("1 - Рассчитать площадь\n");
            printf("2 - Вывести определение фигуры\n");
            printf("3 - Нарисовать фигуру\n");
            printf("4 - Вывести параметры фигуры\n");
            printf("5 - Изменить символ рисования\n");
            printf("0 - Выход\n");
            printf("Выберите операцию: ");
            scanf("%d", &choice);
    
            switch (choice) {
            case 1:
                printf("Площадь треугольника: %.2f\n", area_triangle(side_a, side_b));
                break;
    
            case 2:
                print_definition_triangle();
                break;
    
            case 3:
                draw_triangle((int)side_a, (int)side_b, draw_symbol);
                break;
    
            case 4:
                printf("Катет a: %d\n", get_cathetus_a());
                printf("Катет b: %d\n", get_cathetus_b());
                printf("Гипотенуза: %.2f\n", sqrt(side_a * side_a + side_b * side_b));
                printf("Площадь: %.2f\n", area_triangle(side_a, side_b));
                break;
    
            case 5:
                printf("Введите новый символ для рисования: ");
                scanf(" %c", &draw_symbol);
                printf("Символ изменен на: %c\n", draw_symbol);
                break;
    
            case 0:
                printf("Выход из программы\n");
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




    
    

