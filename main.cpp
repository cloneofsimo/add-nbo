#include <bits/stdc++.h>
using namespace std;

uint32_t nbo(uint32_t n) {
    return (n << 24) | ((n << 8) & 0x00ff0000) | ((n >> 8) & 0x0000ff00) | (n >> 24);
}

int main(int argc, char* argv[]) {
    FILE* fin1 = fopen(argv[1], "rb");
    FILE* fin2 = fopen(argv[2], "rb");

    uint32_t x, y;
    fread(&x, sizeof(uint32_t), 1, fin1);
    fread(&y, sizeof(uint32_t), 1, fin2);

    x = nbo(x);
    y = nbo(y);
    cout << x << " + " << y << " = " << x + y << endl;
    return 0;
}