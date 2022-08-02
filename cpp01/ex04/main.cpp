// Copyright 2022 decordel

#include "MySed.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 4)
        return 1;
    MySed::createReplaceFile(argv[1], argv[2], argv[3]);
    return 0;
}

