#include <Arduino.h>
#include "config.h"
#include <math.h>
#include "helper.h"
#include <vector>

using namespace std;

const double pi = 3.14159265359;
const double r = CISTERN_HEIGHT / 2.0;

double getAlpha(int h){
  double dH = (double)(h);
  double cosAkHptn = (r-dH)/dH;
  double alpha = (2*acos((r-dH)/r));
  return alpha;
  }

double getSurface(int iH){
  double h = (double)iH;
  double surface;
  // formula for surface
  if (CISTERN_FORM == "cylindric")
  {
  //A=r²/2 * (alpha(rad) sin alpha(rad))
  double alpha = getAlpha(iH);
  surface = r*r/2 * (alpha - sin(alpha));
  }
  else if (CISTERN_FORM == "cuboid") {
  surface = CISTERN_WIDTH * iH;
  }
  return surface;
  }

int getVolume(double surface){
  double volume = (surface*CISTERN_LENGTH/1000.0);
  return (int)volume;
  }

int getLevel(int volume, double maxVolume){
  int level = (int)(maxVolume - volume);
  return level;
  }

double levelPercent(int level, double maxVolume){
  double percent = (double)level / maxVolume *100.0;
  return percent;
  }
