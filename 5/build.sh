#!/bin/bash

cd ./lib/my/
gcc -c *.c
ar -r libmy.a *.o
ranlib libmy.a