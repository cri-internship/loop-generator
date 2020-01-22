#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(810, 410, 200, "zeros");
	double **C = create_two_dim_double(540, 610, "zeros");
	double ***A = create_three_dim_double(860, 20, 60, "zeros");
	double *E = create_one_dim_double(670, "zeros");
	double **D = create_two_dim_double(420, 650, "zeros");

	for (int d = 0; d < 195; d++)
	  for (int c = 0; c < 407; c++)
	    for (int b = 0; b < 539; b++)
	      for (int a = 0; a < 539; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+2][c+5]/C[a][b]*E[a];
	        
	       B[a][b][c]=B[a+4][b+3][c+5]/D[a][b]-A[a][b][c]+A[a][b][c];
	        
	       double var_a=C[a][b]+0.521;
	       double var_b=C[a+1][b+4]*0.234;
	      }

    return 0;
}