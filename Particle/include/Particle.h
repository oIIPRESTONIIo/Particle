#ifndef PARTICLE_H_
#define PARTICLE_H_
#include "Vec3.h"

class Particle
{
public :
    Particle()=default;
    ~Particle()=default;
    Particle(const Particle &)=default;
    Particle(Particle &&)=default;
    Particle & operator =(const Particle &)=default;
    Particle & operator =(Particle &&)=default;

    Vec3 getPosition() const;
    void setPosition(const Vec3 &_pos);
    int getLife() const;
    void setLife(int _life);
    void update();
    void render() const;

    Vec3 getColour() const;
    void setColour(const Vec3 &_colour);

    void setDirection(const Vec3 &_dir);

private :
    Vec3 m_position;
    Vec3 m_dir;
    int m_life=0;
    Vec3 m_colour={0.8f,0.8f,0.8f};
};

#endif
