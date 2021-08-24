#pragma once

class Primitive
{
    public:
    Primitive(const double value = 0);
    void Set(const double val);
    virtual double Print()const;
    double _val;

};