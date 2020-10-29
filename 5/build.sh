#!/bin/bash

gcc -c *.c
ar -r libmy.a *.o
ranlib libmy.a