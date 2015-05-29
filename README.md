# queens-microbench

Solution of the [n-queens problem](https://en.wikipedia.org/wiki/Eight_queens_puzzle)

## Results for 14 queens

| CPU                        | OS             | Compiler    | time (sec)              |
| -------------------------- | -------------- | ----------- | -----------------------:|
| Intel Core i5-3427U 1.8GHz | Ubuntu 14.04.2 | gcc 4.8.2   |  2.7090 &plusmn; 0.0094 |
| -                          | -              | clang 3.5.0 |  2.8972 &plusmn; 0.0106 |
| Intel Core i5-4200U 1.6GHz | Ubuntu 14.04.2 | gcc 4.8.2   |  2.9943 &plusmn; 0.0105 |
| Intel Celeron M 900MHz     | FreeBSD 10.1   | clang 3.4.1 | 11.3338 &plusmn; 0.2459 |
