#ifndef PIL_H_INCLUDED
#define PIL_H_INCLUDED

#include "ndo.h"


class pil{
    ndo* ptr;
    int idx;
public:
    pil(int);
    ~pil();
    void push(int);
    int pop();
    int frent();
    int siz();
    bool isem();
};

#endif // PIL_H_INCLUDED
