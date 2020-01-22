#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(480, 530, 670, "ones");
	double ***B = create_three_dim_double(650, 770, 760, "ones");
	double *C = create_one_dim_double(120, "ones");

	for (int b = 0; b < 525; b++)
	  for (int a = 0; a < 119; a++)
	  {
	    
	     C[a]=C[a+1]+0.485;
	    
	     A[a][b][a]=C[a];
	     A[a+5][b+5][a+2]=B[a][b][a]*B[a][b][a];
	    
	     double var_a=B[a][b][a]-0.674;
	     double var_b=B[a+2][b+5][a+5]+0.808;
	  }

    return 0;
}