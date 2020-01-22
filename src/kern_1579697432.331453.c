#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(500, "zeros");
	double ***A = create_three_dim_double(230, 390, 730, "zeros");
	double **C = create_two_dim_double(310, 640, "zeros");
	double **D = create_two_dim_double(300, 60, "zeros");

	for (int b = 4; b < 60; b++)
	  for (int a = 5; a < 225; a++)
	  {
	    
	     B[a]=B[a+3]*0.552;
	    
	     B[a]=B[a+5]*D[a][b];
	    
	     C[a][b]=B[a]+A[a][b][a]-0.666;
	     C[a][b-4]=D[a][b]*A[a][b][a]-B[a];
	    
	     D[a][b]=B[a]+C[a][b];
	     D[a-5][b]=A[a][b][a]-C[a][b]/B[a];
	    
	     A[a][b][a]=0.687;
	     A[a+1][b+4][a+5]=D[a][b]*C[a][b];
	    
	     D[a][b]=B[a]-A[a][b][a]*C[a][b]+D[a][b];
	     A[a][b][a]=B[a-5]*C[a][b]/0.643;
	    
	     double var_a=D[a][b]/0.647;
	     double var_b=D[a-3][b-4]+0.092;
	  }

    return 0;
}