#pragma once

#include <string>

using std::string;

namespace CBLib {
    namespace Web {

    enum class WebElementTagType {
        none,
        html,
        head,
        title,
        body,
        p
    };

    class WebElement {
        public:
            WebElement(WebElementTagType type, string payload_in);
            WebElementTagType get_tag_type();
            string& get_payload();
        private:
            WebElementTagType element_type;
            string payload;
    };

    };

};

using namespace CBLib::Web;