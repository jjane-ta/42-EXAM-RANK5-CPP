#!/bin/bash

cp $1.cpp $2.cpp
cp $1.hpp $2.hpp

sed -i "s/$1/$2/g" $2.cpp
sed -i "s/$1/$2/g" $2.hpp
