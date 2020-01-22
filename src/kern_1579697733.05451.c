#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(930, 420, "ones");
	double *D = create_one_dim_double(140, "ones");
	double ***B = create_three_dim_double(850, 550, 630, "ones");
	double *C = create_one_dim_double(730, "ones");
	double ***A = create_three_dim_double(180, 210, 660, "ones");

	for (int b = 3; b < 210; b++)
	  for (int a = 3; a < 180; a++)
	  {
	    
	     C[a]=A[a][b][a]*B[a][b][a]-D[a]+C[a]/E[a][b];
	     A[a][b][a]=A[a-3][b-3][a-1]+0.652;
	  }

    return 0;
}