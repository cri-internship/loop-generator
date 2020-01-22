#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(260, 10, "zeros");
	double ***B = create_three_dim_double(750, 370, 380, "zeros");
	double ***C = create_three_dim_double(800, 490, 140, "zeros");
	double *D = create_one_dim_double(970, "zeros");
	double **A = create_two_dim_double(70, 920, "zeros");

	for (int b = 3; b < 10; b++)
	  for (int a = 5; a < 260; a++)
	  {
	    
	     E[a][b]=E[a-5][b-1]/C[a][b][a]-B[a][b][a];
	    
	     E[a][b]=E[a-2][b]+0.875;
	    
	     C[a][b][a]=C[a+2][b+1][a+4]+0.336;
	    
	     B[a][b][a]=B[a+3][b+5][a+3]/E[a][b]+A[a][b]*D[a]-D[a];
	    
	     C[a][b][a]=0.496;
	    
	     A[a][b]=D[a]/A[a][b]+B[a][b][a]*E[a][b]-C[a][b][a];
	     C[a][b][a]=D[a+5]+B[a][b][a]/A[a][b]*E[a][b];
	  }

    return 0;
}