// Copyright 2022 decordel

#include <string>
#include <iostream>
#include <fstream>
#include "MySed.hpp"

void MySed::createReplaceFile(std::string file, std::string replace_line,
                              std::string new_line) {

    std::ifstream   in_file(file.c_str(), std::ifstream::in);
    if (!(in_file.good())) {
        std::cout << "file not exist\n";
        return;
    }
    std::cout << in_file;
    std::ofstream   out_file((file + ".replace").c_str(), std::ofstream::out);
    std::string     str_buf;

    while (!in_file.eof()) {
        std::getline(in_file, str_buf);
        char*   tmp = &str_buf[0];
        for (int i = 0; tmp[i]; i++) {
            int index_find_replace = std::string(tmp).find(replace_line);
            if (i == index_find_replace) {
                out_file << new_line;
                std::cout << new_line;
                tmp = &tmp[i + replace_line.length()];
                i = -1;
            } else {
                out_file << tmp[i];
                std::cout << tmp[i];
            }
        }
        if (!in_file.eof()) {
            out_file << std::endl;
            std::cout << std::endl;
        }
    }
    in_file.close();
    out_file.close();
}
