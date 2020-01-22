#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(480, "ones");
	double **A = create_two_dim_double(960, 390, "ones");
	double **B = create_two_dim_double(660, 650, "ones");
	double **D = create_two_dim_double(170, 370, "ones");

	for (int c = 3; c < 365; c++)
	  for (int b = 2; b < 168; b++)
	    for (int a = 2; a < 168; a++)
	    {
	      
	      D[a][b]=D[a+2][b+5]*A[a][b];
	      
	      A[a][b]=A[a+2][b+1]*0.885;
	      
	      D[a][b]=0.671;
	      
	      C[a]=D[a][b]-B[a][b]+D[a][b];
	      C[a+4]=D[a][b];
	      
	      A[a][b]=C[a]+D[a][b]-A[a][b];
	      D[a][b]=C[a]-A[a][b];
	      
	      double var_a=B[a][b]-0.136;
	      double var_b=B[a][b+5]/0.578;
	    }

    return 0;
}