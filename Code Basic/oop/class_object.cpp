#include <iostream>
using namespace std;
class car
{
// if we dont add public or private ,it will count private by default
public:
    string model;
    int year;
    float price;
    int current_year;
    how_old(current_year,year);
};

// class_object::class_object(/* args */)
// {
// }

// class_object::~class_object()
// {
// }
int car::how_old(current_year,year)
{
    return (current_year - year);
}

int main()
{
    // car for pakistan object
    car ban;
    ban.model = 'yamaha';
    ban.year = 2010;
    ban.price = 1.4;
    ban.current_year = 2021;
    ban.how_old();

    // now car for pakistan object
    car ind;
    ind.model = 'toyota';
    ind.year = 2011;
    ind.price = 10;
    ind.current_year = 2021;
    ind.how_old();

   

    printf("Bangladeshi car model : %s , year : %d , price : %f\n", ban.model, ban.year, ban.price);
    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n");
    printf("indian car model : %s , year : %d , price : %f", ind.model, ind.year, ind.price);
    printf("-----------------------------------------------------\n");
    printf("-----------------------------------------------------\n");
    printf("car age is : %d", ind.how_old());
}
