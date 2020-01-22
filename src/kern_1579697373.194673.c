#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(160, 350, 950, "random");
	double *B = create_one_dim_double(720, "random");
	double **E = create_two_dim_double(290, 740, "random");
	double *A = create_one_dim_double(950, "random");
	double *D = create_one_dim_double(340, "random");

	for (int c = 0; c < 947; c++)
	  for (int b = 0; b < 345; b++)
	    for (int a = 2; a < 155; a++)
	    {
	      
	      D[a]=D[a-2]/0.529;
	      
	      C[a][b][c]=C[a+5][b+5][c+3]-A[a]*D[a]+E[a][b];
	      
	      B[a]=B[a+5]-C[a][b][c]*A[a];
	      
	      B[a]=0.542;
	      
	      double var_a=B[a]-0.228;
	      double var_b=B[a]*0.604;
	    }

    return 0;
}