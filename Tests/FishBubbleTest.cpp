/**
 * @file FishBubbleTest.cpp
 * @author Rajaditya Shrikishan Bajaj
 */

#include <pch.h>
#include "gtest/gtest.h"
#include <Aquarium.h>
#include <BubbleFish.h>

TEST(FishBubbleTest, Construct) {
    Aquarium aquarium;
    BubbleFish fish_bubble(&aquarium);
}
