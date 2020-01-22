#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(850, 80, 470, "zeros");
	double **A = create_two_dim_double(730, 770, "zeros");
	double *C = create_one_dim_double(820, "zeros");

	for (int d = 0; d < 466; d++)
	  for (int c = 3; c < 76; c++)
	    for (int b = 4; b < 730; b++)
	      for (int a = 4; a < 730; a++)
	      {
	        
	       C[a]=C[a-3]+0.543;
	        
	       A[a][b]=A[a-2][b-3]+0.316;
	        
	       C[a]=C[a-4]*B[a][b][c]/A[a][b];
	        
	       B[a][b][c]=0.382;
	       B[a][b+4][c+4]=0.985;
	        
	       double var_a=B[a][b][c]/0.576;
	       double var_b=B[a+4][b+1][c+4]*0.681;
	        
	       C[a]=C[a]/B[a][b][c]+A[a][b];
	       A[a][b]=C[a]+B[a][b][c]-A[a][b];
	        
	       double var_c=A[a][b]-0.11;
	       double var_d=A[a-4][b-3]/0.669;
	      }

    return 0;
}