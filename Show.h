// Patrick Donaghy
// CSCI-271
// November 16th, 2025
//This is simply a copy of the header file you provded to us in the lab.
#ifndef FIRSTSTRUCT_SHOW_H
#define FIRSTSTRUCT_SHOW_H

#include <string>

/**
 * @struct Show
 * @brief Holds data for a show, enforcing data hiding.
 *
 * This struct uses private members and public accessor/mutator
 * methods to control how data is accessed and modified.
 * The method implementations will be in Show.cpp.
 */
struct Show {
private:
    std::string title;
    std::string venue;
    int showTime; // e.g., 1930 for 7:30 PM

public:
    // --- Accessors (Getters) ---
    // These methods RETURN the value of private members
    std::string getTitle();
    std::string getVenue();
    int getShowTime();

    // --- Mutators (Setters) ---
    // These methods SET the value of private members
    void setTitle(std::string newTitle);
    void setVenue(std::string newVenue);
    void setShowTime(int newShowTime);
};

#endif //FIRSTSTRUCT_SHOW_H
