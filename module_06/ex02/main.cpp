/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:24:19 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/25 19:51:38 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

class Base { public: virtual ~Base(void){}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	int value;
	Base *base_inst;

	value = rand() % 3;
	if(value == 0)
	{
		base_inst = new A();
		std::cout << "A class generated" << std::endl;
	}
	else if(value == 1)
	{
		base_inst = new B();
		std::cout << "B class generated" << std::endl;
	}
	else
	{
		base_inst = new C();
		std::cout << "C class generated" << std::endl;
	}
	return (base_inst);
}

void identify(Base* p)
{
	std::cout << "Identifier by pointer: ";
	A* a_inst = dynamic_cast<A *>(p);
	B* b_inst = dynamic_cast<B *>(p);
	C* c_inst = dynamic_cast<C *>(p);

	if(a_inst)
		std::cout << "A" << std::endl;
	else if(b_inst)
		std::cout << "B" << std::endl;
	else if(c_inst)
		std::cout << "C" << std::endl;
	return ;
}

void identify(Base& p)
{
	std::cout << "Identifier by reference: ";
	try{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch(const std::exception& e) {}
	try{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch(const std::exception& e) {}
	try{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch(const std::exception& e) {}

	return ;
}

int	main(void)
{
	Base *basePtr;

	for(int i = 0; i < 10; i++)
	{
		std::cout << "-----  Loop: " << i + 1 << "  -----" << std::endl;
		basePtr = generate();
		identify(basePtr);
		identify(*basePtr);
		delete basePtr;
	}
	return (0);
}
