#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    try {
        cout << "selamat belajar di prodi ti UMY" << endl;
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        cout << "pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        cout << "default pengecualian diexsekusi" << endl;
    }

    return 0;
}


