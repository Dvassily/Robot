#ifndef __POSITION_H__
#define __POSITION_H__

class Position
{
private:
    int x;
    int y;
    
public:
    Position();
    Position(int x, int y);
    void setx(int x);
    void sety(int y);
    int getx() const;
    int gety() const;
};

#endif // __POSITION_H__
