#include <iostream>
#include "Particle.h"

Vec3 Particle::getPosition() const{
    return m_position;
}

void Particle::setPosition(const Vec3 &_pos){
    m_position=_pos;
}

void Particle::setLife(int _life){
    m_life=_life;
}

int Particle::getLife() const{
    return m_life;
}

void Particle::setColour(const Vec3 &_colour){
    m_colour=_colour;
}

Vec3 Particle::getColour() const{
    return m_colour;
}

void Particle::setDirection(const Vec3 &_dir)
{
    m_dir=_dir;
}

void Particle::update()
{
    m_position+=m_dir;
}

void Particle::render() const
{
    std::cout << m_position.x << ' ' << m_position.y << ' ' << m_position.z << '\n';
};
