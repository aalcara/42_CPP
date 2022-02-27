#!/bin/bash



function generate(){
	read -e -p "class name: " A_CLASSNAME
	read -e -p "where to save: " A_WHERE

	A_FULLPATH=${A_WHERE}/${A_CLASSNAME}

	echo "$A_CLASSNAME"
	echo "$A_WHERE"

	content=$(cat ClassName.cpp)
	result=${content//"ClassName"/$A_CLASSNAME}
	echo "$result" > ${A_FULLPATH}.cpp

	content=$(cat ClassName.hpp)
	result=${content//"ClassName"/$A_CLASSNAME}
	result=${result//"CLASSNAME"/${A_CLASSNAME^^}}
	echo "$result" > ${A_FULLPATH}.hpp

	# content=$(cat ClassName.hpp)
	# echo "$result" > ${A_FULLPATH}.hpp
	
	
}


generate