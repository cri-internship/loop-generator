#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(440, "zeros");
	double ***B = create_three_dim_double(300, 940, 890, "zeros");
	double *A = create_one_dim_double(420, "zeros");

	for (int c = 3; c < 885; c++)
	  for (int b = 4; b < 939; b++)
	    for (int a = 3; a < 295; a++)
	    {
	      
	      B[a][b][c]=B[a][b][c-3]+C[a]*A[a];
	      
	      B[a][b][c]=B[a-3][b-4][c-1]/0.674;
	      
	      double var_a=A[a]*0.787;
	      double var_b=A[a+3]+0.593;
	    }

    return 0;
}