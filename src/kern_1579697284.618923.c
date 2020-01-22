#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(640, 940, 470, "random");
	float ***E = create_three_dim_float(220, 190, 80, "random");
	float *D = create_one_dim_float(420, "random");
	float *A = create_one_dim_float(970, "random");
	float *C = create_one_dim_float(450, "random");

	for (int d = 0; d < 78; d++)
	  for (int c = 0; c < 188; c++)
	    for (int b = 5; b < 218; b++)
	      for (int a = 5; a < 218; a++)
	      {
	        
	       D[a]=D[a-5]+0.959;
	        
	       A[a]=A[a+1]-C[a]*B[a][b][c]/E[a][b][c];
	        
	       E[a][b][c]=D[a]*A[a]-D[a]+C[a];
	       E[a+2][b+2][c+2]=C[a]+A[a]/B[a][b][c]-D[a];
	        
	       D[a]=0.283;
	        
	       float var_a=B[a][b][c]+0.497;
	       float var_b=B[a][b+5][c+1]+0.295;
	      }

    return 0;
}