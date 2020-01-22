#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(520, 110, "random");
	float **B = create_two_dim_float(990, 810, "random");

	for (int d = 5; d < 105; d++)
	  for (int c = 5; c < 516; c++)
	    for (int b = 5; b < 516; b++)
	      for (int a = 5; a < 516; a++)
	      {
	        
	       B[a][b]=B[a-5][b-4]-0.775;
	        
	       B[a][b]=B[a+1][b+1]-0.322;
	        
	       A[a][b]=0.564;
	       A[a+1][b+1]=0.293;
	        
	       float var_a=A[a][b]*0.553;
	       float var_b=A[a+4][b+2]/0.174;
	        
	       float var_c=A[a][b]/0.869;
	       float var_d=A[a+4][b+5]+0.253;
	      }

    return 0;
}