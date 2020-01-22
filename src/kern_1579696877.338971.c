#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(780, "zeros");
	double *C = create_one_dim_double(120, "zeros");
	double *A = create_one_dim_double(590, "zeros");
	double *E = create_one_dim_double(810, "zeros");
	double *B = create_one_dim_double(910, "zeros");

	for (int d = 2; d < 775; d++)
	  for (int c = 2; c < 775; c++)
	    for (int b = 2; b < 775; b++)
	      for (int a = 2; a < 775; a++)
	      {
	        
	       B[a]=0.164;
	       float  var_a=B[a]-0.812;
	        
	       E[a]=E[a+5]-0.724;
	        
	       E[a]=E[a+4]*A[a]-D[a]+B[a]/0.896;
	        
	       D[a]=E[a];
	       D[a+5]=E[a];
	        
	       B[a]=0.296;
	        
	       double var_b=B[a]/0.689;
	       double var_c=B[a-2]*0.233;
	      }

    return 0;
}