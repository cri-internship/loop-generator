#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(830, "ones");
	double ***A = create_three_dim_double(730, 300, 130, "ones");
	double ***B = create_three_dim_double(620, 670, 790, "ones");
	double **D = create_two_dim_double(820, 600, "ones");

	for (int b = 4; b < 299; b++)
	  for (int a = 4; a < 620; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-4][a-2]+0.152;
	    
	     D[a][b]=D[a+3][b]-B[a][b][a]*C[a]+A[a][b][a];
	    
	     A[a][b][a]=A[a][b+1][a]/D[a][b]-B[a][b][a];
	    
	     D[a][b]=0.874/C[a];
	    
	     A[a][b][a]=A[a][b][a]*D[a][b];
	     D[a][b]=A[a][b][a+2]+0.98*C[a]-B[a][b][a];
	    
	     C[a]=B[a][b][a]/D[a][b];
	     B[a][b][a]=B[a-4][b-3][a-2]/D[a][b];
	    
	     C[a]=D[a][b]*A[a][b][a];
	     A[a][b][a]=D[a][b-4]+C[a]-B[a][b][a];
	  }

    return 0;
}