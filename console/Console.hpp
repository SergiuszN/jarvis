#ifndef CLASS_CONSOLE
#define CLASS_CONSOLE

#define BUFFER_MAX_SIZE        4096
#define READ                   "r"
#define WRITE                  "w"
#define EMPTY_STRING           ""

#include <iostream>
#include <stdio.h>
#include <fstream>

class Console{
  private:
    std::string command;
    std::string result;

  public:
    Console();
    Console(std::string command);
    ~Console();

    std::string runCommand();

    void setCommand(std::string command);
    std::string getCommand();
    void setResult(std::string result);
    std::string getResult();
};

#endif //CLASS_CONSOLE
