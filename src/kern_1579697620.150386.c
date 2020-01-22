#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(450, 620, 890, "ones");
	double **C = create_two_dim_double(980, 620, "ones");
	double **E = create_two_dim_double(850, 210, "ones");
	double *A = create_one_dim_double(770, "ones");
	double *B = create_one_dim_double(300, "ones");

	for (int c = 0; c < 296; c++)
	  for (int b = 0; b < 296; b++)
	    for (int a = 0; a < 296; a++)
	    {
	      
	      B[a]=B[a+4]*C[a][b]/A[a]-E[a][b]+D[a][b][c];
	    }

    return 0;
}