#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(930, "zeros");
	double **B = create_two_dim_double(600, 770, "zeros");
	double ***A = create_three_dim_double(180, 200, 520, "zeros");
	double ***D = create_three_dim_double(340, 800, 490, "zeros");
	double **E = create_two_dim_double(280, 860, "zeros");

	for (int b = 3; b < 860; b++)
	  for (int a = 5; a < 280; a++)
	  {
	    
	     E[a][b]=E[a-5][b-3]*B[a][b]/D[a][b][a]-A[a][b][a]+0.52;
	  }

    return 0;
}