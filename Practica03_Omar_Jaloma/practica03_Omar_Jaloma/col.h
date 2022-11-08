#ifndef COL_H_INCLUDED
#define COL_H_INCLUDED


class col{
   ndo* hptr;
   ndo* fptr;
   int idx;
public:
    col(int);
    ~col();
    void push(int);
    int pop();
    int frent();
    int siz();
    bool isem();
};


#endif // COL_H_INCLUDED
