#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(710, 620, "random");
	double ***C = create_three_dim_double(670, 260, 160, "random");
	double **E = create_two_dim_double(440, 980, "random");
	double **A = create_two_dim_double(210, 120, "random");
	double *B = create_one_dim_double(600, "random");

	for (int d = 2; d < 120; d++)
	  for (int c = 2; c < 210; c++)
	    for (int b = 2; b < 210; b++)
	      for (int a = 2; a < 210; a++)
	      {
	        
	       A[a][b]=A[a-2][b-2]/B[a]+E[a][b]*D[a][b]-C[a][b][c];
	        
	       D[a][b]=0.064;
	       D[a+1][b+1]=0.559;
	      }

    return 0;
}