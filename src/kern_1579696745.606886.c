#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(50, 820, "random");
	double *D = create_one_dim_double(420, "random");
	double *B = create_one_dim_double(450, "random");
	double ***C = create_three_dim_double(670, 230, 810, "random");

	for (int c = 2; c < 417; c++)
	  for (int b = 2; b < 417; b++)
	    for (int a = 2; a < 417; a++)
	    {
	      
	      D[a]=D[a-2]*0.558;
	      
	      D[a]=D[a+3]+0.266;
	      
	      B[a]=D[a]-A[a][b]+A[a][b];
	      B[a+5]=0.803/A[a][b]+D[a];
	    }

    return 0;
}