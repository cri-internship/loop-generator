#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(430, 820, "random");
	double **D = create_two_dim_double(380, 90, "random");
	double *E = create_one_dim_double(230, "random");
	double ***A = create_three_dim_double(630, 210, 500, "random");
	double **C = create_two_dim_double(340, 710, "random");

	for (int b = 0; b < 207; b++)
	  for (int a = 0; a < 425; a++)
	  {
	    
	     B[a][b]=B[a+5][b+2]/C[a][b]*E[a]+D[a][b]-A[a][b][a];
	    
	     B[a][b]=B[a+4][b+5]-E[a]+C[a][b]/A[a][b][a];
	    
	     A[a][b][a]=A[a+3][b+3][a+1]+0.15;
	    
	     B[a][b]=B[a][b]+D[a][b]*A[a][b][a];
	     E[a]=B[a+1][b+3]-0.289;
	  }

    return 0;
}