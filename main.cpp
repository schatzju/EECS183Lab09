//
//  main.cpp
//  ClassesAdditionalPractice
//
//  Created by Jule Schatz on 11/10/20.
//  Copyright © 2020 Jule Schatz. All rights reserved.
//

#include <iostream>
#include "Car.hpp"
#include "Dealership.hpp"


int transferGreenCars(Car cars[], int size, Car greenCars[]){
    
    //declare a variable to keep track of the green cars count
    int greenCarsCount = 0;
    
    //loop through the cars array using size
    for(int i = 0; i < size; i++){
        //check if the current car is green
        if(cars[i].color == "green"){
            //if the car is green add it to greenCars and add one to the count
            greenCars[greenCarsCount] = cars[i];
            greenCarsCount++;
        }
    }
    
    return greenCarsCount;
}
void addGreenCars(Dealership &dealer_in, Car cars[], int size){
    //create an empty array of size size
    Car greenCars[size];
    //call the function from Classes Additional Practice Part 2 question 11
    int greenCarsSize = transferGreenCars(cars, size, greenCars);
    
    //loop through the array with all the green cars
    //add each car to the dealership object passed in
    for(int i = 0; i < greenCarsSize; i++){
        dealer_in.addCar(greenCars[i]);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...

    Car car1("ford", "blue", 0);
    Car car2("toyota", "green", 0);
    Car car3("ford", "green", 0);

    //create a Car array of size three with the three cars
    Car cars[] = {car1, car1, car1};


}
