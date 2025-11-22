#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[100];
    int level;
    int hp;
    int attackPower;
} Pokemon;

Pokemon* CreateArray(FILE* fp, int* pN)
{
    int n;
    Pokemon* newArray;

    
    fscanf(fp, "%d", &n);

    // Set output parameter
    *pN = n;

    
    newArray = (Pokemon*)calloc(n, sizeof(Pokemon));

    return newArray;
}

Pokemon ReadNextPokemon(FILE* fp)
{
    Pokemon newPokemon;

 
    fscanf(fp, "%s", newPokemon.name);

   
    fscanf(fp, "%d", &newPokemon.level);
    fscanf(fp, "%d", &newPokemon.hp);
    fscanf(fp, "%d", &newPokemon.attackPower);

    return newPokemon;
}

void PrintPokemon(Pokemon* pokemonArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Pokemon %d:\n", i + 1);
        printf("  Name: %s\n", pokemonArray[i].name);
        printf("  Level: %d\n", pokemonArray[i].level);
        printf("  HP: %d\n", pokemonArray[i].hp);
        printf("  Attack Power: %d\n\n", pokemonArray[i].attackPower);
    }
}

void FreeArray(Pokemon* pokemonArray)
{
    free(pokemonArray);
}

void main()
{
    FILE* fp = fopen("pokemondata.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file.\n");
        return;
    }

    Pokemon* pokemonList;
    int arraySize;

    pokemonList = CreateArray(fp, &arraySize);

    for (int i = 0; i < arraySize; i++)
    {
        pokemonList[i] = ReadNextPokemon(fp);
    }

    PrintPokemon(pokemonList, arraySize);

    FreeArray(pokemonList);

    fclose(fp);
}
