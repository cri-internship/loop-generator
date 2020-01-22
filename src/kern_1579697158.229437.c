#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(400, 550, "random");
	double ***B = create_three_dim_double(260, 910, 280, "random");
	double **D = create_two_dim_double(970, 420, "random");
	double **A = create_two_dim_double(260, 460, "random");

	for (int b = 0; b < 460; b++)
	  for (int a = 0; a < 258; a++)
	  {
	    
	     C[a][b]=C[a+3][b+5]-D[a][b];
	    
	     A[a][b]=B[a][b][a]*C[a][b];
	     A[a+2][b]=C[a][b]-B[a][b][a];
	  }

    return 0;
}