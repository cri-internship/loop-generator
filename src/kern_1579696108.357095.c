#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(470, 940, 800, "random");
	double **A = create_two_dim_double(750, 890, "random");
	double *D = create_one_dim_double(850, "random");
	double ***B = create_three_dim_double(710, 670, 100, "random");
	double *C = create_one_dim_double(210, "random");

	for (int b = 5; b < 940; b++)
	  for (int a = 5; a < 206; a++)
	  {
	    
	     C[a]=C[a-5]+0.45;
	    
	     C[a]=0.158;
	    
	     double var_a=C[a]*0.679;
	     double var_b=C[a]+0.738;
	    
	     double var_c=E[a][b][a]-0.039;
	     double var_d=E[a-5][b-5][a-1]+0.996;
	  }

    return 0;
}