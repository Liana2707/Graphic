#pragma once
#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;


string ChooseColorModel();
vector<float> EnterCoordinates(string model1, string model2);
void ShowResult(string model1, string model2, vector<float> coordinates);

vector<float> ConvertFromModelToModel(string model1, string model2, vector<float> coordinates);
vector<float> ConvertFromRGBToModel(string model2, vector<float> coordinates);
vector<float> ConvertFromModelToRGB(string model1, vector<float> coordinates);
