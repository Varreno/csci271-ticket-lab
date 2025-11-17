//
// YOur comments here...
//

#include "Show.h"

std::string Show::getTitle() {
    return title;
}
std::string Show::getVenue() {
    return venue;
}
int Show::getShowTime() {
    return showTime;
}
void Show::setTitle(std::string newTitle) {
    this->title = newTitle;
}
void Show::setVenue(std::string newVenue) {
    this->venue = newVenue;
}
void Show::setShowTime(int newShowTime) {
    showTime = newShowTime;
}



