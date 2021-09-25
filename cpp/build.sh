#!/usr/bin/env bash

set -e

if [ $# -gt 0 ]
then
  g++ -pipe -O2 -std=c++11 -Wno-unused-result -Wall -Wextra -Waggregate-return -Wcast-align -Wcast-qual -Wdisabled-optimization -Wdiv-by-zero -Wendif-labels -Wformat-extra-args -Wformat-nonliteral -Wformat-security -Wformat-y2k -Wimplicit -Wimport -Winit-self -Winline -Winvalid-pch -Werror=missing-braces -Wmissing-declarations -Wno-missing-format-attribute -Wmissing-include-dirs -Wmultichar -Wpacked -Wpointer-arith -Wreturn-type -Wsequence-point -Wsign-compare -Wstrict-aliasing -Wstrict-aliasing=2 -Wswitch -Wswitch-default -Werror=undef -Wno-unused -Wvariadic-macros -Wwrite-strings -Wc++-compat -Werror=declaration-after-statement -Werror=implicit-function-declaration -Wmissing-prototypes -Werror=nested-externs -Werror=old-style-definition -Werror=strict-prototypes -o solveit $1
fi
