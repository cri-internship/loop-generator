#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(220, 270, 1000, "zeros");
	double ***A = create_three_dim_double(630, 480, 240, "zeros");

	for (int b = 4; b < 269; b++)
	  for (int a = 5; a < 215; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-3][a-5]-0.142;
	    
	     B[a][b][a]=0.207;
	    
	     A[a][b][a]=0.97;
	     A[a-1][b-1][a-2]=B[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]/0.704;
	     A[a][b][a]=B[a+5][b+1][a+3]+A[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]+0.406;
	     A[a][b][a]=B[a-5][b][a-5]+0.887;
	    
	     double var_a=B[a][b][a]+0.74;
	     double var_b=B[a-3][b-4][a-5]*0.094;
	  }

    return 0;
}