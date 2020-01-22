#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(590, 290, 690, "random");
	double *E = create_one_dim_double(950, "random");
	double *A = create_one_dim_double(530, "random");
	double ***B = create_three_dim_double(520, 850, 110, "random");
	double **D = create_two_dim_double(550, 480, "random");

	for (int c = 5; c < 530; c++)
	  for (int b = 5; b < 530; b++)
	    for (int a = 5; a < 530; a++)
	    {
	      
	      A[a]=0.814;
	      A[a-5]=0.599;
	    }

    return 0;
}