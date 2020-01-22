#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 720, 690, "ones");
	double *B = create_one_dim_double(630, "ones");
	double *D = create_one_dim_double(130, "ones");
	double **E = create_two_dim_double(890, 140, "ones");
	double ***C = create_three_dim_double(540, 430, 410, "ones");

	for (int b = 5; b < 140; b++)
	  for (int a = 4; a < 130; a++)
	  {
	    
	     D[a]=D[a-2]/0.054;
	    
	     E[a][b]=E[a-1][b-3]*0.214;
	    
	     A[a][b][a]=A[a-4][b-5][a-4]*0.165+C[a][b][a]/B[a];
	    
	     A[a][b][a]=A[a+3][b+5][a+3]+C[a][b][a]/E[a][b]*D[a];
	  }

    return 0;
}