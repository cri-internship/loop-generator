#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(880, "zeros");
	double ***B = create_three_dim_double(150, 460, 510, "zeros");
	double ***D = create_three_dim_double(300, 650, 390, "zeros");
	double **A = create_two_dim_double(700, 700, "zeros");
	double **E = create_two_dim_double(270, 180, "zeros");

	for (int c = 0; c < 180; c++)
	  for (int b = 4; b < 270; b++)
	    for (int a = 4; a < 270; a++)
	    {
	      
	      A[a][b]=A[a+2][b+4]-0.044;
	      
	      E[a][b]=0.302;
	      E[a-4][b]=0.31;
	      
	      A[a][b]=0.735;
	    }

    return 0;
}