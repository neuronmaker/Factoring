#!/bin/bash
#script which will spit out an executable file using the G++ compiler
filename="fctr" # short name for the executable file
#uncomment the following line if using this on a Windows system
#filename="$filename.exe" #append a filename extension that Windows systems like to see

#Using -O3 optimizations, remove -O3 option if there are issues on the target system
g++ -O3 main.cpp -o $filename

#The place I usually prefer to use for this program
destination="/usr/local/sbin"

#The place I see some other users using instead
#destination="~/.local/bin"
#The above apply to UNIX-like systems (UNIX, Linux, etc. Basically everything other than Windows)

#Uncomment the following line to "install" this program by copying it to the location chosen above.
#cp "$filename" "$destination/$filename"
