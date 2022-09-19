#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //[N_ELEMENTS] Hiányzik az alulvonás
    std::cout << "1-100 ertekek duplazasa" <<std::endl; //"1-100 ertekek duplazasa" std::<<endl; Nincsen pontosvessző a sor végén, rossz aposztóf használata
    for (int i = 0; i < N_ELEMENTS; i++) // hiányzik a léptetés, i < N_ELEMENTS; i++)
    {
        b[i] = (i + 1) * 2; // 0-tól 99-ig dupláz... 1-től 100-ig kéne  b[i] = (i + 1) * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // a ciklus vezérlő hibás, mindig hamisra fut így nem lép be a ciklusba ,for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek:" << b[i] << std::endl;// magát az értéket nem írjuk ki, illetve hiányzik a pontos vessző a sor végéről std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //nincs kezdőértéke a változónak int atlag=0;
    for (int i = 0; i < N_ELEMENTS; i++) // hiányzik egy pontosvessző a sima vessző helyett
    {
        atlag += b[i]; //hiányzik egy pontos vessző a végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

    std::cout << "hlavy nadrazi" << std::endl;
