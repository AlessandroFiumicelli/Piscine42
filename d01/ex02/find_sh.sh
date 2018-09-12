#!/bin/sh
find . -type f -name "*.sh" | rev | cut -d \/ -f 1 | sed "s/hs\.//" | rev
