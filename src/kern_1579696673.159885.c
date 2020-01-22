#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(160, "random");
	float ***B = create_three_dim_float(650, 330, 760, "random");
	float **C = create_two_dim_float(520, 720, "random");

	for (int d = 0; d < 760; d++)
	  for (int c = 5; c < 326; c++)
	    for (int b = 4; b < 160; b++)
	      for (int a = 4; a < 160; a++)
	      {
	        
	       A[a]=A[a-4]+B[a][b][c];
	        
	       C[a][b]=C[a-4][b-3]+0.19;
	        
	       C[a][b]=C[a-4][b-5]*0.771;
	        
	       C[a][b]=C[a+5][b+2]/A[a];
	        
	       B[a][b][c]=B[a+4][b+4][c]-C[a][b]*A[a];
	      }

    return 0;
}