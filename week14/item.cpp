#include "item.h"

// in c++, the first enum value is 0, then counts up.
enum location = { GREATHALL, DUNGEON, COURTYARD, MARKET };

item::item() {
    cout << "Creating a new item!\n";
    location = MARKET;              // set the default location for items
}