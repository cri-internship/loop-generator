#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(900, "zeros");
	double *E = create_one_dim_double(590, "zeros");
	double *D = create_one_dim_double(400, "zeros");
	double ***B = create_three_dim_double(390, 170, 370, "zeros");
	double *C = create_one_dim_double(550, "zeros");

	for (int d = 0; d < 366; d++)
	  for (int c = 0; c < 165; c++)
	    for (int b = 3; b < 389; b++)
	      for (int a = 3; a < 389; a++)
	      {
	        
	       A[a]=A[a-3]-0.463;
	        
	       E[a]=E[a+5]-0.661;
	        
	       B[a][b][c]=B[a+1][b+5][c+4]/E[a]+C[a];
	        
	       C[a]=D[a];
	       C[a+2]=0.325/A[a]-E[a];
	      }

    return 0;
}