#ifndef foods_hpp
#define foods_hpp

#include <string>
#include <vector>

using namespace std;



struct foodData{
    string dataType;
    double data;
};

struct foodInfo{
    string foodName;
    string foodCategory;
    double weight1 = 0;
    double weight2 = 0;
    string weightDescription1;
    string weightDescription2;
    vector <foodData> foodData;
};

class food{
private:
    foodInfo myFood;
    vector <string> foodCategories;
public:
    void setFoodInfo(const foodInfo& foodInsert) { myFood = foodInsert; }
    void setCategoryInfo(const vector<string> categories) { foodCategories = categories; }
    foodInfo getMyFood() const { return myFood; }
    vector <string> getFoodCategories() const { return foodCategories; }
};

#endif /* foods_hpp */
