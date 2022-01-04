/**
 * @file BubbleFish.cpp
 * @author Rajaditya Shrikishan Bajaj
 */

#include "pch.h"

#include "Item.h"
#include <string>
#include "BubbleFish.h"
#include "Aquarium.h"

using namespace std;

/// Maximum speed in the X direction in
/// in pixels per second
const double MaxSpeedX = 20;

/// Minimum speed in the X direction in
/// pixels per second
const double MinSpeedX = 10;

/// Maximum speed in the Y direction in
/// in pixels per second
const double MaxSpeedY = 10;

/// Minimum speed in the Y direction in
/// pixels per second
const double MinSpeedY = 5;

/// Fish filename
const wstring FishBubbleFish = L"images/bubbles.png";

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
BubbleFish::BubbleFish(Aquarium *aquarium) : Fish(aquarium, FishBubbleFish)
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
wxXmlNode* BubbleFish::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);
    itemNode->AddAttribute(L"type", L"bubble");

    return itemNode;
}