#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(140, 910, 810, "ones");
	double ***E = create_three_dim_double(250, 670, 220, "ones");
	double ***B = create_three_dim_double(220, 370, 850, "ones");
	double ***C = create_three_dim_double(550, 930, 840, "ones");
	double **A = create_two_dim_double(230, 890, "ones");

	for (int c = 0; c < 835; c++)
	  for (int b = 0; b < 928; b++)
	    for (int a = 0; a < 549; a++)
	    {
	      
	      C[a][b][c]=A[a][b]/B[a][b][c]*E[a][b][c];
	      C[a+1][b+2][c+5]=D[a][b][c]-B[a][b][c];
	    }

    return 0;
}