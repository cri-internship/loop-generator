#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(790, "zeros");
	float **A = create_two_dim_float(810, 610, "zeros");

	for (int d = 2; d < 607; d++)
	  for (int c = 2; c < 790; c++)
	    for (int b = 2; b < 790; b++)
	      for (int a = 2; a < 790; a++)
	      {
	        
	       A[a][b]=A[a-1][b]*B[a];
	        
	       B[a]=0.576;
	       float  var_a=B[a]*0.176;
	        
	       A[a][b]=A[a+1][b+3]/0.255;
	        
	       B[a]=A[a][b];
	        
	       float var_b=A[a][b]/0.729;
	       float var_c=A[a+3][b+2]*0.053;
	      }

    return 0;
}