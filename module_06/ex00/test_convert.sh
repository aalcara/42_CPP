#!/usr/bin/env bash

source './assert.sh'

WRONG_NUM="Wrong number of arguments.
Usage: ./convert [variable to convert]."

INVALID_INPUT="Invalid input"

function my_assert_eq(){
	assert_eq "$1" "$2" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function test_wrong_args(){
	log_header "Whrong number of arguments:"
	expected=$WRONG_NUM
	
	echo -n "TEST 01 "
	result=$(./convert)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 02 "
	result=$(./convert 1 2)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 03 "
	result=$(./convert aaaaaaaaaaaaaaaa aaaaaaa)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 04 "
	result=$(./convert 12312 123123 123 123 123 123 123 12 123 123 123 12 31 2)
	my_assert_eq "$result" "$expected"
}

test_invalid_inputs(){
	log_header "${INVALID_INPUT}:"
	expected=$INVALID_INPUT

	echo -n "TEST 01 "
	result=$(./convert "aaaaaaa aaaaaaaaa aaaaaaa")
	my_assert_eq "$result" "$expected"

	echo -n "TEST 02 "
	result=$(./convert aaaaaaa)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 03 "
	result=$(./convert -aa)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 04 "
	result=$(./convert -0.42ff)
	my_assert_eq "$result" "$expected"
}

test_valids_inputs(){
	log_header "Valids Inputs:"

	echo -n "TEST 01 "
	expected="char: '*'
int: 42
float: 42.0f
double: 42.0"
	result=$(./convert "*")
	my_assert_eq "$result" "$expected"
}

make
test_wrong_args
test_invalid_inputs
test_valids_inputs
make fclean
