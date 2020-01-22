#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(190, 850, 300, "random");
	float *A = create_one_dim_float(500, "random");

	for (int c = 0; c < 295; c++)
	  for (int b = 0; b < 845; b++)
	    for (int a = 0; a < 186; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b+5][c+5]/A[a];
	      
	      B[a][b][c]=A[a]-B[a][b][c];
	      A[a]=A[a+1]-0.339;
	    }

    return 0;
}