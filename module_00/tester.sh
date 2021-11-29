#!/usr/bin/env bash

MOD1_DIR='./'

source './assert.sh'

function test_00_01(){
	result=$(${MOD1_DIR}ex00/megaphone Ola)
	expected="OLA"
	echo -n "test01 ... "
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi

}

function test_00_02(){
	result=$(${MOD1_DIR}ex00/megaphone Hello)
	expected="HELLO"
	echo -n "test02 ... "
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function test_00_03(){
	result=$(${MOD1_DIR}ex00/megaphone "shhhhh... I think the students are asleep...")
	expected="SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
	echo -n "test03 ... "
	#echo $result
	#echo $expected
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function test_00_04(){
	result=$(${MOD1_DIR}ex00/megaphone Damnit " ! " "Sorry students, I thought this thing was off.")
	expected="DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
	echo -n "test04 ... "
	#echo $result
	#echo $expected
	assert_eq "$result" "$expected" "not equivalent!"
	if [ "$?" == 0 ]; then
		log_success "sucess"
	fi
}

function test_00_05(){
	result=$(${MOD1_DIR}ex00/megaphone)
	expected="* LOUD AND UNBEARABLE FEEDBACK NOISE *"
	echo -n "test05 ... "
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


test_ex00



