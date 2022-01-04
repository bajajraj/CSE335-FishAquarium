/**
 * @file FishBeta.cpp
 * @author Rajaditya Shrikishan Bajaj
 */

#include "pch.h"

#include "FishBeta.h"
#include "Aquarium.h"
#include <string>

using namespace std;

/// Maximum speed in the X direction in
/// in pixels per second
const double MaxSpeedX = 60;

/// Minimum speed in the X direction in
/// pixels per second
const double MinSpeedX = 50;

/// Maximum speed in the Y direction in
/// in pixels per second
const double MaxSpeedY = 20;

/// Minimum speed in the Y direction in
/// pixels per second
const double MinSpeedY = 15;


/// Fish filename
const wstring FishBetaImageName = L"images/beta.png";

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
FishBeta::FishBeta(Aquarium *aquarium) : Fish(aquarium, FishBetaImageName)
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
wxXmlNode* FishBeta::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);
    itemNode->AddAttribute(L"type", L"beta");

    return itemNode;
}