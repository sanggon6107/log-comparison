#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <regex>
#include <unordered_map>
#include <iterator>

enum KeyVal {KEY = 0 , VALUE = 1};

#define MARGIN_OF_ERROR 0.00001

using namespace std;


using Table = vector<vector<string>>;