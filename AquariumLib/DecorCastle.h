/**
 * @file DecorCastle.h
 * @author Rajaditya Shrikishan Bajaj
 *
 * The class that adds and takes care of the
 * castle
 */

#ifndef AQUARIUM_DECORCASTLE_H
#define AQUARIUM_DECORCASTLE_H

#include "Item.h"

/**
 * Class that takes care of the castle.
 */
class DecorCastle : public Item {
private:

public:
    /// Default constructor (disabled)
    DecorCastle() = delete;

    /// Copy constructor (disabled)
    DecorCastle(const DecorCastle &) = delete;

    DecorCastle(Aquarium* aquarium);

/// Assignment operator
    void operator=(const DecorCastle &) = delete;

    wxXmlNode* XmlSave(wxXmlNode* node) override;
};

#endif //AQUARIUM_DECORCASTLE_H
