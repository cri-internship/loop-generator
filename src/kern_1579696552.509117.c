#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(150, 280, "ones");
	float **C = create_two_dim_float(490, 960, "ones");
	float *B = create_one_dim_float(860, "ones");
	float ***E = create_three_dim_float(260, 230, 250, "ones");
	float **D = create_two_dim_float(430, 500, "ones");

	for (int d = 0; d < 250; d++)
	  for (int c = 5; c < 230; c++)
	    for (int b = 4; b < 148; b++)
	      for (int a = 4; a < 148; a++)
	      {
	        
	       C[a][b]=C[a-4][b-1]-0.849;
	        
	       E[a][b][c]=E[a-4][b-5][c]+0.576;
	        
	       C[a][b]=C[a-1][b]+0.271;
	        
	       A[a][b]=A[a+2][b+4]-0.485;
	        
	       float var_a=D[a][b]*0.675;
	       D[a][b]=0.635;
	        
	       B[a]=A[a][b]*C[a][b]+E[a][b][c]/D[a][b];
	       B[a]=0.873+C[a][b];
	        
	       A[a][b]=B[a]-C[a][b];
	      }

    return 0;
}