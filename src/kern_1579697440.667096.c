#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(680, 450, "random");
	double *C = create_one_dim_double(600, "random");
	double **E = create_two_dim_double(180, 410, "random");
	double ***A = create_three_dim_double(30, 860, 530, "random");
	double ***B = create_three_dim_double(350, 580, 650, "random");

	for (int b = 1; b < 600; b++)
	  for (int a = 1; a < 600; a++)
	  {
	    
	     C[a]=0.227;
	     C[a-1]=0.233;
	  }

    return 0;
}