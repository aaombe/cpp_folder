#include <iostream>
#include <ctime>
using namespace std;

double ranNumGenerator () {
    srand(time(NULL));
    return rand()%100;
}

int main()
{
    cout << 2;
    return 0;
}
