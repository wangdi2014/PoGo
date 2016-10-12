#include "Globals.h"

unsigned int GENOME_MAPPER_GLOBALS::PEPTIDE_MAPPER::KMERE_LENGTH(5);
unsigned int GENOME_MAPPER_GLOBALS::PEPTIDE_MAPPER::ALLOWED_MISMATCHES(0);
std::vector<char> GENOME_MAPPER_GLOBALS::PEPTIDE_MAPPER::ALLOWED_AMINO_ACIDS = { 'A', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'Y' };
bool GENOME_MAPPER_GLOBALS::PEPTIDE_MAPPER::ONE_IN_FIVE_MODE(false);

std::string GENOME_MAPPER_GLOBALS::ID::GENE_ID("ENSG");
std::string GENOME_MAPPER_GLOBALS::ID::TRANSCRIPT_ID("ENST");
int GENOME_MAPPER_GLOBALS::ID::LENGTH(GENE_ID.size() + 11);
