//
//  CZCube.hpp
//  Application3D
//
//  Created by CharlyZhang on 16/6/29.
//  Copyright © 2016年 CharlyZhang. All rights reserved.
//

#ifndef CZCube_hpp
#define CZCube_hpp

#include "CZShape.h"
#include "CZBasic.h"

#include <vector>

class CZCube : public CZShape
{
public:
    CZCube();
    ~CZCube();
    
    bool draw(CZShader *pShader, CZMat4 &viewProjMat);
    
    void create(CZPoint3D &origin, float width, float length, float height);
    void fold(long time);
    void unFold(long time);
    void finished();
private:
    static unsigned char indices[];
    float kd[6][4];
};

#endif /* CZCube_hpp */
