#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(580, 530, 930, "random");
	double ***B = create_three_dim_double(320, 410, 760, "random");

	for (int b = 5; b < 406; b++)
	  for (int a = 3; a < 315; a++)
	  {
	    
	     A[a][b][a]=A[a][b-5][a-2]+0.224;
	    
	     A[a][b][a]=A[a+2][b+5][a+4]-B[a][b][a];
	    
	     B[a][b][a]=B[a+5][b+3][a]*0.06;
	    
	     B[a][b][a]=B[a+3][b+4][a+2]*0.6;
	    
	     double var_a=B[a][b][a]*0.489;
	     double var_b=B[a-3][b-3][a-2]-0.382;
	  }

    return 0;
}