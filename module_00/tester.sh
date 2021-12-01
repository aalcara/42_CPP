#!/usr/bin/env bash

MOD1_DIR='./'

source './assert.sh'

function test_00_01(){
	echo -n "test01 ... "
	result=$(${MOD1_DIR}ex00/megaphone Ola)
	expected="OLA"
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi

}

function test_00_02(){
	echo -n "test02 ... "
	result=$(${MOD1_DIR}ex00/megaphone Hello)
	expected="HELLO"
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function test_00_03(){
	echo -n "test03 ... "
	result=$(${MOD1_DIR}ex00/megaphone "shhhhh... I think the students are asleep...")
	expected="SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
	#echo $result
	#echo $expected
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function test_00_04(){
	echo -n "test04 ... "
	result=$(${MOD1_DIR}ex00/megaphone Damnit " ! " "Sorry students, I thought this thing was off.")
	expected="DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
	#echo $result
	#echo $expected
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function test_00_05(){
	echo -n "test05 ... "
	result=$(${MOD1_DIR}ex00/megaphone)
	expected="* LOUD AND UNBEARABLE FEEDBACK NOISE *"
	#echo $result
	#echo $expected
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function make_ex00(){
	echo "creating files ..."
	make re -C ${MOD1_DIR}ex00 --no-print-directory
	echo "... done"
	echo
}

function test_ex00(){
	log_header "ex00"
	make_ex00
	test_00_01
	test_00_02
	test_00_03
	test_00_04
	test_00_05
}

function make_ex02(){
	echo "creating files ..."
	make re -C ${MOD1_DIR}ex02 --no-print-directory
	echo "... done"
	echo
}

function test_02_01(){
	echo -n "test01 ... "
	result=$(${MOD1_DIR}ex02/account | cut -d ' ' -f2)
	expected=$(cat correct.log | cut -d ' ' -f2)
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function test_ex02(){
	log_header "ex02"
	make_ex02
	test_02_01
}

test_ex00
test_ex02



