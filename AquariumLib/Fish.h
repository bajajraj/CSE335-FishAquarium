/**
 * @file Fish.h
 * @author Rajaditya Shrikishan Bajaj
 *
 *
 */

#ifndef AQUARIUM_FISH_H
#define AQUARIUM_FISH_H

#include "Item.h"

/**
 * Base class for a fish
 * This applies to all of the fish, but not the decor
 * items in the aquarium.
 */
class Fish : public Item {
protected:
    Fish(Aquarium* aquarium, const std::wstring& filename);

private:
    /// Fish speed in the X direction
    /// in pixels per second
    double mSpeedX;

    /// Fish speed in the Y direction
    /// in pixels per second
    double mSpeedY;



public:
    /// Default constructor (disabled)
    Fish() = delete;

    /// Copy constructor (disabled)
    Fish(const Fish &) = delete;

/// Assignment operator
    void operator=(const Fish &) = delete;

    void Update(double elapsed) override;

    wxXmlNode* XmlSave(wxXmlNode* node) override;

    void XmlLoad(wxXmlNode* node) override;

    /**
     * Sets the speed of the speed.
     * @param x X speed
     * @param y Y speed
     */
    virtual void SetSpeed(double x, double y) {mSpeedX = x; mSpeedY = y;}

};

#endif //AQUARIUM_FISH_H
