#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(940, "random");
	float ***B = create_three_dim_float(430, 390, 120, "random");
	float ***A = create_three_dim_float(210, 60, 270, "random");

	for (int c = 5; c < 120; c++)
	  for (int b = 2; b < 390; b++)
	    for (int a = 3; a < 430; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-2][c-5]+0.334;
	      
	      C[a]=C[a-3]+A[a][b][c]/B[a][b][c];
	      
	      C[a]=C[a-2]/0.657;
	      
	      C[a]=C[a+1]*A[a][b][c];
	      
	      C[a]=C[a+4]-B[a][b][c];
	    }

    return 0;
}