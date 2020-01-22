#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(400, 640, "random");
	double *E = create_one_dim_double(370, "random");
	double **D = create_two_dim_double(810, 430, "random");
	double *B = create_one_dim_double(200, "random");
	double ***C = create_three_dim_double(460, 770, 930, "random");

	for (int b = 0; b < 640; b++)
	  for (int a = 0; a < 397; a++)
	  {
	    
	     C[a][b][a]=A[a][b]-0.727+C[a][b][a];
	     D[a][b]=A[a+3][b]-D[a][b]+B[a]*C[a][b][a]/B[a];
	  }

    return 0;
}