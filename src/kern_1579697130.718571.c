#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(30, 310, "zeros");
	double **C = create_two_dim_double(790, 140, "zeros");
	double **D = create_two_dim_double(1000, 210, "zeros");
	double *A = create_one_dim_double(80, "zeros");
	double *E = create_one_dim_double(830, "zeros");

	for (int b = 0; b < 207; b++)
	  for (int a = 4; a < 26; a++)
	  {
	    
	     A[a]=A[a-1]*0.136;
	    
	     E[a]=E[a+5]-A[a]+D[a][b]*B[a][b]/C[a][b];
	    
	     B[a][b]=B[a+4][b+1]+E[a]-A[a]*D[a][b];
	    
	     D[a][b]=E[a]-B[a][b];
	     D[a+2][b+3]=C[a][b]*B[a][b];
	    
	     A[a]=0.033;
	  }

    return 0;
}