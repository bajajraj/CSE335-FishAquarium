/**
 * @file AngelFish.h
 * @author Rajaditya Shrikishan BAjaj
 *
 * The class that represents the Angel Fish
 */

#ifndef AQUARIUM_ANGELFISH_H
#define AQUARIUM_ANGELFISH_H

#include "Item.h"
#include "Fish.h"

/**
 * Class representing angel fish
 */
class AngelFish : public Fish {
private:

public:
    /// Default constructor (disabled)
    AngelFish() = delete;

    /// Copy constructor (disabled)
    AngelFish(const AngelFish &) = delete;

    /// Assignment operator
    void operator=(const AngelFish &) = delete;

    AngelFish(Aquarium* aquarium);

    wxXmlNode* XmlSave(wxXmlNode* node) override;

};

#endif //AQUARIUM_ANGELFISH_H
