#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(360, 940, 500, "zeros");
	double ***A = create_three_dim_double(460, 530, 140, "zeros");
	double *B = create_one_dim_double(820, "zeros");

	for (int b = 0; b < 527; b++)
	  for (int a = 0; a < 455; a++)
	  {
	    
	     A[a][b][a]=0.217;
	     A[a][b+3][a+5]=C[a][b][a]*B[a];
	  }

    return 0;
}