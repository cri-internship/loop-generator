#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(260, 870, "ones");
	double ***A = create_three_dim_double(330, 910, 290, "ones");
	double ***E = create_three_dim_double(270, 730, 670, "ones");
	double **D = create_two_dim_double(960, 140, "ones");
	double *C = create_one_dim_double(150, "ones");

	for (int d = 1; d < 290; d++)
	  for (int c = 4; c < 139; c++)
	    for (int b = 5; b < 150; b++)
	      for (int a = 5; a < 150; a++)
	      {
	        
	       C[a]=C[a-5]*0.955;
	        
	       B[a][b]=B[a-5][b]-A[a][b][c]*E[a][b][c]+D[a][b];
	        
	       D[a][b]=0.874*C[a]/B[a][b]-E[a][b][c];
	       D[a][b+1]=B[a][b]*C[a]+E[a][b][c];
	        
	       B[a][b]=0.243;
	        
	       C[a]=0.273;
	        
	       B[a][b]=A[a][b][c]*B[a][b]+D[a][b];
	       E[a][b][c]=A[a][b][c-1]*C[a]+D[a][b];
	        
	       D[a][b]=D[a][b]*0.357;
	       C[a]=D[a-4][b-4]*E[a][b][c]+A[a][b][c]-C[a]/B[a][b];
	      }

    return 0;
}