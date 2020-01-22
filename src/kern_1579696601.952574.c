#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(10, 140, 270, "random");
	double ***B = create_three_dim_double(610, 780, 590, "random");
	double ***A = create_three_dim_double(180, 290, 540, "random");
	double *E = create_one_dim_double(180, "random");
	double ***D = create_three_dim_double(720, 420, 80, "random");

	for (int b = 0; b < 775; b++)
	  for (int a = 0; a < 179; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+5][a+3]*0.432;
	    
	     E[a]=B[a][b][a];
	     E[a+1]=D[a][b][a]-A[a][b][a]/C[a][b][a];
	  }

    return 0;
}