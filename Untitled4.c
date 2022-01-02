#include <stdio.h>
#include <string.h>

struct Tesla
{
    char ModelName[20];
    char color[10];
    int capacity;
    double millage;
};

int main()
{
    struct Tesla MyCar,YourCar;

    strcpy(MyCar.ModelName, "BMW");
    strcpy(MyCar.color, "blue");
    MyCar.capacity=200;
    MyCar.millage=512.36;

    strcpy(YourCar.ModelName, "AUDI");
    strcpy(YourCar.color, "black");
    YourCar.capacity=500;
    YourCar.millage=465.48;
    return 0;

}
