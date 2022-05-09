//
//  Place.cpp
//  oopLab2
//
//  Created by Dima's mac on 09.05.2022.
//

#pragma once

#include <stdio.h>
#include <iostream>
#include "Description.cpp"
#include "Owner.cpp"
#include "Purpose.cpp"

using namespace std;

class Place
{
private:
    Owner owner;
    Description desc;
    Purpose purp;
    double price;
    
public:
    // default constructor
    Place()
    {
        owner = Owner();
        desc = Description();
        purp = reserved;
        price = 0;
    }
    
    //constructor
    Place (Owner oowner, Description ddesc, Purpose ppurp, double pprice)
    {
        owner = oowner;
        desc = ddesc;
        purp = ppurp;
        price = pprice;
    }
    
    //copy
    Place (const Place &place)
    {
        owner = place.owner;
        desc = place.desc;
        purp = place.purp;
        price = place.price;
    }
    
    //destructor
    ~Place()
    {
        
    }
    
    //selectors
    Owner GetOwner()
    {
        return owner;
    }
    
    Description GetDescription()
    {
        return desc;
    }
    
    Purpose GetPurpose()
    {
        return purp;
    }
    
    // see data
    void SeePlace()
    {
        owner.SeeOwner();
        desc.SeeDescription();
        cout<<"The purpose is "<<purp<<endl;
        cout<<"The price is "<<price<<endl;
    }
    
    //See short data
    void SeeShortData()
    {
        cout<<"The surname of owner is "<<owner.GetSurname()<<endl;
        cout<<"The price of the place is "<<price<<endl;
    }
    
    //modificators
    Place *NewOwner(Owner oowner)
    {
        owner = oowner;
        return this;
    }
    
    Place *NewDescription(Description ddesc)
    {
        desc = ddesc;
        return this;
    }
    
    Place *NewPurpose(Purpose ppurp)
    {
        purp = ppurp;
        return this;
    }
};

