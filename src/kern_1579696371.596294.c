#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(230, "random");
	double ***C = create_three_dim_double(660, 490, 420, "random");
	double ***B = create_three_dim_double(760, 430, 190, "random");
	double *A = create_one_dim_double(380, "random");

	for (int c = 3; c < 186; c++)
	  for (int b = 5; b < 430; b++)
	    for (int a = 5; a < 229; a++)
	    {
	      
	      B[a][b][c]=B[a][b][c+4]+D[a]/A[a]*C[a][b][c];
	      
	      D[a]=D[a+1]/B[a][b][c];
	      
	      C[a][b][c]=D[a]/A[a]+B[a][b][c];
	      C[a-5][b-5][c-3]=A[a]+B[a][b][c]*0.898;
	      
	      C[a][b][c]=A[a]/0.341;
	      
	      A[a]=C[a][b][c]+0.432;
	      D[a]=C[a+2][b+4][c+4]-A[a]*D[a];
	    }

    return 0;
}