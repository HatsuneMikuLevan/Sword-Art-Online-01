int a = 32, b = -1, c;
c = a - b * 4;  // c = 36
if (a > b)      // true
    c = 6 * b - 4 * a;  // c = -6 - 128 = -134
else
    c = a - b;
