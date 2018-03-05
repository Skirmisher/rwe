#ifndef RWE_GLMESH_H
#define RWE_GLMESH_H

#include <rwe/VaoHandle.h>
#include <rwe/VboHandle.h>

namespace rwe
{
    struct GlMesh
    {
        VaoHandle vao;
        VboHandle vbo;
        unsigned int vertexCount;

        GlMesh(VaoHandle&& vao, VboHandle&& vbo, unsigned int vertexCount);
    };
}

#endif
