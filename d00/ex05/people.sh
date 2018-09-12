#!/bin/sh
ldapsearch uid="z*" | grep cn: | sort -fr | sed 's/cn: //g'
