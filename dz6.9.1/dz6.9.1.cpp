#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Electro* backet[6];

    backet[0] = new Portable();
    backet[1] = new Household();
    backet[2] = new Laptop();
    backet[3] = new Phone();
    backet[4] = new Vacuum();
    backet[5] = new SmartVacuum();


    std::cout << "Выберите продукт : 1 - Portable, 2 - Household, 3 - Laptop, 4 - Phone, 5 - Vacuum, 6 - SmartVacuum, 0 чтобы выйти" << std::endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        backet[0]->Action();
        break;

    case 2:
        backet[1]->Action();
        break;

    case 3:
        backet[2]->Action();
        break;

    case 4:
        backet[3]->Action();
        break;

    case 5:
        backet[4]->Action();
        break;

    case 6:
        backet[5]->Action();
        break;

    case 0:
        break;

    default:
        cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти" << endl;
        break;
    }
  /* !!!!!!!!! Если делать как в примере на сайте то вылетает ошибка, по этой причине закоментил делит
  
  * 
  * _CRT_SECURITYCRITICAL_ATTRIBUTE
void __CRTDECL operator delete(void* const block) noexcept
{
    #ifdef _DEBUG
    _free_dbg(block, _UNKNOWN_BLOCK);
    #else
    free(block);
    #endif
}
    delete backet[0];
    delete backet[1];
    delete backet[2];
    delete backet[3];
    delete backet[4];
    delete backet[5];*/

    return 0;
}

