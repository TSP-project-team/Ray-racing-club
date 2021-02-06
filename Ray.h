//
// Created by arseny on 06.02.2021.
//

#ifndef RAY_RACING_CLUB_RAY_H
#define RAY_RACING_CLUB_RAY_H

#include "CommonMath.h"

class Ray {
public:
    Ray() {}
    Ray(const QPoint3D& origin, const QVector3D& direction)
        : mOrigin(origin), mDirection(direction) {}

    QPoint3D origin() const { return mOrigin; }
    QVector3D direction() const { return mDirection;}

private:
    QPoint3D mOrigin;
    QVector3D mDirection;
};

#endif //RAY_RACING_CLUB_RAY_H
