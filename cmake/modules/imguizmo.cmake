file(GLOB imguizmo_sources CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/ImGuizmo/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ImGuizmo/*.cpp)

add_library(imguizmo STATIC ${imguizmo_sources})
target_include_directories(imguizmo PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/ImGuizmo>)
target_link_libraries(imguizmo PUBLIC imgui)
