#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(550, 810, 960, "zeros");
	double **D = create_two_dim_double(930, 1000, "zeros");
	double **E = create_two_dim_double(50, 70, "zeros");
	double *A = create_one_dim_double(870, "zeros");
	double ***B = create_three_dim_double(410, 630, 200, "zeros");

	for (int b = 1; b < 67; b++)
	  for (int a = 3; a < 47; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-1][a]-0.016;
	    
	     B[a][b][a]=B[a+5][b+1][a+2]-0.542+D[a][b];
	    
	     C[a][b][a]=C[a][b+3][a+1]/0.501;
	    
	     E[a][b]=E[a+3][b+1]*0.569;
	    
	     E[a][b]=E[a][b+3]+0.484;
	  }

    return 0;
}