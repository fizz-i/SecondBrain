#include <string>

namespace log_line {
std::string message(std::string line) {
    size_t colon_pos {line.find(":")};
    size_t start_message {colon_pos+2};
    return line.substr(start_message);
    // return the message
}

std::string log_level(std::string line) {
    size_t bracket_start_pos {line.find("[")};
    size_t bracket_end_pos {line.find("]")};
    return line.substr(bracket_start_pos+1,bracket_end_pos-1);
    
    // return the log level
}

std::string reformat(std::string line) {
    std::string msg {message(line)};
    std::string logLevel {log_level(line)};
    return msg + " " + "("+logLevel+")";
    // return the reformatted message
}
}  // namespace log_line
