CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

project(avx VERSION 0.1.0)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mavx -mavx2 -std=c++11")

# set (LIBUSB_PATH /opt/homebrew/Cellar/libusb/1.0.24/lib/libusb-1.0.dylib)
# set (LIBUSB_PATH ${CMAKE_SOURCE_DIR}/libusb-1.0.24/libusb/.libs/libusb-1.0.dylib)

# set (LIBUSB_INCLUDE_PATH /opt/homebrew/Cellar/libusb/1.0.24/include/libusb-1.0)
# set (LIBUSB_INCLUDE_PATH ${CMAKE_SOURCE_DIR}/libusb-1.0.24/libusb)

add_library(
  mmth SHARED
  mmth.hpp
  mmth.cpp
)

add_executable(avx 
  main.cpp
)

# target_include_directories(main PUBLIC
#   ${LIBUSB_INCLUDE_PATH}
# )

target_link_libraries(avx PUBLIC
  mmth
  # ${LIBUSB_PATH}
)
