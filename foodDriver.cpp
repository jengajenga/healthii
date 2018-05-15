//
//  foodDriver.cpp
//  healthii
//
//  Created by Stephen Duke on 4/16/18.
//  Copyright © 2018 Stephen Duke. All rights reserved.
//
#include <iomanip>
#include "foodDriver.hpp"

std::istream& in = std::cin;
std::ostream& out = std::cout;

struct foodCompare {
    bool operator() (const food& lhs, const food& rhs) const {
        return lhs.getMyFood().foodName < rhs.getMyFood().foodName;
    }
};

std::vector<food> myFoods;

void loadFoodInfoFromFile(){
    std::string line,currentWord;
    std::ifstream tasks;
    short counter = 0;
    short lineCounter = 0;
    food myFood;
    foodInfo currentFood;
    char c;
    
    tasks.open("/Users/stephenduke/Documents/healthii/healthii/masterFoodListWithRankings.csv");
    
    if(!tasks.is_open()){
        out << "Could not open File." << std::endl;
        return;
        
    } else while(!tasks.eof()){
        
        while(getline(tasks,line)){
            if (lineCounter != 0) {
                counter = 0;
                currentWord = "";
                for (int i=0; i<line.length(); ++i){

                    if (line[i] != ',') {
                        c = line[i];
                        currentWord += c;
                    }
                    //set Food_Category
                    if(line[i] == ',' && counter == 0){
                        currentFood.foodCategory = currentWord;
                        counter++;
                        currentWord = "";
                    }
                    //set Shrt_Desc
                    else if(line[i] == ',' && counter == 1){
                        currentFood.foodName = currentWord;
                        counter++;
                        currentWord = "";
                    }
                    //set Water
                    else if(line[i] == ',' && counter == 2){
                        currentFood.Water = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Energ_Kcal
                    else if(line[i] == ',' && counter == 3){
                        currentFood.Energ_Kcal = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Protein
                    else if(line[i] == ',' && counter == 4){
                        currentFood.Protein = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Lipid_Tot
                    else if(line[i] == ',' && counter == 5){
                        currentFood.Lipid_Tot = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Ash
                    else if(line[i] == ',' && counter == 6){
                        currentFood.Ash = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Carbohydrt
                    else if(line[i] == ',' && counter == 7){
                        currentFood.Carbohydrt = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Fiber_TD
                    else if(line[i] == ',' && counter == 8){
                        currentFood.Fiber_TD = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Sugar_Tot
                    else if(line[i] == ',' && counter == 9){
                        currentFood.Sugar_Tot = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Calcium
                    else if(line[i] == ',' && counter == 10){
                        currentFood.Calcium = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Iron
                    else if(line[i] == ',' && counter == 11){
                        currentFood.Iron = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Magnesium
                    else if(line[i] == ',' && counter == 12){
                        currentFood.Magnesium = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Phosphorus
                    else if(line[i] == ',' && counter == 13){
                        currentFood.Phosphorus = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Potassium
                    else if(line[i] == ',' && counter == 14){
                        currentFood.Potassium = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Sodium
                    else if(line[i] == ',' && counter == 15){
                        currentFood.Sodium = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Zinc
                    else if(line[i] == ',' && counter == 16){
                        currentFood.Zinc = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Copper
                    else if(line[i] == ',' && counter == 17){
                        currentFood.Copper = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Manganese
                    else if(line[i] == ',' && counter == 18){
                        currentFood.Manganese = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Selenium
                    else if(line[i] == ',' && counter == 19){
                        currentFood.Selenium = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Vit_C
                    else if(line[i] == ',' && counter == 20){
                        currentFood.Vit_C = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Thiamin
                    else if(line[i] == ',' && counter == 21){
                        currentFood.Thiamin = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Riboflavin
                    else if(line[i] == ',' && counter == 22){
                        currentFood.Riboflavin = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Niacin
                    else if(line[i] == ',' && counter == 23){
                        currentFood.Niacin = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Panto_Acid
                    else if(line[i] == ',' && counter == 24){
                        currentFood.Panto_Acid = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Vit_B6
                    else if(line[i] == ',' && counter == 25){
                        currentFood.Vit_B6 = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Folate_Tot
                    else if(line[i] == ',' && counter == 26){
                        currentFood.Folate_Tot = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Folic_Acid
                    else if(line[i] == ',' && counter == 27){
                        currentFood.Folic_Acid = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Food_Folate
                    else if(line[i] == ',' && counter == 28){
                        currentFood.Food_Folate = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Folate_DFE
                    else if(line[i] == ',' && counter == 29){
                        currentFood.Folate_DFE = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Choline_Tot
                    else if(line[i] == ',' && counter == 30){
                        currentFood.Choline_Tot = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Vit_B12
                    else if(line[i] == ',' && counter == 31){
                        currentFood.Vit_B12 = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Vit_A_IU
                    else if(line[i] == ',' && counter == 32){
                        currentFood.Vit_A_IU = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Vit_A_RAE
                    else if(line[i] == ',' && counter == 33){
                        currentFood.Vit_A_RAE = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Retinol
                    else if(line[i] == ',' && counter == 34){
                        currentFood.Retinol = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Alpha_Carot
                    else if(line[i] == ',' && counter == 35){
                        currentFood.Alpha_Carot = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Beta_Carot
                    else if(line[i] == ',' && counter == 36){
                        currentFood.Beta_Carot = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Beta_Crypt
                    else if(line[i] == ',' && counter == 37){
                        currentFood.Beta_Crypt = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Lycopene
                    else if(line[i] == ',' && counter == 38){
                        currentFood.Lycopene = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Lut_Zea
                    else if(line[i] == ',' && counter == 39){
                        currentFood.Lut_Zea = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Vit_E
                    else if(line[i] == ',' && counter == 40){
                        currentFood.Vit_E = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Vit_D_mcg
                    else if(line[i] == ',' && counter == 41){
                        currentFood.Vit_D_mcg = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set ViVit_D_IU
                    else if(line[i] == ',' && counter == 42){
                        currentFood.ViVit_D_IU = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Vit_K
                    else if(line[i] == ',' && counter == 43){
                        currentFood.Vit_K = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set FA_Sat
                    else if(line[i] == ',' && counter == 44){
                        currentFood.FA_Sat = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set FA_Mono
                    else if(line[i] == ',' && counter == 45){
                        currentFood.FA_Mono = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set FA_Poly
                    else if(line[i] == ',' && counter == 46){
                        currentFood.FA_Poly = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set Cholestrl
                    else if(line[i] == ',' && counter == 47){
                        currentFood.Cholestrl = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set GmWt_1
                    else if(line[i] == ',' && counter == 48){
                        currentFood.GmWt_1 = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }
                    //set GmWt_Desc1
                    else if(line[i] == ',' && counter == 49){
                        currentFood.GmWt_Desc1 = currentWord;
                        counter++;
                        currentWord = "";
                    }
                    //set GmWt_2
                    else if(line[i] == ',' && counter == 50){
                        currentFood.GmWt_2 = currentWord;
                        counter++;
                        currentWord = "";
                    }
                    //set GmWt_Desc2
                    else if(line[i] == ',' && counter == 51){
                        currentFood.GmWt_Desc2 = currentWord;
                        counter++;
                        currentWord = "";
                    }
                    //set Refuse_Pct
                    else if(line[i] == ',' && counter == 52){
                        currentFood.Refuse_Pct = stod(currentWord);
                        counter++;
                        currentWord = "";
                    }


                    //set rankings
                    
                    //set ranking_Water
                    else if(line[i] == ',' && counter == 53){
                        currentFood.ranking_Water = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set ranking_Energ_Kcal
                    else if(line[i] == ',' && counter == 54){
                        currentFood.ranking_Energ_Kcal = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set ranking_Protein
                    else if(line[i] == ',' && counter == 55){
                        currentFood.ranking_Protein = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set ranking_Lipid_Tot
                    else if(line[i] == ',' && counter == 56){
                        currentFood.ranking_Lipid_Tot = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Ash
                    else if(line[i] == ',' && counter == 57){
                        currentFood.ranking_Ash = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Carbohydrt
                    else if(line[i] == ',' && counter == 58){
                        currentFood.ranking_Carbohydrt = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Fiber_TD
                    else if(line[i] == ',' && counter == 59){
                        currentFood.ranking_Fiber_TD = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Sugar_Tot
                    else if(line[i] == ',' && counter == 60){
                        currentFood.ranking_Sugar_Tot = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Calcium
                    else if(line[i] == ',' && counter == 61){
                        currentFood.ranking_Calcium = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Iron
                    else if(line[i] == ',' && counter == 62){
                        currentFood.ranking_Iron = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Magnesium
                    else if(line[i] == ',' && counter == 63){
                        currentFood.ranking_Magnesium = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Phosphorus
                    else if(line[i] == ',' && counter == 64){
                        currentFood.ranking_Phosphorus = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Potassium
                    else if(line[i] == ',' && counter == 65){
                        currentFood.ranking_Potassium = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Sodium
                    else if(line[i] == ',' && counter == 66){
                        currentFood.ranking_Sodium = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Zinc
                    else if(line[i] == ',' && counter == 67){
                        currentFood.ranking_Zinc = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Copper
                    else if(line[i] == ',' && counter == 68){
                        currentFood.ranking_Copper = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Manganese
                    else if(line[i] == ',' && counter == 69){
                        currentFood.ranking_Manganese = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                        
                    }
                    //set Selenium
                    else if(line[i] == ',' && counter == 70){
                        currentFood.ranking_Selenium = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Vit_C
                    else if(line[i] == ',' && counter == 71){
                        currentFood.ranking_Vit_C = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Thiamin
                    else if(line[i] == ',' && counter == 72){
                        currentFood.ranking_Thiamin = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Riboflavin
                    else if(line[i] == ',' && counter == 73){
                        currentFood.ranking_Riboflavin = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Niacin
                    else if(line[i] == ',' && counter == 74){
                        currentFood.ranking_Niacin = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Panto_Acid
                    else if(line[i] == ',' && counter == 75){
                        currentFood.ranking_Panto_Acid = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Vit_B6
                    else if(line[i] == ',' && counter == 76){
                        currentFood.ranking_Vit_B6 = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Folate_Tot
                    else if(line[i] == ',' && counter == 77){
                        currentFood.ranking_Folate_Tot = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Folic_Acid
                    else if(line[i] == ',' && counter == 78){
                        currentFood.ranking_Folic_Acid = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Food_Folate
                    else if(line[i] == ',' && counter == 79){
                        currentFood.ranking_Food_Folate = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Folate_DFE
                    else if(line[i] == ',' && counter == 80){
                        currentFood.ranking_Folate_DFE = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Choline_Tot
                    else if(line[i] == ',' && counter == 81){
                        currentFood.ranking_Choline_Tot = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Vit_B12
                    else if(line[i] == ',' && counter == 82){
                        currentFood.ranking_Vit_B12 = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Vit_A_IU
                    else if(line[i] == ',' && counter == 83){
                        currentFood.ranking_Vit_A_IU = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Vit_A_RAE
                    else if(line[i] == ',' && counter == 84){
                        currentFood.ranking_Vit_A_RAE = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Retinol
                    else if(line[i] == ',' && counter == 85){
                        currentFood.ranking_Retinol = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Alpha_Carot
                    else if(line[i] == ',' && counter == 86){
                        currentFood.ranking_Alpha_Carot = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Beta_Carot
                    else if(line[i] == ',' && counter == 87){
                        currentFood.ranking_Beta_Carot = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Beta_Crypt
                    else if(line[i] == ',' && counter == 88){
                        currentFood.ranking_Beta_Crypt = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Lycopene
                    else if(line[i] == ',' && counter == 89){
                        currentFood.ranking_Lycopene = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Lut_Zea
                    else if(line[i] == ',' && counter == 90){
                        currentFood.ranking_Lut_Zea = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Vit_E
                    else if(line[i] == ',' && counter == 91){
                        currentFood.ranking_Vit_E = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Vit_D_mcg
                    else if(line[i] == ',' && counter == 92){
                        currentFood.ranking_Vit_D_mcg = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set ViVit_D_IU
                    else if(line[i] == ',' && counter == 93){
                        currentFood.ranking_ViVit_D_IU = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Vit_K
                    else if(line[i] == ',' && counter == 94){
                        currentFood.ranking_Vit_K = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set FA_Sat
                    else if(line[i] == ',' && counter == 95){
                        currentFood.ranking_FA_Sat = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set FA_Mono
                    else if(line[i] == ',' && counter == 96){
                        currentFood.ranking_FA_Mono = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set FA_Poly
                    else if(line[i] == ',' && counter == 97){
                        currentFood.ranking_FA_Poly = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Cholestrl
                    else if(line[i] == ',' && counter == 98){
                        currentFood.ranking_Cholestrl = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set GmWt_1
                    else if(line[i] == ',' && counter == 99){
                        currentFood.ranking_GmWt_1 = stod(currentWord);
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set GmWt_Desc1
                    else if(line[i] == ',' && counter == 100){
                        currentFood.ranking_GmWt_Desc1 = 0;
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set GmWt_2
                    else if(line[i] == ',' && counter == 101){
                        currentFood.ranking_GmWt_2 = 0;
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set GmWt_Desc2
                    else if(line[i] == ',' && counter == 102){
                        currentFood.ranking_GmWt_Desc2 = 0;
                        counter++;
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                    //set Refuse_Pct
                    else if(counter == 103 && i == line.length()){
                        currentFood.ranking_Refuse_Pct = stod(currentWord);
                        myFood.pushInNutritionRank(stod(currentWord));
                        currentWord = "";
                    }
                }
                myFood.setFoodInfo(currentFood);
                myFoods.push_back(myFood);
            }
            lineCounter++;
        }
    }
    out << "Foods loaded from File." << std::endl;
}

void calculateNutritionRank(){
    std::string numberOneProtein;
    for (std::vector<food>::iterator it=myFoods.begin(); it!=myFoods.end(); ++it){
        for (std::vector<food>::iterator subIt=it+1; subIt!=myFoods.end(); ++subIt){
            //set rank for ranking_Water
            if(it->getMyFood().Water < subIt->getMyFood().Water){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Water += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Water += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Energ_Kcal
            if(it->getMyFood().Energ_Kcal < subIt->getMyFood().Energ_Kcal){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Energ_Kcal += 1;
                subIt->setFoodInfo(tempFood);
                
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Energ_Kcal += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Protein
            if(it->getMyFood().Protein < subIt->getMyFood().Protein){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Protein += 1;
                subIt->setFoodInfo(tempFood);
                numberOneProtein = it->getMyFood().foodName;
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Protein += 1;
                it->setFoodInfo(tempFood);
                numberOneProtein = subIt->getMyFood().foodName;
            }
            //set rank for ranking_Lipid_Tot
            if(it->getMyFood().Lipid_Tot < subIt->getMyFood().Lipid_Tot){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Lipid_Tot += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Lipid_Tot += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Ash
            if(it->getMyFood().Ash < subIt->getMyFood().Ash){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Ash += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Ash += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Carbohydrt
            if(it->getMyFood().Carbohydrt < subIt->getMyFood().Carbohydrt){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Carbohydrt += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Carbohydrt += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Fiber_TD
            if(it->getMyFood().Fiber_TD < subIt->getMyFood().Fiber_TD){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Fiber_TD += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Fiber_TD += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Sugar_Tot
            if(it->getMyFood().Sugar_Tot < subIt->getMyFood().Sugar_Tot){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Sugar_Tot += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Sugar_Tot += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Calcium
            if(it->getMyFood().Calcium < subIt->getMyFood().Calcium){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Calcium += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Calcium += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Iron
            if(it->getMyFood().Iron < subIt->getMyFood().Iron){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Iron += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Iron += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Magnesium
            if(it->getMyFood().Magnesium < subIt->getMyFood().Magnesium){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Magnesium += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Magnesium += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Phosphorus
            if(it->getMyFood().Phosphorus < subIt->getMyFood().Phosphorus){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Phosphorus += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Phosphorus += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Potassium
            if(it->getMyFood().Potassium < subIt->getMyFood().Potassium){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Potassium += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Potassium += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Sodium
            if(it->getMyFood().Sodium < subIt->getMyFood().Sodium){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Sodium += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Sodium += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Zinc
            if(it->getMyFood().Zinc < subIt->getMyFood().Zinc){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Zinc += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Zinc += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Copper
            if(it->getMyFood().Copper < subIt->getMyFood().Copper){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Copper += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Copper += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Manganese
            if(it->getMyFood().Manganese < subIt->getMyFood().Manganese){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Manganese += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Manganese += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Selenium
            if(it->getMyFood().Selenium < subIt->getMyFood().Selenium){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Selenium += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Selenium += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Vit_C
            if(it->getMyFood().Vit_C < subIt->getMyFood().Vit_C){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Vit_C += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Vit_C += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Thiamin
            if(it->getMyFood().Thiamin < subIt->getMyFood().Thiamin){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Thiamin += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Thiamin += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Riboflavin
            if(it->getMyFood().Riboflavin < subIt->getMyFood().Riboflavin){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Riboflavin += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Riboflavin += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Niacin
            if(it->getMyFood().Niacin < subIt->getMyFood().Niacin){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Niacin += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Niacin += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Panto_Acid
            if(it->getMyFood().Panto_Acid < subIt->getMyFood().Panto_Acid){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Panto_Acid += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Panto_Acid += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Vit_B6
            if(it->getMyFood().Vit_B6 < subIt->getMyFood().Vit_B6){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Vit_B6 += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Vit_B6 += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Folate_Tot
            if(it->getMyFood().Folate_Tot < subIt->getMyFood().Folate_Tot){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Folate_Tot += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Folate_Tot += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Folic_Acid
            if(it->getMyFood().Folic_Acid < subIt->getMyFood().Folic_Acid){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Folic_Acid += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Folic_Acid += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Food_Folate
            if(it->getMyFood().Food_Folate < subIt->getMyFood().Food_Folate){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Food_Folate += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Food_Folate += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Folate_DFE
            if(it->getMyFood().Folate_DFE < subIt->getMyFood().Folate_DFE){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Folate_DFE += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Folate_DFE += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Choline_Tot
            if(it->getMyFood().Choline_Tot < subIt->getMyFood().Choline_Tot){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Choline_Tot += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Choline_Tot += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Vit_B12
            if(it->getMyFood().Vit_B12 < subIt->getMyFood().Vit_B12){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Vit_B12 += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Vit_B12 += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Vit_A_IU
            if(it->getMyFood().Vit_A_IU < subIt->getMyFood().Vit_A_IU){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Vit_A_IU += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Vit_A_IU += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Vit_A_RAE
            if(it->getMyFood().Vit_A_RAE < subIt->getMyFood().Vit_A_RAE){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Vit_A_RAE += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Vit_A_RAE += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Retinol
            if(it->getMyFood().Retinol < subIt->getMyFood().Retinol){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Retinol += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Retinol += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Alpha_Carot
            if(it->getMyFood().Alpha_Carot < subIt->getMyFood().Alpha_Carot){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Alpha_Carot += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Alpha_Carot += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Beta_Carot
            if(it->getMyFood().Beta_Carot < subIt->getMyFood().Beta_Carot){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Beta_Carot += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Beta_Carot += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Beta_Crypt
            if(it->getMyFood().Beta_Crypt < subIt->getMyFood().Beta_Crypt){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Beta_Crypt += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Beta_Crypt += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Lycopene
            if(it->getMyFood().Lycopene < subIt->getMyFood().Lycopene){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Lycopene += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Lycopene += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Lut_Zea
            if(it->getMyFood().Lut_Zea < subIt->getMyFood().Lut_Zea){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Lut_Zea += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Lut_Zea += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Vit_E
            if(it->getMyFood().Vit_E < subIt->getMyFood().Vit_E){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Vit_E += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Vit_E += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Vit_D_mcg
            if(it->getMyFood().Vit_D_mcg < subIt->getMyFood().Vit_D_mcg){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Vit_D_mcg += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Vit_D_mcg += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_ViVit_D_IU
            if(it->getMyFood().ViVit_D_IU < subIt->getMyFood().ViVit_D_IU){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_ViVit_D_IU += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_ViVit_D_IU += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Vit_K
            if(it->getMyFood().Vit_K < subIt->getMyFood().Vit_K){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Vit_K += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Vit_K += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_FA_Sat
            if(it->getMyFood().FA_Sat < subIt->getMyFood().FA_Sat){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_FA_Sat += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_FA_Sat += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_FA_Mono
            if(it->getMyFood().FA_Mono < subIt->getMyFood().FA_Mono){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_FA_Mono += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_FA_Mono += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_FA_Poly
            if(it->getMyFood().FA_Poly < subIt->getMyFood().FA_Poly){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_FA_Poly += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_FA_Poly += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Cholestrl
            if(it->getMyFood().Cholestrl < subIt->getMyFood().Cholestrl){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Cholestrl += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Cholestrl += 1;
                it->setFoodInfo(tempFood);
            }
            //set rank for ranking_Refuse_Pct
            if(it->getMyFood().Refuse_Pct < subIt->getMyFood().Refuse_Pct){
                foodInfo tempFood = subIt->getMyFood();
                tempFood.ranking_Refuse_Pct += 1;
                subIt->setFoodInfo(tempFood);
            } else {
                foodInfo tempFood = it->getMyFood();
                tempFood.ranking_Refuse_Pct += 1;
                it->setFoodInfo(tempFood);
            }
        }
    }
    out << "Nutrition Ranks Calculated." << std::endl;
}

void saveFoodsToFile(){
    
    std::ofstream outFile("/Users/stephenduke/Documents/healthii/healthii/outputfile.csv");
    if (!outFile.is_open()){
        throw invalid_argument("File cannot be opened.");
    } else {
        //output header row
        outFile<<"Food Category,";
        outFile<<"Food Name,";
        outFile<<"Water,";
        outFile<<"Energ_Kcal,";
        outFile<<"Protein,";
        outFile<<"Lipid_Tot,";
        outFile<<"Ash,";
        outFile<<"Carbohydrt,";
        outFile<<"Fiber_TD,";
        outFile<<"Sugar_Tot,";
        outFile<<"Calcium,";
        outFile<<"Iron,";
        outFile<<"Magnesium,";
        outFile<<"Phosphorus,";
        outFile<<"Potassium,";
        outFile<<"Sodium,";
        outFile<<"Zinc,";
        outFile<<"Copper,";
        outFile<<"Manganese,";
        outFile<<"Selenium,";
        outFile<<"Vit_C,";
        outFile<<"Thiamin,";
        outFile<<"Riboflavin,";
        outFile<<"Niacin,";
        outFile<<"Panto_Acid,";
        outFile<<"Vit_B6,";
        outFile<<"Folate_Tot,";
        outFile<<"Folic_Acid,";
        outFile<<"Food_Folate,";
        outFile<<"Folate_DFE,";
        outFile<<"Choline_Tot,";
        outFile<<"Vit_B12,";
        outFile<<"Vit_A_IU,";
        outFile<<"Vit_A_RAE,";
        outFile<<"Retinol,";
        outFile<<"Alpha_Carot,";
        outFile<<"Beta_Carot,";
        outFile<<"Beta_Crypt,";
        outFile<<"Lycopene,";
        outFile<<"Lut_Zea,";
        outFile<<"Vit_E,";
        outFile<<"Vit_D_mcg,";
        outFile<<"ViVit_D_IU,";
        outFile<<"Vit_K,";
        outFile<<"FA_Sat,";
        outFile<<"FA_Mono,";
        outFile<<"FA_Poly,";
        outFile<<"Cholestrl,";
        outFile<<"GmWt_1,";
        outFile<<"GmWt_Desc1;,";
        outFile<<"GmWt_2;,";
        outFile<<"GmWt_Desc2;,";
        outFile<<"Refuse_Pct,";
        outFile<<"ranking_Water,";
        outFile<<"ranking_Energ_Kcal,";
        outFile<<"ranking_Protein,";
        outFile<<"ranking_Lipid_Tot,";
        outFile<<"ranking_Ash,";
        outFile<<"ranking_Carbohydrt,";
        outFile<<"ranking_Fiber_TD,";
        outFile<<"ranking_Sugar_Tot,";
        outFile<<"ranking_Calcium,";
        outFile<<"ranking_Iron,";
        outFile<<"ranking_Magnesium,";
        outFile<<"ranking_Phosphorus,";
        outFile<<"ranking_Potassium,";
        outFile<<"ranking_Sodium,";
        outFile<<"ranking_Zinc,";
        outFile<<"ranking_Copper,";
        outFile<<"ranking_Manganese,";
        outFile<<"ranking_Selenium,";
        outFile<<"ranking_Vit_C,";
        outFile<<"ranking_Thiamin,";
        outFile<<"ranking_Riboflavin,";
        outFile<<"ranking_Niacin,";
        outFile<<"ranking_Panto_Acid,";
        outFile<<"ranking_Vit_B6,";
        outFile<<"ranking_Folate_Tot,";
        outFile<<"ranking_Folic_Acid,";
        outFile<<"ranking_Food_Folate,";
        outFile<<"ranking_Folate_DFE,";
        outFile<<"ranking_Choline_Tot,";
        outFile<<"ranking_Vit_B12,";
        outFile<<"ranking_Vit_A_IU,";
        outFile<<"ranking_Vit_A_RAE,";
        outFile<<"ranking_Retinol,";
        outFile<<"ranking_Alpha_Carot,";
        outFile<<"ranking_Beta_Carot,";
        outFile<<"ranking_Beta_Crypt,";
        outFile<<"ranking_Lycopene,";
        outFile<<"ranking_Lut_Zea,";
        outFile<<"ranking_Vit_E,";
        outFile<<"ranking_Vit_D_mcg,";
        outFile<<"ranking_ViVit_D_IU,";
        outFile<<"ranking_Vit_K,";
        outFile<<"ranking_FA_Sat,";
        outFile<<"ranking_FA_Mono,";
        outFile<<"ranking_FA_Poly,";
        outFile<<"ranking_Cholestrl,";
        outFile<<"ranking_GmWt_1,";
        outFile<<"ranking_GmWt_Desc1,";
        outFile<<"ranking_GmWt_2,";
        outFile<<"ranking_GmWt_Desc2,";
        outFile<<"ranking_Refuse_Pct"<<std::endl;
    
        for (std::vector<food>::iterator it=myFoods.begin(); it!=myFoods.end(); ++it){
            outFile<<it->getMyFood().foodCategory<< ",";
            outFile<<it->getMyFood().foodName<< ",";
            outFile<<it->getMyFood().Water<< ",";
            outFile<<it->getMyFood().Energ_Kcal<< ",";
            outFile<<it->getMyFood().Protein<< ",";
            outFile<<it->getMyFood().Lipid_Tot<< ",";
            outFile<<it->getMyFood().Ash<< ",";
            outFile<<it->getMyFood().Carbohydrt<< ",";
            outFile<<it->getMyFood().Fiber_TD<< ",";
            outFile<<it->getMyFood().Sugar_Tot<< ",";
            outFile<<it->getMyFood().Calcium<< ",";
            outFile<<it->getMyFood().Iron<< ",";
            outFile<<it->getMyFood().Magnesium<< ",";
            outFile<<it->getMyFood().Phosphorus<< ",";
            outFile<<it->getMyFood().Potassium<< ",";
            outFile<<it->getMyFood().Sodium<< ",";
            outFile<<it->getMyFood().Zinc<< ",";
            outFile<<it->getMyFood().Copper<< ",";
            outFile<<it->getMyFood().Manganese<< ",";
            outFile<<it->getMyFood().Selenium<< ",";
            outFile<<it->getMyFood().Vit_C<< ",";
            outFile<<it->getMyFood().Thiamin<< ",";
            outFile<<it->getMyFood().Riboflavin<< ",";
            outFile<<it->getMyFood().Niacin<< ",";
            outFile<<it->getMyFood().Panto_Acid<< ",";
            outFile<<it->getMyFood().Vit_B6<< ",";
            outFile<<it->getMyFood().Folate_Tot<< ",";
            outFile<<it->getMyFood().Folic_Acid<< ",";
            outFile<<it->getMyFood().Food_Folate<< ",";
            outFile<<it->getMyFood().Folate_DFE<< ",";
            outFile<<it->getMyFood().Choline_Tot<< ",";
            outFile<<it->getMyFood().Vit_B12<< ",";
            outFile<<it->getMyFood().Vit_A_IU<< ",";
            outFile<<it->getMyFood().Vit_A_RAE<< ",";
            outFile<<it->getMyFood().Retinol<< ",";
            outFile<<it->getMyFood().Alpha_Carot<< ",";
            outFile<<it->getMyFood().Beta_Carot<< ",";
            outFile<<it->getMyFood().Beta_Crypt<< ",";
            outFile<<it->getMyFood().Lycopene<< ",";
            outFile<<it->getMyFood().Lut_Zea<< ",";
            outFile<<it->getMyFood().Vit_E<< ",";
            outFile<<it->getMyFood().Vit_D_mcg<< ",";
            outFile<<it->getMyFood().ViVit_D_IU<< ",";
            outFile<<it->getMyFood().Vit_K<< ",";
            outFile<<it->getMyFood().FA_Sat<< ",";
            outFile<<it->getMyFood().FA_Mono<< ",";
            outFile<<it->getMyFood().FA_Poly<< ",";
            outFile<<it->getMyFood().Cholestrl<< ",";
            outFile<<it->getMyFood().GmWt_1<< ",";
            outFile<<it->getMyFood().GmWt_Desc1<< ",";
            outFile<<it->getMyFood().GmWt_2<< ",";
            outFile<<it->getMyFood().GmWt_Desc2<< ",";
            outFile<<it->getMyFood().Refuse_Pct<< ",";
            outFile<<it->getMyFood().ranking_Water<< ",";
            outFile<<it->getMyFood().ranking_Energ_Kcal<< ",";
            outFile<<it->getMyFood().ranking_Protein<< ",";
            outFile<<it->getMyFood().ranking_Lipid_Tot<< ",";
            outFile<<it->getMyFood().ranking_Ash<< ",";
            outFile<<it->getMyFood().ranking_Carbohydrt<< ",";
            outFile<<it->getMyFood().ranking_Fiber_TD<< ",";
            outFile<<it->getMyFood().ranking_Sugar_Tot<< ",";
            outFile<<it->getMyFood().ranking_Calcium<< ",";
            outFile<<it->getMyFood().ranking_Iron<< ",";
            outFile<<it->getMyFood().ranking_Magnesium<< ",";
            outFile<<it->getMyFood().ranking_Phosphorus<< ",";
            outFile<<it->getMyFood().ranking_Potassium<< ",";
            outFile<<it->getMyFood().ranking_Sodium<< ",";
            outFile<<it->getMyFood().ranking_Zinc<< ",";
            outFile<<it->getMyFood().ranking_Copper<< ",";
            outFile<<it->getMyFood().ranking_Manganese<< ",";
            outFile<<it->getMyFood().ranking_Selenium<< ",";
            outFile<<it->getMyFood().ranking_Vit_C<< ",";
            outFile<<it->getMyFood().ranking_Thiamin<< ",";
            outFile<<it->getMyFood().ranking_Riboflavin<< ",";
            outFile<<it->getMyFood().ranking_Niacin<< ",";
            outFile<<it->getMyFood().ranking_Panto_Acid<< ",";
            outFile<<it->getMyFood().ranking_Vit_B6<< ",";
            outFile<<it->getMyFood().ranking_Folate_Tot<< ",";
            outFile<<it->getMyFood().ranking_Folic_Acid<< ",";
            outFile<<it->getMyFood().ranking_Food_Folate<< ",";
            outFile<<it->getMyFood().ranking_Folate_DFE<< ",";
            outFile<<it->getMyFood().ranking_Choline_Tot<< ",";
            outFile<<it->getMyFood().ranking_Vit_B12<< ",";
            outFile<<it->getMyFood().ranking_Vit_A_IU<< ",";
            outFile<<it->getMyFood().ranking_Vit_A_RAE<< ",";
            outFile<<it->getMyFood().ranking_Retinol<< ",";
            outFile<<it->getMyFood().ranking_Alpha_Carot<< ",";
            outFile<<it->getMyFood().ranking_Beta_Carot<< ",";
            outFile<<it->getMyFood().ranking_Beta_Crypt<< ",";
            outFile<<it->getMyFood().ranking_Lycopene<< ",";
            outFile<<it->getMyFood().ranking_Lut_Zea<< ",";
            outFile<<it->getMyFood().ranking_Vit_E<< ",";
            outFile<<it->getMyFood().ranking_Vit_D_mcg<< ",";
            outFile<<it->getMyFood().ranking_ViVit_D_IU<< ",";
            outFile<<it->getMyFood().ranking_Vit_K<< ",";
            outFile<<it->getMyFood().ranking_FA_Sat<< ",";
            outFile<<it->getMyFood().ranking_FA_Mono<< ",";
            outFile<<it->getMyFood().ranking_FA_Poly<< ",";
            outFile<<it->getMyFood().ranking_Cholestrl<< ",";
            outFile<<it->getMyFood().ranking_GmWt_1<< ",";
            outFile<<it->getMyFood().ranking_GmWt_Desc1<< ",";
            outFile<<it->getMyFood().ranking_GmWt_2<< ",";
            outFile<<it->getMyFood().ranking_GmWt_Desc2<< ",";
            outFile<<it->getMyFood().ranking_Refuse_Pct;
            outFile << std::endl;
        }
    }
    cout << "Foods saved to file." << std::endl;
}



void print(){
    int counter = 0;
    for(std::vector<food>::iterator it = myFoods.begin(); it < myFoods.end()-8700; ++it){
        cout << it->getMyFood().foodName<< std::endl;
        for (int i = 0; i < it->getNutritionRanks().size(); ++i){
            cout << it->getNutritionRanks()[i] << std::endl;
        }
        
        counter++;
    }
}


