#include <iostream>
using namespace std;

int tickets()
{
    int fy = 0;
    int x, z, y;
    char builet[6];
    for (x = 0; x <= 999999; x++) {
        for ( y = x, z = 0; z < 6; z++, y /= 10) {
            builet[z] = y % 10;
        }
        if (builet[0]+builet[1]+builet[2] == builet[3]+builet[4]+builet[5]) {
            ++fy;
        }
    }
    return fy;
}

int main()
{
    setlocale(0, "");
    int y = tickets();
    cout << " Amount of lucky tickets is " << y << endl;
    return 0;
}
