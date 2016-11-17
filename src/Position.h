#ifndef __POSITION_H__
#define __POSITION_H__

class Position
{
private:
    int x;
    int y;
    
public:
    Position(int x, int y);
    void setx(int x);
    void sety(int y);
    int getx();
    int gety();
};

#endif // __POSITION_H__
