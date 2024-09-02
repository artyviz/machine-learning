#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float result = 0.0f;

float train[][2] = {
    {0,0},{1,2},{2,4},{3,6},{4,8},
};

#define train_count (sizeof(train)/sizeof(train[0]))

float rand_float(void) {
    return (float)rand() / (float)RAND_MAX;
}

float cost(float w, float b) {
    float total_cost = 0.0f;
    for (size_t i = 0; i < train_count; ++i) {
        float x = train[i][0];
        float y = x * w + b;
        float d = y - train[i][1];
        total_cost += d * d;
    }
    return total_cost / train_count;
}

int main() {
    srand(69);
    float w = rand_float() * 10.0f;
    float b = rand_float() * 5.0f;

    float eps = 1e-3;
    float rate = 1e-3;

    printf("Initial cost: %f\n", cost(w, b));

    for (size_t i = 0; i < 100; ++i) {
        float c = cost(w, b);
        float dw = (cost(w + eps, b) - c) / eps;
        float db = (cost(w, b + eps) - c) / eps;
        w -= rate * dw;
        b -= rate * db;
        printf("Iteration %zu: cost = %f, w = %f, b = %f\n", i, c, w, b);
    }

    printf("--------------------\n");
    printf("Final weights: w = %f, b = %f\n", w, b);

    return 0;
}
