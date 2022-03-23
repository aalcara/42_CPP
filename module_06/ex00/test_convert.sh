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

test_char_inputs(){
	log_header "Char Inputs:"

	echo -n "TEST 01 "
	expected="char: '*'
int: 42
float: 42.0f
double: 42.0"
	result=$(./convert "*")
	my_assert_eq "$result" "$expected"

	echo -n "TEST 02 "
	expected="char: 'U'
int: 85
float: 85.0f
double: 85.0"
	result=$(./convert U)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 03 "
	expected="char: ' '
int: 32
float: 32.0f
double: 32.0"
	result=$(./convert " ")
	my_assert_eq "$result" "$expected"

	echo -n "TEST 04 "
	expected="char: '~'
int: 126
float: 126.0f
double: 126.0"
	result=$(./convert "~")
	my_assert_eq "$result" "$expected"
}

test_int_inputs(){
	log_header "INT Inputs:"

	echo -n "TEST 01 "
	expected="char: Non displayable
int: 0
float: 0.0f
double: 0.0"
	result=$(./convert 0)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 02 "
	expected="char: Non displayable
int: 31
float: 31.0f
double: 31.0"
	result=$(./convert 31)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 03 "
	expected="char: ' '
int: 32
float: 32.0f
double: 32.0"
	result=$(./convert 32)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 04 "
	expected="char: '~'
int: 126
float: 126.0f
double: 126.0"
	result=$(./convert 126)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 05 "
	expected="char: Non displayable
int: 127
float: 127.0f
double: 127.0"
	result=$(./convert 127)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 06 "
	expected="char: Non displayable
int: 0
float: 0.0f
double: 0.0"
	result=$(./convert -0)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 07 "
	expected="char: impossible
int: -127
float: -127.0f
double: -127.0"
	result=$(./convert -127)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 08 "
	expected="char: impossible
int: -2147483648
float: -2147483648.0f
double: -2147483648.0"
	result=$(./convert -2147483648)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 09 "
	expected="char: impossible
int: 2147483647
float: 2147483648.0f
double: 2147483647.0"
	result=$(./convert 2147483647)
	my_assert_eq "$result" "$expected"
}

function test_pseudoliteral
{
	log_header "PSEUDO LITERALS:"
	
	echo -n "TEST 01 "
	expected="char: impossible
int: impossible
float: -inff
double: -inf"
	result=$(./convert -inf)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 02 "
	expected="char: impossible
int: impossible
float: nanf
double: nan"
	result=$(./convert nan)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 03 "
	expected="char: impossible
int: impossible
float: inff
double: inf"
	result=$(./convert +inf)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 04 "
	expected="char: impossible
int: impossible
float: -inff
double: -inf"
	result=$(./convert -inff)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 05 "
	expected="char: impossible
int: impossible
float: inff
double: inf"
	result=$(./convert inff)
	my_assert_eq "$result" "$expected"
}

function test_int_overload_inputs
{
	log_header "INT Overloads"
	
	echo -n "TEST 01 "
	expected="Invalid input"
	result=$(./convert 214748364799)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 02 "
	expected="Invalid input"
	result=$(./convert -214748364799)
	my_assert_eq "$result" "$expected"
}

function test_floats_doubles_inputs
{
	log_header "FLOAT and DOUBLE inputs"
	
	echo -n "TEST 01 "
	expected="char: Non displayable
int: 1
float: 1.0f
double: 1.0"
	result=$(./convert 1.0f)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 02 "
	expected="char: Non displayable
int: 1
float: 1.0f
double: 1.0"
	result=$(./convert 1.0)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 03 "
	expected="char: impossible
int: -71
float: -71.0f
double: -71.0"
	result=$(./convert -71.0)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 04 "
	expected="char: impossible
int: -71
float: -71.0f
double: -71.0"
	result=$(./convert -71.0f)
	my_assert_eq "$result" "$expected"
}

make
test_wrong_args
test_invalid_inputs
test_char_inputs
test_int_inputs
test_pseudoliteral
test_int_overload_inputs
test_floats_doubles_inputs
make fclean
