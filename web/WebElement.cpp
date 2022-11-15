#include "WebElement.h"

WebElement::WebElement(WebElementTagType type, string payload_in) :
    element_type(type),
    payload(payload_in)
{}

WebElementTagType WebElement::get_tag_type() {
    return element_type;
}

string& WebElement::get_payload() {
    return payload;
}
