#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(480, 560, "ones");
	double **A = create_two_dim_double(420, 990, "ones");
	double *B = create_one_dim_double(190, "ones");
	double ***D = create_three_dim_double(80, 610, 520, "ones");

	for (int d = 0; d < 519; d++)
	  for (int c = 0; c < 556; c++)
	    for (int b = 0; b < 75; b++)
	      for (int a = 0; a < 75; a++)
	      {
	        
	       D[a][b][c]=D[a+5][b+4][c+1]*0.243;
	        
	       C[a][b]=C[a+4][b+4]+D[a][b][c]-A[a][b];
	        
	       double var_a=D[a][b][c]-0.448;
	       D[a][b][c]=0.948;
	      }

    return 0;
}