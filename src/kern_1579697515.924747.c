#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(370, 90, 280, "random");
	float ***B = create_three_dim_float(810, 210, 790, "random");
	float **A = create_two_dim_float(10, 650, "random");
	float *D = create_one_dim_float(640, "random");

	for (int b = 4; b < 640; b++)
	  for (int a = 4; a < 640; a++)
	  {
	    
	     D[a]=C[a][b][a];
	     D[a-4]=A[a][b];
	  }

    return 0;
}