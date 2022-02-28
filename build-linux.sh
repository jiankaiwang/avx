#!/bin/bash

CRTPATH=$(pwd)
EXE=avx
BUILD=$CRTPATH/build

# GCC_COMPILER=aarch64-linux-gnu-

if [[ -d $BUILD ]]; then
  rm -rf $BUILD
fi

mkdir -p $BUILD
pushd $BUILD

cmake ..\
  -DCMAKE_CXX_STANDARD=11 \
  -DCMAKE_C_COMPILER=${GCC_COMPILER}gcc \
  -DCMAKE_CXX_COMPILER=${GCC_COMPILER}g++
cmake --build .

chmod +x $BUILD/$EXE
$BUILD/$EXE
