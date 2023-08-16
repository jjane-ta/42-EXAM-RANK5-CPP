#!/bin/bash

IFS='.' read -ra array <<< $1
old=${array[0]}
IFS='.' read -ra array <<< $2
new=${array[0]}

cp $old.cpp $new.cpp
cp $old.hpp $new.hpp


sed -i "s/$old/$new/g" $new.cpp
sed -i "s/$old/$new/g" $new.hpp
