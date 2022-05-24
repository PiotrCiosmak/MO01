#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
#define DOUBLE
#ifdef DOUBLE
    double epsylon_maszynowy{1};

#elif defined(FLOAT)
    float epsylon_maszynowy{1};

#endif
    int liczba_bitow_mantysy{};

    while (1 + epsylon_maszynowy > 1)
    {
        epsylon_maszynowy /= 2;
        liczba_bitow_mantysy++;
    }
    cout << "Liczba bitow mantysy: " << std::setprecision(100) << liczba_bitow_mantysy - 1 << endl;
    cout << "Epsylon maszynowy: " << 2 * epsylon_maszynowy << endl;
}