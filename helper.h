#ifndef CISTERN-NODEMCU-ECHO-WATERLEVEL-OVERMQTT_H
#define CISTERN-NODEMCU-ECHO-WATERLEVEL-OVERMQTT_H
#include <Arduino.h>
#include "config.h"
#include <vector>

using namespace std;

double getAlpha(int h);
double getSurface(int iH);
int getVolume(double surface);
int getLevel(int volume, double maxVolume);
double levelPercent(int level, double maxVolume);
#endif
