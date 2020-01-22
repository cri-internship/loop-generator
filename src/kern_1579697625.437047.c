#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(250, 830, "zeros");
	double ***A = create_three_dim_double(70, 640, 840, "zeros");
	double **B = create_two_dim_double(130, 480, "zeros");
	double *C = create_one_dim_double(530, "zeros");

	for (int c = 0; c < 828; c++)
	  for (int b = 3; b < 250; b++)
	    for (int a = 3; a < 250; a++)
	    {
	      
	      C[a]=C[a-3]/D[a][b]-A[a][b][c]+B[a][b];
	      
	      D[a][b]=D[a][b+2]*0.626;
	      
	      C[a]=D[a][b]/B[a][b];
	    }

    return 0;
}