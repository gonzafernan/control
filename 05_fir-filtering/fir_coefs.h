/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 8.3 and the Signal Processing Toolbox 6.21.
 * Generated on: 03-Apr-2018 12:01:31
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 51
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Type              : Passband from 330 Hz to 3400 Hz.
 * Fs                : 10,000 Hz
 * Window            : Kaiser, beta = 7.5
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * /opt/MATLAB/R2014a/extern/include/tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   single-precision filter coefficients.
 */
const int M = 51;
const real32_T fir_coef_f[51] = {
  4.747933417e-05,0.0002209974045,5.984198197e-06,0.0004068125563, 0.001017148606,
  -0.000376891403, 0.001026162994, 0.002013895428,-0.002738813404,0.0009758052183,
   0.001483160886, -0.01025483012,-0.001386111369,-0.003266432788, -0.02669262886,
  -0.006469275802, -0.01383799221, -0.05462813005,-0.009773447178, -0.02839115821,
   -0.09731961042, 0.006252767984, -0.04141194373,  -0.1981104016,   0.2079431862,
     0.6199865937,   0.2079431862,  -0.1981104016, -0.04141194373, 0.006252767984,
   -0.09731961042, -0.02839115821,-0.009773447178, -0.05462813005, -0.01383799221,
  -0.006469275802, -0.02669262886,-0.003266432788,-0.001386111369, -0.01025483012,
   0.001483160886,0.0009758052183,-0.002738813404, 0.002013895428, 0.001026162994,
  -0.000376891403, 0.001017148606,0.0004068125563,5.984198197e-06,0.0002209974045,
  4.747933417e-05
};

// Q0.15
const int16_T fir_coef_16b[51] = {
        2,      7,      0,     13,     33,    -12,     34,     66,    -90,
       32,     49,   -336,    -45,   -107,   -875,   -212,   -453,  -1790,
     -320,   -930,  -3189,    205,  -1357,  -6492,   6814,  20316,   6814,
    -6492,  -1357,    205,  -3189,   -930,   -320,  -1790,   -453,   -212,
     -875,   -107,    -45,   -336,     49,     32,    -90,     66,     34,
      -12,     33,     13,      0,      7,      2
};