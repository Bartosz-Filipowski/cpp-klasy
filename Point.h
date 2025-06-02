//
// Created by student on 02.06.2025.
//

#ifndef UNTITLED8_POINT_H
#define UNTITLED8_POINT_H

#endif //UNTITLED8_POINT_H
#pragma once
#include <string>

class Point
{
private:
    static int m_numberOfPoints;
    std::string m_name;
    double m_x;
    double m_y;
public:
    static int numberOfPoints();
    Point();
    Point(const std::string& name, double x = 0, double y = 0);
    ~Point();
    void setName(const std::string& name);
    void setXY(double x, double y);
    double getX();
    double getY();
    void show() const;
    double distance(const Point& p) const;
    const Point & distant(const Point& p) const;
};