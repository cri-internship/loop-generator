#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(730, "random");
	double *C = create_one_dim_double(520, "random");
	double ***A = create_three_dim_double(900, 150, 350, "random");

	for (int c = 5; c < 350; c++)
	  for (int b = 2; b < 150; b++)
	    for (int a = 2; a < 519; a++)
	    {
	      
	      double var_a=C[a]/0.212;
	      double var_b=C[a+1]-0.5;
	      
	      double var_c=A[a][b][c]*0.047;
	      double var_d=A[a-2][b-2][c-5]*0.774;
	    }

    return 0;
}