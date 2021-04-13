#pragma once
#include<iostream>
#include<vector>
#include"Wierzcholek.h"
class Figura
{
    public:
    Figura(std::string name);
    Figura & operator+=(Wierzcholek buffer);
    bool operator==(Figura & buffer);
    Figura & dodajW(Wierzcholek buffer);
    std::string nazwa()const;
    const double pole()const;
    std::vector<Wierzcholek> getApex()const;
    private:
    std::string _name;
    std::vector<Wierzcholek> _apex;
};