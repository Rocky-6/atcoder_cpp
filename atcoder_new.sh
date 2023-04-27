#!/bin/bash

cd `dirname $0`
dir=`pwd`

echo $dir

contest=$1


echo "Create contest directory..."
mkdir $contest
cd $contest


echo "Create files."

# cpp file template
template=$(cat <<EOS
#include <bits/stdc++.h>

using namespace std;

int main() {

    return 0;
}
EOS
)

filelist=("a" "b" "c" "d" "e" "f")

for file in ${filelist[@]}
do
    touch ${file}.cpp
    echo "$template" > ${file}.cpp
    echo "created file: ${file}.cpp"
done

echo "Add executable into CMakeLists.txt"

# Write settings into CMakeLists.txt
echo "" >> ./CMakeLists.txt
echo "# Contest $contest" >> ./CMakeLists.txt

for file in ${filelist[@]}
do
    echo "add_executable(${file} ${file}.cpp)" >> ./CMakeLists.txt
done
