#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(680, "random");
	double **C = create_two_dim_double(730, 490, "random");
	double ***E = create_three_dim_double(120, 860, 530, "random");
	double *A = create_one_dim_double(940, "random");
	double ***B = create_three_dim_double(340, 670, 30, "random");

	for (int b = 0; b < 667; b++)
	  for (int a = 3; a < 116; a++)
	  {
	    
	     D[a]=D[a-3]-0.043;
	    
	     B[a][b][a]=B[a][b+3][a+3]-D[a]*E[a][b][a]+C[a][b];
	    
	     B[a][b][a]=B[a][b][a+3]+A[a]-0.874;
	    
	     E[a][b][a]=E[a+4][b][a+1]-0.109;
	    
	     D[a]=B[a][b][a]+C[a][b]-B[a][b][a]*0.924;
	  }

    return 0;
}