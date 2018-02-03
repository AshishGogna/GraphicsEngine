//
//  Mesh.hpp
//  GraphicsEngine
//
//  Created by Ashish Gogna on 03/02/18.
//  Copyright © 2018 Ashish Gogna. All rights reserved.
//

#ifndef Mesh_hpp
#define Mesh_hpp

#include <stdio.h>
#include <GL/glew.h>
#include <iostream>

using namespace std;

class Mesh
{
private:
    GLuint vertexbuffer;

public:
    Mesh();
    
    void Draw();
    GLuint LoadShaders(const char * vertex_file_path,const char * fragment_file_path);
};

#endif /* Mesh_hpp */