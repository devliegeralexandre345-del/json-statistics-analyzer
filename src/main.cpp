#include <iostream>
#include "json_parser.h"

int main() {
    const char* sample_json = R"({"data": [1, 2, 3, 4, 5]})";
    auto stats = json_stat::JsonParser::parseAndAnalyze(sample_json);
    std::cout << "Mean: " << stats.mean << "\n";
    return 0;
}
