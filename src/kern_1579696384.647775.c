#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(460, 960, 470, "random");
	double ***B = create_three_dim_double(230, 1000, 850, "random");
	double *C = create_one_dim_double(200, "random");
	double *D = create_one_dim_double(400, "random");

	for (int d = 3; d < 470; d++)
	  for (int c = 4; c < 960; c++)
	    for (int b = 4; b < 196; b++)
	      for (int a = 4; a < 196; a++)
	      {
	        
	       C[a]=C[a-4]-B[a][b][c]+0.934*D[a];
	        
	       C[a]=C[a+4]/0.484;
	        
	       A[a][b][c]=0.124;
	       A[a-3][b-1][c-3]=0.574;
	        
	       B[a][b][c]=0.399;
	       B[a+4][b+1][c+4]=C[a]+A[a][b][c]/D[a];
	        
	       C[a]=C[a]*D[a];
	       D[a]=C[a-3]*0.464;
	        
	       double var_a=B[a][b][c]-0.986;
	       double var_b=B[a+3][b+1][c+5]-0.735;
	        
	       double var_c=B[a][b][c]-0.436;
	       double var_d=B[a-2][b-4][c-1]+0.632;
	      }

    return 0;
}