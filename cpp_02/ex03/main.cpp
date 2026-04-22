/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:25:22 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/25 19:31:51 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 4);

    // Inside
    std::cout << bsp(a, b, c, Point(1, 1)) << std::endl;   // 1
    
    // Outside
    std::cout << bsp(a, b, c, Point(3, 3)) << std::endl;   // 0
    
    // On vertex
    std::cout << bsp(a, b, c, Point(0, 0)) << std::endl;   // 0
    
    // On edge
    std::cout << bsp(a, b, c, Point(2, 0)) << std::endl;   // 0
    
    // Just inside
    std::cout << bsp(a, b, c, Point(1, 2)) << std::endl;   // 1
    
    // Negative coordinates
    Point d(-4, 0);
    Point e(0, -4);
    std::cout << bsp(a, d, e, Point(-1, -1)) << std::endl; // 1
}
