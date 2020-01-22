#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(600, 720, 30, "zeros");
	double ***D = create_three_dim_double(740, 980, 710, "zeros");
	double **B = create_two_dim_double(930, 560, "zeros");
	double **A = create_two_dim_double(270, 590, "zeros");

	for (int b = 5; b < 587; b++)
	  for (int a = 4; a < 268; a++)
	  {
	    
	     A[a][b]=A[a+2][b+3]+0.78;
	    
	     D[a][b][a]=D[a+3][b+4][a+3]*0.892;
	    
	     A[a][b]=B[a][b]+D[a][b][a]-D[a][b][a];
	    
	     D[a][b][a]=A[a][b];
	    
	     A[a][b]=A[a][b]/0.027;
	     D[a][b][a]=A[a-3][b-5]*D[a][b][a]+B[a][b]-C[a][b][a];
	    
	     double var_a=D[a][b][a]/0.655;
	     double var_b=D[a-2][b][a-4]/0.058;
	  }

    return 0;
}