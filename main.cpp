#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS helyett N_ELEMENTS kellene
    std::cout << '1-100 ertekek duplazasa' // Hiányzó << std::endl;
    for (int i = 0;) // Hiányos for loop
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // Hiányzó feltétel
    {
        std::cout << "Ertek:" // Hiányzó << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Nem inicializált változó
    for (int i = 0; i < N_ELEMENTS, i++) // ; helyett , van
    {
        atlag += b[i] // Hiányzó ;
    }
    atlag /= N_ELEMENTS; // 0-val való osztás nincs ellenőrizve
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}