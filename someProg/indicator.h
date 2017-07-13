#ifndef INDICATOR_H
#define INDICATOR_H


class Indicator
{
public:
    Indicator();
    virtual void setValue() = 0;
    virtual void draw() = 0;
};

#endif // INDICATOR_H
