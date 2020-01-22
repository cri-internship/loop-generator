#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(270, 610, "zeros");
	double ***B = create_three_dim_double(540, 660, 470, "zeros");
	double ***A = create_three_dim_double(150, 420, 280, "zeros");
	double ***D = create_three_dim_double(920, 150, 210, "zeros");

	for (int b = 0; b < 416; b++)
	  for (int a = 0; a < 148; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+4][a]*C[a][b]-D[a][b][a]+B[a][b][a];
	  }

    return 0;
}