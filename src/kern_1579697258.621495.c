#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(150, 60, 20, "random");
	double ***E = create_three_dim_double(470, 1000, 270, "random");
	double **C = create_two_dim_double(800, 610, "random");
	double ***D = create_three_dim_double(430, 730, 140, "random");
	double **A = create_two_dim_double(490, 270, "random");

	for (int b = 2; b < 60; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     B[a][b][a]=B[a][b-2][a-1]*0.818+A[a][b];
	    
	     A[a][b]=A[a-5][b-1]+0.298;
	    
	     D[a][b][a]=B[a][b][a];
	     D[a][b-2][a-3]=C[a][b]+0.816;
	    
	     double var_a=C[a][b]+0.616;
	     double var_b=C[a+5][b+5]-0.671;
	    
	     A[a][b]=C[a][b]/D[a][b][a]*A[a][b];
	     C[a][b]=C[a-5][b-1]*B[a][b][a]+A[a][b]-E[a][b][a]/D[a][b][a];
	  }

    return 0;
}