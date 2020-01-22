#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(290, 210, "random");
	float ***B = create_three_dim_float(720, 950, 830, "random");

	for (int b = 4; b < 205; b++)
	  for (int a = 4; a < 287; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-4][a-4]+0.266;
	    
	     A[a][b]=A[a][b+5]*B[a][b][a];
	    
	     B[a][b][a]=A[a][b];
	    
	     float var_a=A[a][b]*0.807;
	     float var_b=A[a+3][b+3]*0.029;
	  }

    return 0;
}