#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(450, "random");
	double **E = create_two_dim_double(160, 130, "random");
	double **B = create_two_dim_double(980, 550, "random");
	double **D = create_two_dim_double(450, 550, "random");
	double **C = create_two_dim_double(130, 820, "random");

	for (int d = 0; d < 548; d++)
	  for (int c = 0; c < 129; c++)
	    for (int b = 0; b < 129; b++)
	      for (int a = 0; a < 129; a++)
	      {
	        
	       D[a][b]=0.29;
	       D[a][b+2]=0.16;
	        
	       C[a][b]=0.961;
	       C[a+1][b+5]=0.685;
	      }

    return 0;
}