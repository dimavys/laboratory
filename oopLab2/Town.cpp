//
//  Town.cpp
//  oopLab2
//
//  Created by Dima's mac on 09.05.2022.


#include <stdio.h>
#include <iostream>
#include "Place.cpp"
using namespace std;

class Town
{
private:
    int townNumber;
    int placesAmount;
    Place *places;
    
public:
    static int TownsAmount;
    //default constructor
    Town()
    {
        TownsAmount++;
        townNumber = TownsAmount;
        placesAmount = 1;
        places = new Place[placesAmount];
        places[0] = Place();
    }
    
    //Constructor
    Town(int amount, Place *pplaces)
    {
        TownsAmount++;
        townNumber = TownsAmount;
        placesAmount = amount;
        places = new Place[placesAmount];
        for (int i = 0; i < placesAmount; i++)
            places[i] = pplaces[i];
    }
    
    //copy
    Town(Town &town)
    {
        townNumber = town.townNumber;
        placesAmount = town.placesAmount;
        places = new Place[placesAmount];
        for (int i =0; i < placesAmount; i++)
            places[i] = town.places[i];
    }
    
    //destructor
    ~Town()
    {
        delete[]places;
        TownsAmount--;
    };
    
//    void deletePlace(int i)
//    {
//        placesAmount--;
//        Place *test = new Place[placesAmount];
//        for (int i =0; i < placesAmount +1; i++)
//        {
//            if (places[i] != test[i])
//                
//        }
//        places = new Place[placesAmount];
//    }
    //selectors
    int GetTownsAmount()
    {
        return TownsAmount;
    }
    
    int GetTownNumber()
    {
        return townNumber;
    }
    
    Place * GetPlaces()
    {
        return  places;
    }
    
    //see data
    void SeeData()
    {
        cout<<"Towns amount "<<TownsAmount<<endl;
        cout<<"Town number "<<townNumber<<endl;
        cout<<"Info about all places"<<endl;
        for (int i = 0; i < placesAmount; i++)
        {
            places[i].SeePlace();
            cout<<endl;
        }
           
    }
    
    void SeeShortData()
    {
        cout<<"The number is "<<townNumber<<endl;
    }
    
    //modificators
    Town *NewPlaces(Place * pplaces, int size)
    {
        placesAmount = size;
        places = new Place[placesAmount];
        for (int i =0; i < size; i++)
             places[i] = pplaces[i];
        return this;
    }
    
    Town *NewPlacesAmount(int size)
    {
        placesAmount = size;
        return this;
    }
};

