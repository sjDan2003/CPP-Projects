#include <iostream> // For cin and cout
#include <fstream>  // For ifstream and ofstream
#include <string>
#include <boost/filesystem.hpp>

void MoveFiles(std::string source_file_name, std::string destination_file_name);

void MoveFiles(std::string source_file_name, std::string destination_file_name) {

    // Try to open the source_file in binary mode, checking to make sure
    // that the file exists and it can be opened without error
    std::ifstream source_file_pointer(source_file_name, std::ifstream::in | std::ifstream::binary);

    if (source_file_pointer.is_open())
    {
        std::ofstream destination_file_pointer(destination_file_name, std::ofstream::out | std::ofstream::binary);
        if (destination_file_pointer.is_open()) {

            uintmax_t source_file_size = boost::filesystem::file_size(source_file_name);
            uint8_t binary_buffer[4096];
            for (uintmax_t curr_byte = 0; curr_byte < source_file_size; curr_byte += 4096){


            }
        }

    }

    source_file_pointer.close();
}

int main() {

    std::string test_file_path = "/home/sjdan2003/Downloads/DSC06000.JPG";
    std::cout << "File size is " << boost::filesystem::file_size(test_file_path) << "\n";
    return 0;
}