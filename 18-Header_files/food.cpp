#include "food.h"

const char* recommendFruit(char firstLetter){
    if ( firstLetter == 'a' || firstLetter == 'A'){
        return "apple";
    }

    return "Unknown";
}