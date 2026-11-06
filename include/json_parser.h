#pragma once
#include <string>
#include <vector>
#include <map>

namespace json_stat {
    struct Statistics {
        double mean = 0.0;
        double median = 0.0;
        double std_dev = 0.0;
        int count = 0;
    };

    class JsonParser {
    public:
        static Statistics parseAndAnalyze(const std::string& json_data);
    };
}
