#include <stdio.h>
#include <time.h>
#include <math.h>

#define SIZE 14
#define ITERATIONS 10

int pos[SIZE];
int used[SIZE];

int down(int line)
{
    int j, k, delta, b;
    long r, s = 0;
    int next;

    if (line == SIZE) {
        r = 1;
    } else {
        next = line + 1;
        for (j = 0; j < SIZE; j++) {
            if (used[j] == 0) {
                b = 0;
                for (k = 0; k < line; k++) {
                    delta = line - k;
                    if (pos[k] + delta == j || pos[k] - delta == j) {
                        b = 1;
                        break;
                    }
                }

                if (b == 0) {
                    pos[line] = j;
                    used[j] = 1;
                    s += down(next);
                    used[j] = 0;
                }
            }
        }
        r = s;
    }

    return r;
}

long iteration()
{
    int i, half;
    long x = 0;

    for (i = 0; i < SIZE; i++) {
        used[i] = 0;
        pos[i] = 0;
    }

    half = SIZE / 2;

    for (i = 0; i < half; i++) {
        pos[0] = i;
        used[i] = 1;
        x += down(1);
        used[i] = 0;
    }

    x = x * 2;

    if (SIZE % 2 == 1) {
        pos[0] = half;
        used[half] = 1;
        x += down(1);
    }

    return x;
}

int main()
{
    int i;
    long x;
    double start, end, dev = 0.0, avg = 0.0, res[ITERATIONS];

    for (i = 0; i < ITERATIONS; i++) {
        start = clock();
        x = iteration();
        end = clock();

        res[i] = (end - start) / CLOCKS_PER_SEC;
        avg += res[i];
    }

    avg = avg / ITERATIONS;

    for (i = 0; i < ITERATIONS; i++) {
        dev += (avg - res[i]) * (avg - res[i]);
    }

    dev /= (ITERATIONS - 1);

    // 68-95-99.7 rule
    dev = 3.0 * sqrt(dev);

    printf("size:\t%d\nresult:\t%ld\ntime:\t%.4lf +/- %.4lf\n", SIZE, x, avg, dev);
    return 0;
}
