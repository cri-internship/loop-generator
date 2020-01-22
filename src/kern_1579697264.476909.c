#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(300, 150, "zeros");
	double *A = create_one_dim_double(150, "zeros");
	double ***E = create_three_dim_double(930, 570, 630, "zeros");
	double *B = create_one_dim_double(620, "zeros");
	double *C = create_one_dim_double(130, "zeros");

	for (int b = 5; b < 148; b++)
	  for (int a = 5; a < 295; a++)
	  {
	    
	     E[a][b][a]=E[a-5][b-5][a-4]*D[a][b]-A[a]/B[a]+C[a];
	    
	     double var_a=D[a][b]*0.513;
	     double var_b=D[a+5][b+2]/0.578;
	  }

    return 0;
}