#include <iostream>
#include "Header.h"

void Portable::Action()
{
	std::cout << "Портативная акустика стерео. Питание от батарей, от USB Bluetooth Мощность 20 Вт Габариты: 88х170 мм." << std::endl;
}

void Household::Action()
{
	std::cout << "Сушильная машина с тепловым насосом Asko T208H.W" << std::endl;
}

void Laptop::Action()
{
	std::cout << "Ноутбук Rikor Laptop R-N-15-5400U TI-1554" << std::endl;
}

void Phone::Action()
{
	std::cout << "Характеристики Essential Phone (глянцевый черный)" << std::endl;
}

void Vacuum::Action()
{
	std::cout << "Характеристики - вакуумный упаковщик Vacuum Sealer Z Black" << std::endl;
}

void SmartVacuum::Action()
{
	std::cout << "Термос Xiaomi KKF 475ml Or" << std::endl;
}