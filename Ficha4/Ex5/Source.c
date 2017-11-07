 int fator(int y) {
    int x = 0;
    
    printf("O fatorial que pretende calcular e: %d\n ", y);

    for (x = 1; y > 1; y = y - 1) {
        x = x * y;
    }
     printf("O fatorial e de %d\n ", x);
     return x;
}

