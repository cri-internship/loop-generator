#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(800, "zeros");
	double ***B = create_three_dim_double(350, 610, 780, "zeros");
	double *A = create_one_dim_double(400, "zeros");
	double *D = create_one_dim_double(70, "zeros");
	double ***C = create_three_dim_double(820, 430, 310, "zeros");

	for (int b = 4; b < 430; b++)
	  for (int a = 4; a < 350; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b][a]-B[a][b][a]*0.781/E[a];
	    
	     C[a][b][a]=C[a-3][b-3][a]/A[a]+A[a]*D[a]-0.046;
	    
	     B[a][b][a]=B[a-1][b-4][a]/0.761;
	    
	     A[a]=A[a-3]+0.493;
	    
	     B[a][b][a]=B[a-3][b-4][a-3]+0.607;
	    
	     E[a]=E[a+1]-0.255;
	    
	     E[a]=0.353;
	  }

    return 0;
}