#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(260, 530, "random");
	double **A = create_two_dim_double(290, 260, "random");

	for (int c = 3; c < 257; c++)
	  for (int b = 4; b < 259; b++)
	    for (int a = 4; a < 259; a++)
	    {
	      
	      B[a][b]=B[a-4][b-3]+0.908;
	      
	      B[a][b]=B[a-2][b-3]/A[a][b];
	      
	      A[a][b]=A[a+4][b]*0.757;
	      
	      double var_a=A[a][b]*0.257;
	      double var_b=A[a-4][b-1]-0.785;
	      
	      double var_c=A[a][b]*0.174;
	      double var_d=A[a+5][b+3]/0.658;
	    }

    return 0;
}