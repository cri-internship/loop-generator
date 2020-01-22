#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(50, 770, 920, "ones");
	double **E = create_two_dim_double(420, 530, "ones");
	double **B = create_two_dim_double(940, 830, "ones");
	double *C = create_one_dim_double(240, "ones");
	double ***A = create_three_dim_double(60, 670, 230, "ones");

	for (int b = 1; b < 530; b++)
	  for (int a = 1; a < 46; a++)
	  {
	    
	     B[a][b]=B[a][b-1]/D[a][b][a]-E[a][b];
	    
	     A[a][b][a]=A[a+5][b+2][a+5]+C[a]*B[a][b];
	    
	     B[a][b]=B[a+5][b+5]*0.331;
	    
	     E[a][b]=0.738;
	     E[a-1][b]=0.996;
	    
	     D[a][b][a]=A[a][b][a]-C[a]/0.465;
	     D[a+4][b+2][a+3]=B[a][b]*C[a]/E[a][b]+A[a][b][a];
	  }

    return 0;
}