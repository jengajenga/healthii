#include <iomanip>
#include <cassert>
#include "foodDriver.hpp"
#include "foods.hpp"

std::istream& in = std::cin;
std::ostream& out = std::cout;

std::vector<food> myFoods;
vector <string> foodCategories;

void loadFoodInfoFromFile(){
    std::string line,currentWord;
    std::ifstream tasks;
    short counter = 0;
    short lineCounter = 0;
    food myFood;
    
    char c;
    
    tasks.open("/Users/stephenduke/Desktop/healthii/healthii/masterFoodList.csv");
    
    if(!tasks.is_open()){
        out << "Could not open File." << std::endl;
        return;
        
    } else while(!tasks.eof()){
        while(getline(tasks,line)){
            foodInfo currentFood;
            if (lineCounter != 0) {
                
                counter = 0;
                currentWord = "";
                for (int i=0; i<=line.length(); ++i){
                    if (line[i] != ',') {
                        c = line[i];
                        currentWord += c;
                    } else {
                        if (counter > 1){
                            if (foodCategories[counter].compare("GmWt_1") == 0){
                                currentFood.weight1 = stod(currentWord);
                            } else if (foodCategories[counter].compare("GmWt_Desc1") == 0 ){
                                currentFood.weightDescription1 = currentWord;
                            }  else if (foodCategories[counter].compare("GmWt_2") == 0 ){
                                currentFood.weight2 = stod(currentWord);
                            }  else if (foodCategories[counter].compare("GmWt_Desc2") == 0 ){
                                currentFood.weightDescription2 = currentWord;
                            } else {
                                foodData currentData;
                                currentData.dataType = foodCategories[counter];
                                currentData.data = stod(currentWord);
                                currentFood.foodData.push_back(currentData);
                            }
                        }
                        else {
                            if (counter == 1){
                                assert(foodCategories[counter].compare("foodName") == 0);
                                currentFood.foodName = currentWord;
                            } else if (counter == 0){
                                assert(foodCategories[counter].compare("foodCategory") == 0);
                                currentFood.foodCategory = currentWord;
                            }
                        }
                        currentWord = "";
                        counter++;
                    }
                }
            } else {
                counter = 0;
                currentWord = "";
                for (int i=0; i<line.length(); ++i){
                    if (line[i] != ','){
                        c = line[i];
                        currentWord += c;
                    } else {
                        foodCategories.push_back(currentWord);
                        currentWord = "";
                    }
                }
            }
            counter = 0;
            if (lineCounter != 0){
                myFood.setFoodInfo(currentFood);
                //myFood.setCategoryInfo(foodCategories);
                myFoods.push_back(myFood);
            }
            lineCounter++;
        }
    }
    out << "Foods loaded from File." << std::endl;
}

void saveFoodInfoToFile(){
    std::ofstream outFile("/Users/stephenduke/Desktop/healthii/healthii/outputfile.csv");
    
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
    outFile << '\n';
    for (int i=0; i<myFoods.size();++i){
        foodInfo currentFood = myFoods[i].getMyFood();
        outFile << currentFood.foodCategory << ',';
        outFile << currentFood.foodName << ',';
        for (int i=0; i<currentFood.foodData.size(); ++i){
            outFile << currentFood.foodData[i].data << ',';
        }
        outFile << currentFood.weight1 << ',';
        outFile << currentFood.weightDescription1 << ',';
        outFile << currentFood.weight2 << ',';
        outFile << currentFood.weightDescription2;
        outFile << '\n';
    }

    
    
}
