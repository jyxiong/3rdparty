add_definitions(-DTEST_PATH="${CMAKE_CURRENT_LIST_DIR}")

add_executable(test_assimp test_assimp.cpp)
target_link_libraries(test_assimp PUBLIC assimp)
set_target_properties(test_assimp PROPERTIES FOLDER Test)

add_executable(test_glfw test_glfw.cpp)
target_link_libraries(test_glfw PUBLIC glfw)
set_target_properties(test_glfw PROPERTIES FOLDER Test)

add_executable(test_glad test_glad.cpp)
target_link_libraries(test_glad PUBLIC glfw glad)
set_target_properties(test_glad PROPERTIES FOLDER Test)

add_executable(test_glm test_glm.cpp)
target_link_libraries(test_glm PUBLIC glm_static)
set_target_properties(test_glm PROPERTIES FOLDER Test)

add_executable(test_imgui test_imgui.cpp)
target_link_libraries(test_imgui PUBLIC imgui glad glfw)
set_target_properties(test_imgui PROPERTIES FOLDER Test)

add_executable(test_stb test_stb.cpp)
target_link_libraries(test_stb PUBLIC stb)
set_target_properties(test_stb PROPERTIES FOLDER Test)
