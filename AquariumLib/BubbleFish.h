/**
 * @file BubbleFish.h
 * @author Rajaditya Shrikishan Bajaj
 *
 * The class that represents the Bubble Fish
 */

#ifndef AQUARIUM_BUBBLEFISH_H
#define AQUARIUM_BUBBLEFISH_H

#include "Item.h"
#include <memory>
#include "Fish.h"

/**
 * Class representing Bubble fish
 */
class BubbleFish : public Fish {
private:

public:
    /// Default constructor (disabled)
    BubbleFish() = delete;

    /// Copy constructor (disabled)
    BubbleFish(const BubbleFish &) = delete;

/// Assignment operator
    void operator=(const BubbleFish &) = delete;

    BubbleFish(Aquarium* aquarium);

    wxXmlNode* XmlSave(wxXmlNode* node) override;

};

#endif //AQUARIUM_BUBBLEFISH_H
