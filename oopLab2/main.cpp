//
//  main.cpp
//  oopLab2
//
//  Created by Dima's mac on 09.05.2022.
//У тестовому прикладі створити об’єкти типу «Населений пункт» відповідно
//загальним вимогам і вивести інформацію про них у повному та скороченому
//вигляді. З одного населеного пункту видалити одну земельну ділянку, після
//чого вивести повну інформацію про цей пункт.

#include <iostream>
#include "Date.cpp"
#include "Owner.cpp"
#include "Purpose.cpp"
#include "Description.cpp"
#include "Place.cpp"
#include "Town.cpp"

int Town::TownsAmount = 0;

int main() {
    Date *b1 = new Date(7,5,1970);
    Date *b2 = new Date(9,4,2003);
    Date *b3 = new Date(18,4,1950);
    Date *b4 = new Date(19,9,2002);
        
    Owner *o1 = new Owner("Mike","Boyd",*b1);
    Owner *o2 = new Owner("Dmitriy","Vysotskyy",*b2);
    Owner *o3 = new Owner("Optimus","Prime",*b3);
    Owner *o4 = new Owner("Ben","Ten",*b4);
        
    int * arr1 = new int[3];
    int * arr2 = new int[3];
    int * arr3 = new int[3];
    int * arr4 = new int[3];
        
    for(int i =0; i < 3; i++)
    {
        arr1[i] = i+1;
        arr2[i] = i+3;
        arr3[i] = i;
        arr4[i] = i+2;
    }
    
    Description *d1 = new Description(1,1,3,arr1);
    Description *d2 = new Description(2,2,3,arr2);
    Description *d3 = new Description(3,3,3,arr3);
    Description *d4 = new Description(4,4,4,arr4);
        
    Place *p1 = new Place(*o1,*d1,reserved,1000);
    Place *p2 = new Place(*o2,*d2,under_construction,2000);
    Place *p3 = new Place(*o3,*d3,agricultural,3000);
    Place *p4 = new Place(*o4,*d4,under_construction,4000);
        
    Place * places1 = new Place[2];
    Place * places2 = new Place[2];
        
    places1[0] = *p1;
    places1[1] = *p2;
    places2[0] = *p3;
    places2[1] = *p4;
    
    Town *Kyiv = new Town(2,places1);
//    Town *NewYork = new Town(2,places2);
    
    Kyiv->SeeData();
    delete p1;
    Kyiv->SeeData();
    
    return 0;
}
