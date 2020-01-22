#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(640, 160, 350, "random");
	double *C = create_one_dim_double(1000, "random");
	double *E = create_one_dim_double(950, "random");
	double ***A = create_three_dim_double(670, 690, 600, "random");
	double ***D = create_three_dim_double(150, 120, 270, "random");

	for (int d = 4; d < 350; d++)
	  for (int c = 4; c < 160; c++)
	    for (int b = 5; b < 640; b++)
	      for (int a = 5; a < 640; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-4][c-4]/0.529;
	        
	       C[a]=E[a]/A[a][b][c]*B[a][b][c];
	       C[a-5]=B[a][b][c]/A[a][b][c];
	        
	       E[a]=0.506;
	       E[a-5]=0.488;
	      }

    return 0;
}