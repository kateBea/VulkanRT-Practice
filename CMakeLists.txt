cmake_minimum_required(VERSION 3.22)

project(VulkanRTPractice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(
    nvpro_core2
    GIT_REPOSITORY https://github.com/nvpro-samples/nvpro_core2.git
    GIT_TAG main
    GIT_SHALLOW TRUE
)

set(NVPRO2_ENABLE_DEFAULT OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(nvpro_core2)

add_executable(${PROJECT_NAME} main.cc)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PRIVATE volk::volk )

set_target_properties(${PROJECT_NAME} PROPERTIES
  CXX_STANDARD 20
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS OFF
)
