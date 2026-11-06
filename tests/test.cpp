#include <iostream>
#include "json_parser.h"

int main() {
    const char* sample_json = R"({"data": [1, 2, 3, 4, 5]})";
    auto stats = json_stat::JsonParser::parseAndAnalyze(sample_json);
    
    if (stats.mean == 3.0 && stats.count == 5) {
        std::cout << "Test passed!\n";
        return 0;
    } else {
        std::cerr << "Test failed!\n";
        return 1;
    }
}
