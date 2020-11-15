# Queens-microbench

Solution of the [n-queens problem](https://en.wikipedia.org/wiki/Eight_queens_puzzle)

## Installation

```shell
git clone https://github.com/morontt/queens-microbench.git
cd queens-microbench
make

./bench # Run benchmark :)
```

### Results for 14 queens

| CPU                           | OS              | Compiler       | time (sec)              |
| ----------------------------- | --------------- |:--------------:| -----------------------:|
| AMD Ryzen 7 2700X      3.7GHz | Ubuntu 18.04.2  | gcc 7.4.0      |  1.9669 &plusmn; 0.0284 |
| Intel Core i7-4770     3.4GHz | Debian 7.0      | gcc 4.7.2      |  1.9880 &plusmn; 0.0190 |
| Intel Core i5-3570K    3.4GHz | Ubuntu 12.04.5  | gcc 4.6.3      |  2.0410 &plusmn; 0.0091 |
| Intel Core i3-6100     3.7GHz | Mint 18 Sarah   | gcc 5.4.0      |  2.0797 &plusmn; 0.0032 |
| Intel Core i7-8550U    1.8GHz | Ubuntu 18.04.4  | gcc 7.5.0      |  2.1298 &plusmn; 0.1326 |
| Intel Core i3-3220     3.3GHz | Ubuntu 18.04.3  | gcc 7.4.0      |  2.3500 &plusmn; 0.0074 |
| Intel Core i3-2100     3.1GHz | Ubuntu 12.04.4  | gcc 4.6.3      |  2.4830 &plusmn; 0.0177 |
| Intel Core i5-3210M    2.5GHz | Ubuntu 14.04.3  | gcc 4.8.4      |  2.5000 &plusmn; 0.0102 |
| Intel Core i5-3427U    1.8GHz | Ubuntu 14.04.2  | gcc 4.8.2      |  2.7090 &plusmn; 0.0094 |
| AMD Phenom II X6 1100T 3.3GHz | Ubuntu 16.04.2  | gcc 5.4.0      |  2.7933 &plusmn; 0.1410 |
| Intel Core i7-3615QM   2.3GHz | MacOS X 10.10.3 | clang 602.0.53 |  2.7965 &plusmn; 0.5371 |
| Intel Core i5-3427U    1.8GHz | Ubuntu 14.04.2  | clang 3.5.0    |  2.8972 &plusmn; 0.0106 |
| Intel Core i5-2415M    2.3GHz | MacOS X 10.9.5  | clang 600.0.57 |  2.9634 &plusmn; 0.1005 |
| Intel Core i5-4200U    1.6GHz | Ubuntu 14.04.2  | gcc 4.8.2      |  2.9943 &plusmn; 0.0105 |
| Intel Core i3-3110M    2.4GHz | Ubuntu 14.04.2  | gcc 4.8.2      |  3.1878 &plusmn; 0.1100 |
| Intel Pentium 2020M    2.4GHz | Ubuntu 14.04.4  | gcc 4.8.4      |  3.2138 &plusmn; 0.3719 |
| AMD A10-5745M          2.1GHz | Ubuntu 14.04.3  | gcc 4.8.4      |  4.5932 &plusmn; 0.0083 |
| AMD Athlon 64 X2 4600+ 2.4GHz | Ubuntu 14.04.6  | gcc 4.8.4      |  4.7207 &plusmn; 0.0006 |
| AMD Phenom X3 8450     2.1GHz | Ubuntu 14.04.3  | gcc 4.8.4      |  4.9440 &plusmn; 0.0147 |
| Intel C2D E4500        2.2GHz | Ubuntu 14.04.2  | gcc 4.8.2      |  7.2959 &plusmn; 0.6989 |
| Intel Celeron 220      1.2GHz | Ubuntu 14.04.2  | gcc 4.8.2      |  8.4001 &plusmn; 0.0015 |
| Intel Celeron M        900MHz | FreeBSD 10.1    | clang 3.4.1    | 11.3338 &plusmn; 0.2459 |
| Broadcom BCM2836       900MHz | Raspbian Jessie | gcc 4.9.2      | 20.9343 &plusmn; 5.2217 |
| Broadcom BCM2835       700MHz | Raspbian Wheezy | gcc 4.6.3      | 30.2304 &plusmn; 0.0126 |
