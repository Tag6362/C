#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna)
{
  int size = strlen(dna);
  char *rna = malloc(size*sizeof(char)+1);

  for (int i = 0; i < (size+1); i++) {
    if (dna[i] == 'T') {
      rna[i] = 'U';
    } else {
      rna[i] = dna[i];
    }
  }
  return rna;
}
