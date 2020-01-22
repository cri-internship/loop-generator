#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(430, 570, "random");
	double **E = create_two_dim_double(980, 440, "random");
	double *D = create_one_dim_double(470, "random");
	double **A = create_two_dim_double(740, 960, "random");
	double **B = create_two_dim_double(610, 750, "random");

	for (int b = 5; b < 750; b++)
	  for (int a = 0; a < 610; a++)
	  {
	    
	     B[a][b]=B[a][b-5]/E[a][b]*A[a][b];
	  }

    return 0;
}