#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(370, "zeros");
	double ***D = create_three_dim_double(120, 300, 870, "zeros");
	double ***C = create_three_dim_double(820, 740, 60, "zeros");
	double *B = create_one_dim_double(550, "zeros");
	double **E = create_two_dim_double(330, 210, "zeros");

	for (int b = 0; b < 209; b++)
	  for (int a = 4; a < 116; a++)
	  {
	    
	     E[a][b]=E[a+1][b+1]/0.148;
	    
	     B[a]=B[a+4]-A[a];
	    
	     B[a]=0.678;
	    
	     A[a]=0.393;
	     A[a-4]=0.161;
	    
	     D[a][b][a]=D[a][b][a]-E[a][b]+C[a][b][a];
	     A[a]=D[a][b][a+4]-B[a]+E[a][b];
	    
	     E[a][b]=D[a][b][a]/C[a][b][a];
	     B[a]=D[a+1][b+5][a+4]/A[a]*E[a][b]+B[a]-0.848;
	  }

    return 0;
}