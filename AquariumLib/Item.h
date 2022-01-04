/**
 * @file Item.h
 * @author Rajaditya Shrikishan Bajaj
 *
 * Base class for any item in our aquarium.
 */

#ifndef AQUARIUM_ITEM_H
#define AQUARIUM_ITEM_H

#include <memory>
#include <wx/filename.h>
#include <wx/xml/xml.h>

class Aquarium;

/**
 * Base class for any item in our aquarium.
 */
class Item {
protected:
    /// pointer to the aquarium builder for the items we would add in aquarium.
    Item();

    Item(Aquarium* aquarium, const std::wstring& filename);

    /// The underlying fish image
    std::unique_ptr<wxImage> mItemImage;

    /// The bitmap we can display for this fish
    std::unique_ptr<wxBitmap> mItemBitmap;
private:
    /// The aquarium this item is contained in
    Aquarium *mAquarium;

    // Item location in the aquarium
    double  mX = 0;     ///< X location for the center of the item
    double  mY = 0;     ///< Y location for the center of the item

    bool mMirror = false;   ///< True mirrors the item image

public:
    virtual ~Item();

    /// Copy constructor (disabled)
    Item(const Item &) = delete;

    /// Assignment operator
    void operator=(const Item &) = delete;

    /**
     * The X location of the item
     * @return X location in pixels
     */
    double GetX() const { return mX; }

    /**
     * The Y location of the item
     * @return Y location in pixels
     */
    double GetY() const { return mY; }

    /**
     * Set the item location
     * @param x X location in pixels
     * @param y Y location in pixels
     */
    virtual void SetLocation(double x, double y) { mX = x; mY = y; }

    void Draw(wxDC *dc);

    bool HitTest(int x, int y);

    virtual wxXmlNode * XmlSave(wxXmlNode *node);

    virtual void XmlLoad(wxXmlNode* node);

    /**
     * Handle updates for animation
     * @param elapsed The time since the last update
     */
    virtual void Update(double elapsed) {}

    /**
     * Get the pointer to the Aquarium object
     * @return Pointer to Aquarium object
     */
    Aquarium *GetAquarium() { return mAquarium;  }

    void SetMirror(bool m);
};

#endif //AQUARIUM_ITEM_H
