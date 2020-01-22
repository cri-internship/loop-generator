#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(460, 830, "zeros");
	double ***C = create_three_dim_double(370, 300, 430, "zeros");
	double **A = create_two_dim_double(720, 430, "zeros");
	double ***B = create_three_dim_double(40, 180, 30, "zeros");

	for (int d = 0; d < 428; d++)
	  for (int c = 3; c < 300; c++)
	    for (int b = 1; b < 370; b++)
	      for (int a = 1; a < 370; a++)
	      {
	        
	       D[a][b]=0.525;
	       D[a-1][b-3]=0.155;
	        
	       D[a][b]=A[a][b]/B[a][b][c]*C[a][b][c];
	        
	       double var_a=C[a][b][c]+0.022;
	       double var_b=C[a][b][c+2]/0.398;
	      }

    return 0;
}