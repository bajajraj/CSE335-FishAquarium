/**
 * @file FishAngleTest.cpp
 * @author Rajaditya Shrikishan Bajaj
 */

#include <pch.h>
#include "gtest/gtest.h"
#include <Aquarium.h>
#include <AngelFish.h>

TEST(FishAngleTest, Construct) {
    Aquarium aquarium;
    AngelFish fish_angle(&aquarium);
}
