#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(710, "zeros");
	double *B = create_one_dim_double(260, "zeros");
	double ***C = create_three_dim_double(300, 550, 660, "zeros");
	double *D = create_one_dim_double(600, "zeros");

	for (int b = 2; b < 550; b++)
	  for (int a = 2; a < 260; a++)
	  {
	    
	     C[a][b][a]=0.75-D[a];
	     C[a][b-2][a-1]=A[a]/B[a];
	    
	     D[a]=0.548;
	     D[a]=0.971;
	    
	     B[a]=B[a]+C[a][b][a]*C[a][b][a];
	     A[a]=B[a-2]-0.752;
	  }

    return 0;
}