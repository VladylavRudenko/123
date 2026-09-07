#include <stdio.h>

long long get_min_steps(long long x, long long y) {
    long long distance = y - x;
    
    if (distance == 0) return 0;

    long long steps = 0;
    long long step_length = 1; 
    
    while (distance > 0) {
        distance -= step_length;
        steps++;
        
        if (distance <= 0) break;
        
        distance -= step_length;
        steps++;
        
        step_length++;
    }
    
    return steps;
}

int main() {
    long long x, y;
    
    printf("Введіть x та y: ");
    if (scanf("%lld %lld", &x, &y) != 2) return 1;
    
    if (x <= y) {
        printf("Мінімальна кількість кроків: %lld\n", get_min_steps(x, y));
    } else {
        printf("Помилка: x має бути меншим або дорівнювати y\n");
    }
    
    return 0;
}
