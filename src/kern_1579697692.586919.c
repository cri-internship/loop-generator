#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(330, 460, 10, "zeros");
	double ***D = create_three_dim_double(380, 460, 270, "zeros");
	double *C = create_one_dim_double(700, "zeros");
	double ***B = create_three_dim_double(840, 880, 240, "zeros");
	double *E = create_one_dim_double(420, "zeros");

	for (int b = 2; b < 455; b++)
	  for (int a = 5; a < 330; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-2][a]/E[a]*D[a][b][a]+C[a];
	    
	     D[a][b][a]=0.095;
	     D[a+1][b+5][a+2]=A[a][b][a]/A[a][b][a];
	    
	     double var_a=A[a][b][a]-0.454;
	     double var_b=A[a-3][b][a-5]/0.484;
	  }

    return 0;
}