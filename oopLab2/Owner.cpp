//
//  Owner.cpp
//  oopLab2
//
//  Created by Dima's mac on 09.05.2022.
//

#pragma once

#include <stdio.h>
#include <iostream>
#include "Date.cpp"
using namespace std;

class Owner
{
private:
    string name;
    string surname;
    Date bday;
    
public:
    //default constructor
    Owner()
    {
        name = "default";
        surname = "default";
        bday = Date(0,0,0);
    }
    
    //constructor
    Owner(string nname, string ssurname, Date bbday)
    {
        name = nname;
        surname = ssurname;
        bday = bbday;
    }
    
    
    //copy
    Owner(const Owner &owner)
    {
        name = owner.name;
        surname = owner.surname;
        bday = owner.bday;
    }
    
    //destructor
    ~Owner() {};
    
    //selectors
    string GetName()
    {
        return name;
    }
    
    string GetSurname()
    {
        return surname;
    }
    
    Date GetBday()
    {
        return bday;
    }
    
    //see data
    void SeeOwner()
    {
        cout<<"The name is "<<name<<", The surname is "<<surname<<", Birthday ";
        bday.SeeDate();
    }
    
    //modidicators
    Owner *NewName(string nname)
    {
        name = nname;
        return this;
    }
    
    Owner *NewSurname(string ssurname)
    {
        surname = ssurname;
        return this;
    }
    
    Owner *NewBday(Date date)
    {
        bday = date;
        return this;
    }
};
