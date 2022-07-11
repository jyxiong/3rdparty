#include <iostream>
#include <string>
#include "assimp/Importer.hpp"
#include "assimp/Exporter.hpp"
#include "assimp/scene.h"
#include "assimp/postprocess.h"

int main() {

#ifndef TEST_OUTPUT_PATH
    std::cout << "Failed to add definitions of test path!" << std::endl;
    return -1;
#endif
    std::string outputPath = TEST_OUTPUT_PATH;

    // Create an instance of the Importer class
    Assimp::Importer importer;

    // And have it read the given file with some example postprocessing
    // Usually - if speed is not the most important aspect for you - you'll
    // probably to request more postprocessing than we do in this example.
    const aiScene *scene = importer.ReadFile(outputPath + "/spider.obj",
                                             aiProcess_CalcTangentSpace |
                                             aiProcess_Triangulate |
                                             aiProcess_JoinIdenticalVertices |
                                             aiProcess_SortByPType);

    // check for errors
    if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode) // if is Not Zero
    {
        std::cout << "ERROR::ASSIMP:: " << importer.GetErrorString() << std::endl;
        return -1;
    }

    Assimp::Exporter exporter;
    exporter.Export(scene, "obj", outputPath + "/spider_out.obj");

    return 0;
}