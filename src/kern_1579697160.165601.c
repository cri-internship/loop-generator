#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(810, "random");
	float **C = create_two_dim_float(380, 260, "random");
	float **A = create_two_dim_float(510, 590, "random");
	float ***D = create_three_dim_float(810, 480, 740, "random");

	for (int b = 4; b < 257; b++)
	  for (int a = 1; a < 375; a++)
	  {
	    
	     C[a][b]=B[a]-A[a][b]/D[a][b][a];
	     C[a+5][b+3]=D[a][b][a];
	    
	     A[a][b]=C[a][b]*A[a][b];
	     D[a][b][a]=C[a-1][b-4]/B[a]-A[a][b]+D[a][b][a];
	  }

    return 0;
}