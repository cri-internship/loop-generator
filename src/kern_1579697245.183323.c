#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(470, "random");
	float *D = create_one_dim_float(100, "random");
	float **C = create_two_dim_float(720, 70, "random");
	float ***A = create_three_dim_float(850, 360, 970, "random");

	for (int d = 4; d < 66; d++)
	  for (int c = 4; c < 96; c++)
	    for (int b = 4; b < 96; b++)
	      for (int a = 4; a < 96; a++)
	      {
	        
	       C[a][b]=C[a+4][b+4]*0.578;
	        
	       D[a]=D[a+4]/A[a][b][c]-B[a]*C[a][b];
	        
	       C[a][b]=D[a];
	      }

    return 0;
}