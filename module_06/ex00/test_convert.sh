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

	echo -n "TEST 05 "
	result=$(./convert -0..42f)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 06 "
	result=$(./convert 0..42)
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

	echo -n "TEST 09 "
	expected="char: impossible
int: 500
float: 500.0f
double: 500.0"
	result=$(./convert 500)
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

	echo -n "TEST 05 "
	expected="char: 'G'
int: 71
float: 71.0f
double: 71.0"
	result=$(./convert 71.0f)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 06 "
	expected="char: 'G'
int: 71
float: 71.0f
double: 71.0"
	result=$(./convert 71.0)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 07 "
	expected="char: impossible
int: 500
float: 500.0f
double: 500.0"
	result=$(./convert 500.0)
	my_assert_eq "$result" "$expected"



}

function test_overload_inputs
{
	log_header "Test Overloads"
	
	echo -n "TEST 01 "
	expected="Invalid input"
	result=$(./convert 214748364799)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 02 "
	expected="Invalid input"
	result=$(./convert -214748364799)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 03 "
	expected="char: impossible
int: impossible
float: -214748364800.0f
double: -214748364799.0"
	result=$(./convert -214748364799.0)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 04 "
	expected="char: impossible
int: impossible
float: -340282346638528859811704183484516925440.0f
double: -340282346638528859811704183484516925440.0"
	result=$(./convert -340282346638528859811704183484516925440.000000f)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 05 "
	expected="char: impossible
int: impossible
float: 340282346638528859811704183484516925440.0f
double: 340282346638528859811704183484516925440.0"
	result=$(./convert 340282346638528859811704183484516925440.000000f)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 06 "
	expected="Invalid input"
	result=$(./convert 3402823466385288598117041834845169254400.000000f)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 07 "
	expected="char: impossible
int: impossible
float: inff
double: 3402823466385288598117041834845169254400.0"
	result=$(./convert 3402823466385288598117041834845169254400.000000)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 08 "
	expected="char: impossible
int: impossible
float: inff
double: 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0"
	result=$(./convert 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 09 "
	expected="char: impossible
int: impossible
float: -inff
double: -179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0"
	result=$(./convert -179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 10 "
	expected="char: impossible
int: impossible
float: -inff
double: -inf"
	result=$(./convert -1797693134862315708145274237317043567980705675258449965989174768031572607800285387605895586327668781715404589535143824642343213268894641827684675467035375169860499105765512820762454900903893289440758685084551339423045832369032229481658085593321233482747978262041447231687381771809192998812504040261841248583680.000000)
	my_assert_eq "$result" "$expected"

	echo -n "TEST 11 "
	expected="char: impossible
int: impossible
float: inff
double: inf"
	result=$(./convert 1797693134862315708145274237317043567980705675258449965989174768031572607800285387605895586327668781715404589535143824642343213268894641827684675467035375169860499105765512820762454900903893289440758685084551339423045832369032229481658085593321233482747978262041447231687381771809192998812504040261841248583680.000000)
	my_assert_eq "$result" "$expected"


}


make
test_wrong_args
test_invalid_inputs
test_char_inputs
test_int_inputs
test_pseudoliteral
test_floats_doubles_inputs
test_overload_inputs
make fclean
