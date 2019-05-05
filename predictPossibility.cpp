//
//  predictPossibility.cpp
//  connect4
//
//  Created by richen98 on 5/4/19.
//  Copyright © 2019 richen98. All rights reserved.
//

#include "predictPossibility.hpp"

predictPossibility::predictPossibility(){
    this->col = 0;
    this->plus = 0;
    this->minus = 0;
    this->total = this->plus - this->minus;
}

void predictPossibility::setCol(int c){
    this->col = c;
}

void predictPossibility::setPlus(int p){
    this->plus = p;
}

void predictPossibility::setMinus(int m){
    this->minus = m;
}

int predictPossibility::getCol(){
    return this->col;
}

int predictPossibility::getPlus(){
    return this->plus;
}

int predictPossibility::getMinus(){
    return this->minus;
}

int predictPossibility::getTotal(){
    return this->total;
}

predictPossibility& predictPossibility::operator = (const predictPossibility& p){
    this->col = p.col;
    this->plus = p.plus;
    this->minus = p.minus;
    this->total = p.total;
    return *this;
}