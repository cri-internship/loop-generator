#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(850, 920, "ones");
	double *D = create_one_dim_double(10, "ones");
	double ***B = create_three_dim_double(590, 730, 370, "ones");
	double *A = create_one_dim_double(730, "ones");

	for (int c = 5; c < 730; c++)
	  for (int b = 5; b < 730; b++)
	    for (int a = 5; a < 730; a++)
	    {
	      
	      D[a]=A[a]*B[a][b][c];
	      C[a][b]=A[a-5]*D[a]-C[a][b]/B[a][b][c];
	    }

    return 0;
}