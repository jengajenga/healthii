//
//  foods.cpp
//  healthii
//
//  Created by Stephen Duke on 4/16/18.
//  Copyright © 2018 Stephen Duke. All rights reserved.
//

#include "foods.hpp"

void food::allocateFoodDataFromString(string foodType){
    
    string currentItem;
    short counter = 0;
    
    //loop through the string
    for(int i=0; i<foodType.length(); ++i){
        
        //read in each item if not a comma
        if (foodType[i] != ','){
            currentItem += foodType[i];
        }
        
        //read in food name
        if (foodType[i] == ',' && counter == 0){
            myFood.foodName = currentItem;
        }
        
        //read in Water
        else if (foodType[i] == ',' && counter == 1){
            myFood.Water = stoi(currentItem);
        }
        
        //read in Energ_Kcal
        else if (foodType[i] == ',' && counter == 2){
            myFood.Energ_Kcal = stoi(currentItem);
        }
        
        //read in Protein
        else if (foodType[i] == ',' && counter == 3){
            myFood.Protein = stoi(currentItem);
        }
        
        //read in Lipid_Tot
        else if (foodType[i] == ',' && counter == 4){
            myFood.Lipid_Tot = stoi(currentItem);
        }
        
        //read in Ash
        else if (foodType[i] == ',' && counter == 5){
            myFood.Ash = stoi(currentItem);
        }
        
        //read in Carbohydrt
        else if (foodType[i] == ',' && counter == 6){
            myFood.Carbohydrt = stoi(currentItem);
        }
        
        //read in Fiber_TD
        else if (foodType[i] == ',' && counter == 7){
            myFood.Fiber_TD = stoi(currentItem);
        }
        
        //read in Sugar_Tot
        else if (foodType[i] == ',' && counter == 8){
            myFood.Sugar_Tot = stoi(currentItem);
        }
        
        //read in Calcium
        else if (foodType[i] == ',' && counter == 9){
            myFood.Calcium = stoi(currentItem);
        }
        
        //read in Iron
        else if (foodType[i] == ',' && counter == 10){
            myFood.Iron = stoi(currentItem);
        }
        
        //read in Magnesium
        else if (foodType[i] == ',' && counter == 11){
            myFood.Magnesium = stoi(currentItem);
        }
        
        //read in Phosphorus
        else if (foodType[i] == ',' && counter == 12){
            myFood.Phosphorus = stoi(currentItem);
        }
        
        //read in Potassium
        else if (foodType[i] == ',' && counter == 13){
            myFood.Potassium = stoi(currentItem);
        }
        
        //read in Sodium
        else if (foodType[i] == ',' && counter == 14){
            myFood.Sodium = stoi(currentItem);
        }
        
        //read in Zinc
        else if (foodType[i] == ',' && counter == 15){
            myFood.Zinc = stoi(currentItem);
        }
        
        //read in Copper
        else if (foodType[i] == ',' && counter == 16){
            myFood.Copper = stoi(currentItem);
        }
        
        //read in Manganese
        else if (foodType[i] == ',' && counter == 17){
            myFood.Manganese = stoi(currentItem);
        }
        
        //read in Selenium
        else if (foodType[i] == ',' && counter == 18){
            myFood.Selenium = stoi(currentItem);
        }
        
        //read in Vit_C
        else if (foodType[i] == ',' && counter == 19){
            myFood.Vit_C = stoi(currentItem);
        }
        
        //read in Thiamin
        else if (foodType[i] == ',' && counter == 20){
            myFood.Thiamin = stoi(currentItem);
        }
        
        //read in Riboflavin
        else if (foodType[i] == ',' && counter == 21){
            myFood.Riboflavin = stoi(currentItem);
        }
        
        //read in Niacin
        else if (foodType[i] == ',' && counter == 22){
            myFood.Niacin = stoi(currentItem);
        }
        
        //read in Panto_Acid
        else if (foodType[i] == ',' && counter == 23){
            myFood.Panto_Acid = stoi(currentItem);
        }
        
        //read in Vit_B6
        else if (foodType[i] == ',' && counter == 24){
            myFood.Vit_B6 = stoi(currentItem);
        }
        
        //read in Folate_Tot
        else if (foodType[i] == ',' && counter == 25){
            myFood.Folate_Tot = stoi(currentItem);
        }
        
        //read in Folic_Acid
        else if (foodType[i] == ',' && counter == 26){
            myFood.Folic_Acid = stoi(currentItem);
        }
        
        //read in Food_Folate
        else if (foodType[i] == ',' && counter == 27){
            myFood.Food_Folate = stoi(currentItem);
        }
        
        //read in Folate_DFE
        else if (foodType[i] == ',' && counter == 28){
            myFood.Folate_DFE = stoi(currentItem);
        }
        
        //read in Choline_Tot
        else if (foodType[i] == ',' && counter == 29){
            myFood.Choline_Tot = stoi(currentItem);
        }
        
        //read in Vit_B12
        else if (foodType[i] == ',' && counter == 30){
            myFood.Vit_B12 = stoi(currentItem);
        }
        
        //read in Vit_A_IU
        else if (foodType[i] == ',' && counter == 31){
            myFood.Vit_A_IU = stoi(currentItem);
        }
        
        //read in Vit_A_RAE
        else if (foodType[i] == ',' && counter == 32){
            myFood.Vit_A_RAE = stoi(currentItem);
        }
        
        //read in Retinol
        else if (foodType[i] == ',' && counter == 32){
            myFood.Retinol = stoi(currentItem);
        }
        
        //read in Alpha_Carot
        else if (foodType[i] == ',' && counter == 34){
            myFood.Alpha_Carot = stoi(currentItem);
        }
        
        //read in Beta_Carot
        else if (foodType[i] == ',' && counter == 35){
            myFood.Beta_Carot = stoi(currentItem);
        }
        
        //read in Beta_Crypt
        else if (foodType[i] == ',' && counter == 36){
            myFood.Beta_Crypt = stoi(currentItem);
        }
        
        //read in Lycopene
        else if (foodType[i] == ',' && counter == 37){
            myFood.Lycopene = stoi(currentItem);
        }
        
        //read in Lut_Zea
        else if (foodType[i] == ',' && counter == 38){
            myFood.Lut_Zea = stoi(currentItem);
        }
        
        //read in Vit_E
        else if (foodType[i] == ',' && counter == 39){
            myFood.Vit_E = stoi(currentItem);
        }
        
        //read in Vit_D_mcg
        else if (foodType[i] == ',' && counter == 40){
            myFood.Vit_D_mcg = stoi(currentItem);
        }
        
        //read in ViVit_D_IU
        else if (foodType[i] == ',' && counter == 41){
            myFood.ViVit_D_IU = stoi(currentItem);
        }
        
        //read in Vit_K
        else if (foodType[i] == ',' && counter == 42){
            myFood.Vit_K = stoi(currentItem);
        }
        
        //read in FA_Sat
        else if (foodType[i] == ',' && counter == 43){
            myFood.FA_Sat = stoi(currentItem);
        }
        
        //read in FA_Mono
        else if (foodType[i] == ',' && counter == 44){
            myFood.FA_Mono = stoi(currentItem);
        }
        
        //read in FA_Poly
        else if (foodType[i] == ',' && counter == 45){
            myFood.FA_Poly = stoi(currentItem);
        }
        
        //read in Cholestrl
        else if (foodType[i] == ',' && counter == 46){
            myFood.Cholestrl = stoi(currentItem);
        }
        
        //read in GmWt_1
        else if (foodType[i] == ',' && counter == 47){
            myFood.GmWt_1 = stoi(currentItem);
        }
        
        //read in GmWt_Desc1
        else if (foodType[i] == ',' && counter == 48){
            myFood.GmWt_Desc1 = stoi(currentItem);
        }
        
        //read in GmWt_2
        else if (foodType[i] == ',' && counter == 49){
            myFood.GmWt_2 = stoi(currentItem);
        }
        
        //read in GmWt_Desc2
        else if (foodType[i] == ',' && counter == 50){
            myFood.GmWt_Desc2 = stoi(currentItem);
        }
        
        //read in Refuse_Pct
        else if (foodType[i] == ',' && counter == 51){
            myFood.Refuse_Pct = stoi(currentItem);
        }
    }
}

void calculateOverallNutritionRank(){
    
}

void food::printFoods() const{
    cout << myFood.foodName << " - " << myFood.ranking_Water << std::endl;
}
