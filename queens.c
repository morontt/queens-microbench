#include <stdio.h>
#include <time.h>

#define SIZE 8

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
                    s = s + down(next);
                    used[j] = 0;
                }
            }
        }
        r = s;
    }

    return r;
}

int main()
{
    int i, half;
    long x = 0;
    double start, end;

    start = clock();

    for (i = 0; i < SIZE; i++) {
        used[i] = 0;
        pos[i] = 0;
    }

    half = SIZE / 2;

    for (i = 0; i < half; i++) {
        pos[0] = i;
        used[i] = 1;
        x = x + down(1);
        used[i] = 0;
    }

    x = x * 2;

    if (SIZE % 2 == 1) {
        pos[0] = half;
        used[half] = 1;
        x = x + down(1);
    }

    end = clock();

    printf("size:\t%d\nresult:\t%ld\ntime:\t%.4lf\n", SIZE, x, (end - start) / CLOCKS_PER_SEC);
    return 0;
}
