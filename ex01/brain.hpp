/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:05:52 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/04/22 15:13:20 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain();
};
#endif