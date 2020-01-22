#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(70, 720, "random");
	float *A = create_one_dim_float(80, "random");
	float **C = create_two_dim_float(670, 440, "random");
	float *D = create_one_dim_float(640, "random");

	for (int d = 4; d < 440; d++)
	  for (int c = 5; c < 70; c++)
	    for (int b = 5; b < 70; b++)
	      for (int a = 5; a < 70; a++)
	      {
	        
	       C[a][b]=C[a][b-2]*D[a]+B[a][b];
	        
	       C[a][b]=C[a-1][b]+0.029;
	        
	       B[a][b]=B[a][b+4]+0.674;
	        
	       B[a][b]=C[a][b]-0.057;
	        
	       float var_a=A[a]/0.835;
	       float var_b=A[a-5]-0.952;
	        
	       C[a][b]=A[a]/B[a][b];
	       D[a]=A[a+3]-D[a];
	        
	       float var_c=C[a][b]*0.929;
	       float var_d=C[a-2][b-4]/0.132;
	      }

    return 0;
}