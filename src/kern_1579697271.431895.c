#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(520, 830, 390, "random");
	double **E = create_two_dim_double(740, 350, "random");
	double ***D = create_three_dim_double(940, 10, 720, "random");
	double **A = create_two_dim_double(470, 80, "random");
	double **B = create_two_dim_double(620, 310, "random");

	for (int d = 3; d < 390; d++)
	  for (int c = 0; c < 75; c++)
	    for (int b = 0; b < 465; b++)
	      for (int a = 0; a < 465; a++)
	      {
	        
	       A[a][b]=B[a][b];
	       A[a+5][b+5]=D[a][b][c]+E[a][b];
	        
	       double var_a=C[a][b][c]+0.622;
	       double var_b=C[a][b][c-3]*0.854;
	      }

    return 0;
}