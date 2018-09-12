ifconfig | grep ether | rev | cut -d r -f 1 | sed s/' '//g | rev
