
#include <iostream>
#include <cstring>


int main()
{
    setlocale(LC_ALL, "ru");

    const char* a = "Лондон из зе кэпитал оф греат бритаин";
    int e = 0;
    for (int i = 0; i < std::strlen(a); ++i) {
        if (a[i] == 'о') {
            e += 1;
        }
        else if (a[i] == ' ') {
            break;
        }
    }
    std::cout << e << std::endl;
}

