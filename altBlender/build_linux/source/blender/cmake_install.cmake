# Install script for directory: /home/arad/gitProjects/blender/altBlender/blender/source/blender

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "0")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/datatoc/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/windowmanager/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/blenkernel/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/blenlib/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/bmesh/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/render/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/blenfont/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/blenloader/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/ikplugin/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/gpu/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/nodes/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/modifiers/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/makesdna/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/makesrna/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/compositor/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/openexr/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/dds/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/cineon/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/avi/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/python/cmake_install.cmake")
  INCLUDE("/home/arad/gitProjects/blender/altBlender/build_linux/source/blender/freestyle/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

