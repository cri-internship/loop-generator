#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(850, 520, "zeros");
	double *A = create_one_dim_double(740, "zeros");

	for (int d = 3; d < 519; d++)
	  for (int c = 5; c < 738; c++)
	    for (int b = 5; b < 738; b++)
	      for (int a = 5; a < 738; a++)
	      {
	        
	       B[a][b]=B[a-5][b]+A[a];
	        
	       B[a][b]=B[a+2][b]-A[a];
	        
	       A[a]=A[a+2]*0.856;
	        
	       B[a][b]=B[a+5][b+1]*0.211;
	        
	       A[a]=B[a][b]*A[a];
	       B[a][b]=B[a-4][b]*A[a];
	      }

    return 0;
}