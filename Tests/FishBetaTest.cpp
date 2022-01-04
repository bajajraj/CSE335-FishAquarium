/**
 * @file FishBetaTest.cpp
 * @author Rajaditya Shrikishan Bajaj
 */

#include <pch.h>
#include "gtest/gtest.h"
#include <Aquarium.h>
#include <FishBeta.h>

TEST(FishBetaTest, Construct) {
    Aquarium aquarium;
    FishBeta fish_beta(&aquarium);
}
