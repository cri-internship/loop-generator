#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(720, 20, 170, "zeros");
	double ***B = create_three_dim_double(30, 660, 220, "zeros");
	double *A = create_one_dim_double(680, "zeros");
	double **C = create_two_dim_double(130, 640, "zeros");

	for (int b = 5; b < 20; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     A[a]=D[a][b][a];
	     B[a][b][a]=A[a]*B[a][b][a]-C[a][b];
	    
	     A[a]=A[a-5]-0.192;
	    
	     C[a][b]=C[a][b-3]*0.382;
	    
	     B[a][b][a]=B[a-1][b-1][a-4]*0.99;
	    
	     C[a][b]=0.202;
	    
	     D[a][b][a]=0.506;
	     D[a-1][b-3][a-5]=0.075;
	  }

    return 0;
}