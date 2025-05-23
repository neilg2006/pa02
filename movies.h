#ifndef MOVIES_H
#define MOVIES_H
#include <string>
#include <map>

void sort(const std::string& filename, std::map<std::string, double>& movies);

void print(const std::map<std::string, double>& movies);

#endif
