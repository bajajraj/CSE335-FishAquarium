/**
 * @file DecorCastle.cpp
 * @author Rajaditya Shrikishan Bajaj
 */

#include "pch.h"

#include <string>
#include "Aquarium.h"
#include "DecorCastle.h"

using namespace std;

/// Fish filename
const wstring DecorCastleAdd = L"images/castle.png";

/**
 * Constructor
 * @param aquarium Aquarium this castle is a member of
 */
DecorCastle::DecorCastle(Aquarium *aquarium) : Item(aquarium, DecorCastleAdd)
{
}

/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* DecorCastle::XmlSave(wxXmlNode* node)
{
    auto itemNode = Item::XmlSave(node);
    itemNode->AddAttribute(L"type", L"castle");

    return itemNode;
}


