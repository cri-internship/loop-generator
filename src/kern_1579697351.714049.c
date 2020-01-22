#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(810, 690, 330, "random");
	float ***A = create_three_dim_float(120, 660, 760, "random");
	float *C = create_one_dim_float(740, "random");

	for (int b = 0; b < 657; b++)
	  for (int a = 3; a < 116; a++)
	  {
	    
	     C[a]=C[a-1]*0.801;
	    
	     A[a][b][a]=A[a+4][b+3][a+2]-0.449;
	    
	     B[a][b][a]=B[a][b][a]+0.275;
	     C[a]=B[a-3][b][a-3]+0.912;
	  }

    return 0;
}