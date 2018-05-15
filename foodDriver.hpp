//
//  foodDriver.hpp
//  healthii
//
//  Created by Stephen Duke on 4/16/18.
//  Copyright © 2018 Stephen Duke. All rights reserved.
//

#ifndef foodDriver_hpp
#define foodDriver_hpp

#include <stdio.h>
#include <set>
#include <fstream>
#include <iostream>
#include "foods.hpp"


void loadFoodInfoFromFile();
void calculateNutritionRank();
void saveFoodsToFile();
void print();

#endif /* foodDriver_hpp */
