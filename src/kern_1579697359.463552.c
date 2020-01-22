#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(940, 190, 800, "random");
	double **A = create_two_dim_double(840, 530, "random");
	double **B = create_two_dim_double(220, 890, "random");
	double *D = create_one_dim_double(420, "random");
	double ***C = create_three_dim_double(850, 990, 480, "random");

	for (int b = 4; b < 190; b++)
	  for (int a = 5; a < 420; a++)
	  {
	    
	     A[a][b]=A[a][b-4]-0.897;
	    
	     E[a][b][a]=0.572;
	     E[a+4][b][a+5]=0.302;
	    
	     E[a][b][a]=C[a][b][a]*B[a][b]-D[a]+A[a][b];
	    
	     double var_a=D[a]/0.114;
	  }

    return 0;
}