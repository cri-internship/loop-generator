#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(360, "random");
	double ***C = create_three_dim_double(390, 800, 80, "random");
	double ***A = create_three_dim_double(460, 240, 890, "random");

	for (int b = 5; b < 237; b++)
	  for (int a = 5; a < 390; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-4][a]-0.79;
	    
	     A[a][b][a]=A[a-5][b-1][a-4]-0.79;
	    
	     A[a][b][a]=A[a][b+3][a]-0.592;
	    
	     C[a][b][a]=0.12;
	     C[a-2][b-5][a-5]=0.455;
	  }

    return 0;
}