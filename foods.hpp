//
//  foods.hpp
//  healthii
//
//  Created by Stephen Duke on 4/16/18.
//  Copyright © 2018 Stephen Duke. All rights reserved.
//

#ifndef foods_hpp
#define foods_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <exception>

using namespace std;

struct foodInfo{
    
    string foodName;
    string foodCategory;
    double Water = 0;
    double Energ_Kcal = 0;
    double Protein = 0;
    double Lipid_Tot = 0;
    double Ash = 0;
    double Carbohydrt = 0;
    double Fiber_TD = 0;
    double Sugar_Tot = 0;
    double Calcium = 0;
    double Iron = 0;
    double Magnesium = 0;
    double Phosphorus = 0;
    double Potassium = 0;
    double Sodium = 0;
    double Zinc = 0;
    double Copper = 0;
    double Manganese = 0;
    double Selenium = 0;
    double Vit_C = 0;
    double Thiamin = 0;
    double Riboflavin = 0;
    double Niacin = 0;
    double Panto_Acid = 0;
    double Vit_B6 = 0;
    double Folate_Tot = 0;
    double Folic_Acid = 0;
    double Food_Folate = 0;
    double Folate_DFE = 0;
    double Choline_Tot = 0;
    double Vit_B12 = 0;
    double Vit_A_IU = 0;
    double Vit_A_RAE = 0;
    double Retinol = 0;
    double Alpha_Carot = 0;
    double Beta_Carot = 0;
    double Beta_Crypt = 0;
    double Lycopene = 0;
    double Lut_Zea = 0;
    double Vit_E = 0;
    double Vit_D_mcg = 0;
    double ViVit_D_IU = 0;
    double Vit_K = 0;
    double FA_Sat = 0;
    double FA_Mono = 0;
    double FA_Poly = 0;
    double Cholestrl = 0;
    double GmWt_1 = 0;
    string GmWt_Desc1;
    string GmWt_2;
    string GmWt_Desc2;
    double Refuse_Pct = 0;
    
    short ranking_Water = 0;
    short ranking_Energ_Kcal = 0;
    short ranking_Protein = 0;
    short ranking_Lipid_Tot = 0;
    short ranking_Ash = 0;
    short ranking_Carbohydrt = 0;
    short ranking_Fiber_TD = 0;
    short ranking_Sugar_Tot = 0;
    short ranking_Calcium = 0;
    short ranking_Iron = 0;
    short ranking_Magnesium = 0;
    short ranking_Phosphorus = 0;
    short ranking_Potassium = 0;
    short ranking_Sodium = 0;
    short ranking_Zinc = 0;
    short ranking_Copper = 0;
    short ranking_Manganese = 0;
    short ranking_Selenium = 0;
    short ranking_Vit_C = 0;
    short ranking_Thiamin = 0;
    short ranking_Riboflavin = 0;
    short ranking_Niacin = 0;
    short ranking_Panto_Acid = 0;
    short ranking_Vit_B6 = 0;
    short ranking_Folate_Tot = 0;
    short ranking_Folic_Acid = 0;
    short ranking_Food_Folate = 0;
    short ranking_Folate_DFE = 0;
    short ranking_Choline_Tot = 0;
    short ranking_Vit_B12 = 0;
    short ranking_Vit_A_IU = 0;
    short ranking_Vit_A_RAE = 0;
    short ranking_Retinol = 0;
    short ranking_Alpha_Carot = 0;
    short ranking_Beta_Carot = 0;
    short ranking_Beta_Crypt = 0;
    short ranking_Lycopene = 0;
    short ranking_Lut_Zea = 0;
    short ranking_Vit_E = 0;
    short ranking_Vit_D_mcg = 0;
    short ranking_ViVit_D_IU = 0;
    short ranking_Vit_K = 0;
    short ranking_FA_Sat = 0;
    short ranking_FA_Mono = 0;
    short ranking_FA_Poly = 0;
    short ranking_Cholestrl = 0;
    short ranking_GmWt_1 = 0;
    short ranking_GmWt_Desc1 = 0;
    short ranking_GmWt_2 = 0;
    short ranking_GmWt_Desc2 = 0;
    short ranking_Refuse_Pct = 0;

};



class food{
private:
    foodInfo myFood;
    vector<double> nutritionRanks;
    short overallNutritionRank;
public:
    void allocateFoodDataFromString(string foodType);
    void printFoods() const;
    void setFoodInfo(const foodInfo& foodInsert) {myFood = foodInsert;}
    foodInfo getMyFood() const { return myFood; }
    void calculateOverallNutritionRank();
    void pushInNutritionRank(double data) {nutritionRanks.push_back(data);}
    vector<double> getNutritionRanks() {return nutritionRanks;}
};

#endif /* foods_hpp */
