/**
 * @file FishBeta.h
 * @author Rajaditya Shrikishan Bajaj
 *
 * The class that represents the Beta Fish
 */

#ifndef AQUARIUM_FISHBETA_H
#define AQUARIUM_FISHBETA_H

#include <memory>
#include "Item.h"
#include "Fish.h"

/**
 * Class representing Beta fish
 */
class FishBeta : public Fish {
private:

public:
    /// Default constructor (disabled)
    FishBeta() = delete;

    /// Copy constructor (disabled)
    FishBeta(const FishBeta &) = delete;

    /// Assignment operator
    void operator=(const FishBeta &) = delete;

    explicit FishBeta(Aquarium* aquarium);

    wxXmlNode* XmlSave(wxXmlNode* node) override;

};

#endif //AQUARIUM_FISHBETA_H
