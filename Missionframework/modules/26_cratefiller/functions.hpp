/*
    KP LIBERATION MODULE FUNCTIONS

    File: functions.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2019-04-05
    Last Update: 2019-04-07
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
        Defines for all functions, which are brought by this module.
*/

class cratefiller {
    file = "modules\26_cratefiller\fnc";

    // Adds the given amount of the selected item to the inventory
    class cratefiller_addEquipment {};

    // Changes the shown equipment category
    class cratefiller_createEquipmentList {};

    // Creates a list with valueable magazines or attachments
    class cratefiller_createSubList {};

    // Deletes the selected preset
    class cratefiller_deletePreset {};

    // Exports the active inventory
    class cratefiller_export {};

    // Gets all inventory items of the storage
    class cratefiller_getInventory {};

    // Gets the config path / type of the given classname
    class cratefiller_getConfigPath {};

    // Scans the fob for possible storages
    class cratefiller_getNearStorages {};

    // Returns the active storage
    class cratefiller_getStorage {};

    // Imports the selected inventory
    class cratefiller_import {};

    // Opens the cratefiller dialog
    class cratefiller_openDialog {};

    // Module post initialization
    class cratefiller_postInit {
        postInit = 1;
    };

    // Module pre initialization
    class cratefiller_preInit {
        preInit = 1;
    };

    // Creates the different categories of the whitelisted items
    class cratefiller_presets {};

    // Removes the given amount of the selected item from the storage
    class cratefiller_removeEquipment {};

    // Adds the items to the active storage
    class cratefiller_setInventory {};

    // CBA Settings for this module
    class cratefiller_settings {};

    // Displays the items of the active storage
    class cratefiller_showInventory {};

    // Reads all saved presets and lists them
    class cratefiller_showPresets {};

    // Sorts the displaynames of the given item array
    class cratefiller_sortList {};
};