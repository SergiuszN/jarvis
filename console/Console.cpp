#include "Console.hpp"

Console::Console()
{
  this->setCommand(EMPTY_STRING);
  this->setCommand(EMPTY_STRING);
}

Console::Console(std::string command)
{
  this->setCommand(command);
  this->setResult(EMPTY_STRING);
}

Console::~Console()
{
}

std::string Console::runCommand()
{
  FILE *fp;
  char buffer[BUFFER_MAX_SIZE];
  std::string result = EMPTY_STRING;
  std::string mode;

  mode = READ;
  fp = popen(this->getCommand().c_str(), mode.c_str());

  if (fp == NULL){
    //Error massage
    std::cout << "Command can't be execute" << std::endl;
    return EMPTY_STRING;
  }

  while (fgets(buffer, BUFFER_MAX_SIZE, fp) != NULL)
    result += buffer;

  pclose(fp);

  this->setResult(result);
  this->setCommand(EMPTY_STRING);

  return result;

}

// ************************************* GET\SET ****************************************

void Console::setCommand(std::string command)
{
  this->command = command;
}

std::string Console::getCommand()
{
  return this->command;
}

void Console::setResult(std::string result)
{
  this->result = result;
}

std::string Console::getResult()
{
  return this->result;
}
