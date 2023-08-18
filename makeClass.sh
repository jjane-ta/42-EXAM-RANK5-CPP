#!/bin/bash

PrintHpp()
{
echo "
#pragma once
#include <iostream>

class $1
{
    public:
        virtual ~$1(void);
    protected:
    private:
        $1(void);
        $1($1 const & other);
        $1 & operator = ($1 const & other);
};" >  $2
}

set -o noclobber # prevent overwrite an existing file

for file in "$@"
    do
        IFS='.' read -ra array <<< $file
        name=${array[0]}
        doc=${array[1]}

        if [[ "$doc" == "hpp" ]]; then
            PrintHpp $name $file
        elif [[ "$doc" == "cpp" ]]; then
            echo "#include" '"'$name.hpp'"' > $file
        fi
    done
