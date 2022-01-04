/**
 * @file AngelFish.cpp
 * @author Rajaditya Shrikishan Bajaj
 */

#include "pch.h"

#include <string>
#include "Fish.h"
#include "AngelFish.h"
#include "Aquarium.h"

using namespace std;

/// Maximum speed in the X direction in
/// in pixels per second
const double MaxSpeedX = 200;

/// Minimum speed in the X direction in
/// pixels per second
const double MinSpeedX = 190;

/// Maximum speed in the Y direction in
/// in pixels per second
const double MaxSpeedY = 50;

/// Minimum speed in the Y direction in
/// pixels per second
const double MinSpeedY = 45;

/// Fish filename
const wstring FishAngelFish = L"images/angelfish.png";

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
AngelFish::AngelFish(Aquarium *aquarium) : Fish(aquarium, FishAngelFish)
{
    std::uniform_real_distribution<> distributionX(MinSpeedX, MaxSpeedX);
    double SpeedX = distributionX(aquarium->GetRandom());

    std::uniform_real_distribution<> distributionY(MinSpeedY, MaxSpeedY);
    double SpeedY = distributionY(aquarium->GetRandom());

    Fish::SetSpeed(SpeedX,SpeedY);
}

/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* AngelFish::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);
    itemNode->AddAttribute(L"type", L"angel");

    return itemNode;
}


