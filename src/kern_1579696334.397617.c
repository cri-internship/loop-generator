#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(300, 350, "zeros");
	double ***E = create_three_dim_double(260, 910, 350, "zeros");
	double ***C = create_three_dim_double(320, 320, 80, "zeros");
	double **A = create_two_dim_double(290, 890, "zeros");
	double *D = create_one_dim_double(470, "zeros");

	for (int c = 0; c < 79; c++)
	  for (int b = 0; b < 320; b++)
	    for (int a = 0; a < 318; a++)
	    {
	      
	      C[a][b][c]=C[a+2][b][c+1]/0.161;
	    }

    return 0;
}