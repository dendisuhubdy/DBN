//
//  SupportMath.h
//  DBN
//
//  Created by Devon Hjelm on 7/19/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef DBN_SupportMath_h
#define DBN_SupportMath_h
#include "gsl/gsl_vector.h"
#include <math.h>
#include "Types.h"

float sigmoid(float x);
double softplus(double x);
float gaussian(float x);
float csoftmax(double x);

float sampleNormalDist(float mu, float sigma);
#endif
