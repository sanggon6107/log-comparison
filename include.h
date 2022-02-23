#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <regex>
#include <unordered_map>
#include <iterator>

enum class KeyVal : int {KEY = 0 , VALUE = 1};

using namespace std;


using Table = vector<vector<string>>;