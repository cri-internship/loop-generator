#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(550, 680, 860, "random");
	double ***B = create_three_dim_double(80, 190, 950, "random");
	double *A = create_one_dim_double(630, "random");

	for (int b = 1; b < 190; b++)
	  for (int a = 2; a < 80; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-1][a-2]/C[a][b][a];
	    
	     A[a]=A[a+5]/B[a][b][a]-B[a][b][a];
	    
	     C[a][b][a]=C[a+2][b+1][a+1]*A[a]+B[a][b][a];
	  }

    return 0;
}