add_definitions(-DTEST_OUTPUT_PATH="${PROJECT_SOURCE_DIR}/assets")

add_executable(test_assimp test_assimp.cpp)
target_link_libraries(test_assimp PUBLIC assimp)
set_target_properties(test_assimp PROPERTIES FOLDER Test)

add_executable(test_freetype test_freetype.cpp)
target_link_libraries(test_freetype PUBLIC freetype)
set_target_properties(test_freetype PROPERTIES FOLDER Test)

add_executable(test_glad test_glad.cpp)
target_link_libraries(test_glad PUBLIC glfw glad)
set_target_properties(test_glad PROPERTIES FOLDER Test)

add_executable(test_glfw test_glfw.cpp)
target_link_libraries(test_glfw PUBLIC glfw)
set_target_properties(test_glfw PROPERTIES FOLDER Test)

add_executable(test_glm test_glm.cpp)
target_link_libraries(test_glm PUBLIC glm_static)
set_target_properties(test_glm PROPERTIES FOLDER Test)

add_executable(test_imgui test_imgui.cpp)
target_link_libraries(test_imgui PUBLIC imgui glad glfw)
set_target_properties(test_imgui PROPERTIES FOLDER Test)

add_executable(test_imguizmo test_imguizmo.cpp)
target_link_libraries(test_imguizmo PUBLIC imguizmo imgui)
set_target_properties(test_imguizmo PROPERTIES FOLDER Test)

add_executable(test_json test_json.cpp)
target_link_libraries(test_json PUBLIC nlohmann_json)
set_target_properties(test_json PROPERTIES FOLDER Test)

add_executable(test_spdlog test_spdlog.cpp)
target_link_libraries(test_spdlog PUBLIC spdlog)
set_target_properties(test_spdlog PROPERTIES FOLDER Test)

add_executable(test_stb test_stb.cpp)
target_link_libraries(test_stb PUBLIC stb)
set_target_properties(test_stb PROPERTIES FOLDER Test)
