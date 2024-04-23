/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:25:37 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/04/23 12:20:12 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy Assignment operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
        if (this->brain)
                delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "HAWE HAWE" << std::endl;
}