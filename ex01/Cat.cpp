/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:25:26 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/04/22 18:46:52 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    brain = NULL;
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy Assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "MOWE MOWE" << std::endl;
}