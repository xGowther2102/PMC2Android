cmake_minimum_required(VERSION 3.22.1)

project(mc2rt CXX)

set(MC2_PC_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../../../../mc2-pc-android")

if(NOT EXISTS "${MC2_PC_ROOT}/recomp/obj_arm64/libmc2pc.a")
    message(FATAL_ERROR
        "Falta libmc2pc.a. Ejecute primero: python mc2-pc-android/scripts/build_arm64.py")
endif()

add_library(mc2pc STATIC IMPORTED)
set_target_properties(mc2pc PROPERTIES
        IMPORTED_LOCATION "${MC2_PC_ROOT}/recomp/obj_arm64/libmc2pc.a")

set(FFMPEG_LIB_DIR "${MC2_PC_ROOT}/third_party/ffmpeg_arm64/lib")
foreach(fflib IN ITEMS avformat avcodec swscale swresample avutil)
    add_library(${fflib} STATIC IMPORTED)
    set_target_properties(${fflib} PROPERTIES
            IMPORTED_LOCATION "${FFMPEG_LIB_DIR}/lib${fflib}.a")
endforeach()

add_library(mc2rt SHARED mc2_runtime.cpp)

target_include_directories(mc2rt PRIVATE
        "${MC2_PC_ROOT}/src"
        "${MC2_PC_ROOT}/recomp/gen")

target_compile_options(mc2rt PRIVATE -Wall -Wextra -Wno-unused-parameter)

find_library(log-lib log)
find_library(android-lib android)
find_library(EGL-lib EGL)
find_library(GLES-lib GLESv2)
find_library(m-lib m)
find_library(z-lib z)
find_library(aaudio-lib aaudio)
find_library(mediandk-lib mediandk)

target_link_libraries(mc2rt
        mc2pc
        avformat
        avcodec
        swscale
        swresample
        avutil
        ${z-lib}
        ${log-lib}
        ${android-lib}
        ${EGL-lib}
        ${GLES-lib}
        ${m-lib}
        ${aaudio-lib}
        ${mediandk-lib})
