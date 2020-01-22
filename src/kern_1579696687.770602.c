#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(790, 300, 750, "random");
	double **B = create_two_dim_double(230, 900, "random");
	double *C = create_one_dim_double(800, "random");
	double ***A = create_three_dim_double(290, 430, 900, "random");
	double **D = create_two_dim_double(40, 170, "random");

	for (int c = 0; c < 799; c++)
	  for (int b = 0; b < 799; b++)
	    for (int a = 0; a < 799; a++)
	    {
	      
	      C[a]=A[a][b][c]-D[a][b]/B[a][b]*E[a][b][c];
	      C[a+1]=D[a][b]+E[a][b][c]/B[a][b]-A[a][b][c];
	    }

    return 0;
}