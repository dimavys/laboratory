//
//  Description.cpp
//  oopLab2
//
//  Created by Dima's mac on 09.05.2022.
//

#pragma once

#include <stdio.h>
#include <iostream>

using namespace std;

class Description
{
private:
    int level;
    int type;
    int c_size;
    int * coord;
    
public:
    //default consctructor
    Description()
    {
        level = 0;
        type = 0;
        c_size = 1;
        coord = new int[c_size];
        coord[0] = 1;
    }
    
    //constructor
    Description (int llevel, int ttype, int cc_size, int * ccoord)
    {
        level = llevel;
        type = ttype;
        c_size = cc_size;
        coord = new int[c_size];
        for (int i = 0; i< cc_size; i++)
            coord[i] = ccoord[i];
    }
    
    // copying
    Description(const Description &desc)
    {
        level = desc.level;
        type = desc.type;
        c_size = desc.c_size;
        coord = new int[c_size];
        for (int i = 0; i < c_size;i++)
            coord[i] = desc.coord[i];
    }
    
    //destructor
    ~Description()
    {
    }
    
    // selectors
    int GetLevel()
    {
        return level;
    }
    
    int GetType()
    {
        return type;
    }
    
    int * GetCoord()
    {
        return coord;
    }
    
    // See data
    void SeeDescription()
    {
        cout<<"Level "<<level<<", type "<<type<<endl;
        cout<<"Coordinates:"<<endl;
        for (int i = 0; i< c_size; i++)
            cout<<coord[i]<<endl;
    }
    
    //modificators
    Description *NewLevel(int llevel)
    {
        level = llevel;
        return this;
    }
    
    Description *NewType(int ttype)
    {
        type = ttype;
        return this;
    }
    
    Description *NewCoord(int * ccoord, int cc_size)
    {
        c_size = cc_size;
        coord = new int[c_size];
        for (int i = 0; i < c_size; i++)
            coord[i] = ccoord[i];
        return this;
    }
};
