#!/bin/bash
find . -type f  -name '*.sh' |rev| cut -d '/' -f 1 | sed 's/h//'| sed 's/s//'| sed 's/.//' |rev