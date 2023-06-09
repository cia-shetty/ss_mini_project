#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Symbol table entry
typedef struct
{
  char name[20];
  int address;
} SymbolEntry;

// Symbol table
SymbolEntry symbolTable[100];
int symbolTableSize = 0;

// Function to add a symbol to the symbol table
void addSymbol(const char *name, int address)
{
  SymbolEntry symbol;
  strcpy(symbol.name, name);
  symbol.address = address;
  symbolTable[symbolTableSize++] = symbol;
}

int main()
{
  // Assume we have two object files: file1.o and file2.o
  // Object file 1
  addSymbol("symbol1", 100);
  addSymbol("symbol2", 200);
  addSymbol("symbol3", 300);
  addSymbol("symbol4", 400);
  addSymbol("symbol5", 500);
  addSymbol("symbol6", 600);
  addSymbol("symbol7", 700);
  addSymbol("symbol8", 800);
  addSymbol("symbol9", 900);
  addSymbol("symbol10", 1000);
  addSymbol("symbol11", 1100);
  addSymbol("symbol12", 1200);
  addSymbol("symbol13", 1300);
  addSymbol("symbol14", 1400);
  addSymbol("symbol15", 1500);
  addSymbol("symbol16", 1600);
  addSymbol("symbol17", 1700);
  addSymbol("symbol18", 1800);
  addSymbol("symbol19", 1900);
  addSymbol("symbol20", 2000);

  // Object file 2
  addSymbol("symbol21", 2100);
  addSymbol("symbol22", 2200);
  addSymbol("symbol23", 2300);
  addSymbol("symbol24", 2400);
  addSymbol("symbol25", 2500);
  addSymbol("symbol26", 2600);
  addSymbol("symbol27", 2700);
  addSymbol("symbol28", 2800);
  addSymbol("symbol29", 2900);
  addSymbol("symbol30", 3000);
  addSymbol("symbol31", 3100);
  addSymbol("symbol32", 3200);
  addSymbol("symbol33", 3300);
  addSymbol("symbol34", 3400);
  addSymbol("symbol35", 3500);
  addSymbol("symbol36", 3600);
  addSymbol("symbol37", 3700);
  addSymbol("symbol38", 3800);
  addSymbol("symbol39", 3900);
  addSymbol("symbol40", 4000);

  // Open the output file for writing
  FILE *outputFile = fopen("output.txt", "w");
  if (outputFile == NULL)
  {
    printf("Failed to open the output file.\n");
    return 1;
  }

  // Save the resolved symbols to the output file
  for (int i = 0; i < symbolTableSize; i++)
  {
    SymbolEntry symbol = symbolTable[i];
    fprintf(outputFile, "Symbol: %s\tAddress: %d\n", symbol.name, symbol.address);
  }

  // Close the output file
  fclose(outputFile);

  return 0;
}