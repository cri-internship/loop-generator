#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(560, 810, 390, "ones");
	double ***B = create_three_dim_double(130, 50, 410, "ones");
	double *C = create_one_dim_double(890, "ones");
	double **A = create_two_dim_double(40, 100, "ones");
	double ***E = create_three_dim_double(630, 470, 930, "ones");

	for (int c = 1; c < 390; c++)
	  for (int b = 0; b < 97; b++)
	    for (int a = 4; a < 40; a++)
	    {
	      
	      C[a]=C[a-3]-0.373;
	      
	      D[a][b][c]=D[a-4][b][c-1]+B[a][b][c]-0.681;
	      
	      A[a][b]=A[a][b+3]-0.005;
	      
	      C[a]=A[a][b]*E[a][b][c]-D[a][b][c];
	      
	      E[a][b][c]=C[a]+A[a][b]*D[a][b][c]/B[a][b][c];
	      E[a][b+4][c]=C[a];
	    }

    return 0;
}