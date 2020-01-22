#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(490, "zeros");
	double ***A = create_three_dim_double(270, 740, 980, "zeros");
	double ***C = create_three_dim_double(370, 580, 630, "zeros");
	double ***B = create_three_dim_double(550, 830, 800, "zeros");

	for (int d = 0; d < 796; d++)
	  for (int c = 0; c < 829; c++)
	    for (int b = 0; b < 549; b++)
	      for (int a = 0; a < 549; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+1][c+4]-D[a]+A[a][b][c];
	      }

    return 0;
}