#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    unsigned int licznik_zaglowcow = 0;
    unsigned int przewieziony_towar = 0;

    Stocznia stocznia1{};

    while (przewieziony_towar < towar) {
    
        Statek* statek1 = stocznia1();
        if (dynamic_cast< Zaglowiec* >(statek1) != nullptr) 
        {
            licznik_zaglowcow++;
        }
        przewieziony_towar += statek1->transportuj();

        delete statek1;
    }

    return licznik_zaglowcow;
}