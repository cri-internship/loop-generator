#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(170, 610, 720, "ones");
	double **A = create_two_dim_double(900, 690, "ones");

	for (int b = 3; b < 605; b++)
	  for (int a = 4; a < 165; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b][a+1]*0.667;
	    
	     B[a][b][a]=B[a+1][b+3][a+5]*0.178;
	    
	     B[a][b][a]=B[a+3][b+5][a+3]/A[a][b];
	    
	     double var_a=B[a][b][a]-0.793;
	     double var_b=B[a-4][b-3][a]*0.023;
	    
	     double var_c=B[a][b][a]/0.443;
	     double var_d=B[a+5][b+4][a+1]+0.696;
	    
	     double var_e=B[a][b][a]-0.7;
	     double var_f=B[a+4][b+4][a+3]+0.415;
	  }

    return 0;
}