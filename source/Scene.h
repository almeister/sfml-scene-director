#pragma once


class Scene
{
public:
    virtual void Update(double deltaT) = 0;
    virtual void Render() = 0;
};

