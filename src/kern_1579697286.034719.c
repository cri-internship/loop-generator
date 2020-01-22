#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(290, 410, "ones");
	double ***A = create_three_dim_double(480, 440, 520, "ones");
	double *C = create_one_dim_double(590, "ones");
	double **D = create_two_dim_double(720, 230, "ones");
	double **E = create_two_dim_double(30, 70, "ones");

	for (int b = 3; b < 70; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     E[a][b]=E[a-3][b-3]+0.425;
	    
	     E[a][b]=0.83;
	  }

    return 0;
}