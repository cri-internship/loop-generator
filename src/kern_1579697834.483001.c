#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(400, 230, 90, "ones");
	double **D = create_two_dim_double(940, 80, "ones");
	double **C = create_two_dim_double(60, 120, "ones");
	double *A = create_one_dim_double(960, "ones");

	for (int b = 1; b < 77; b++)
	  for (int a = 2; a < 55; a++)
	  {
	    
	     C[a][b]=0.06;
	     C[a+4][b+3]=0.04;
	    
	     D[a][b]=C[a][b]*B[a][b][a]+A[a];
	     D[a+5][b+3]=C[a][b]*A[a]+B[a][b][a];
	    
	     D[a][b]=0.374;
	    
	     C[a][b]=0.785;
	    
	     A[a]=0.563;
	     A[a]=0.379;
	  }

    return 0;
}