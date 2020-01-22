#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(410, 680, "random");
	float **B = create_two_dim_float(880, 150, "random");
	float **C = create_two_dim_float(20, 760, "random");
	float ***A = create_three_dim_float(840, 290, 110, "random");
	float ***E = create_three_dim_float(770, 430, 240, "random");

	for (int c = 4; c < 110; c++)
	  for (int b = 5; b < 148; b++)
	    for (int a = 4; a < 836; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b][c]*0.669;
	      
	      B[a][b]=B[a+5][b+2]/0.548;
	      
	      B[a][b]=B[a+5][b+1]*E[a][b][c]-A[a][b][c];
	      
	      A[a][b][c]=B[a][b]/0.836;
	    }

    return 0;
}