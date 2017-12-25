//
// Created by Jimmy on 25.12.2017.
//


#include <stdio.h>

void understanding_pointers() {
    int variable = 1;
    printf("| %-50s | %-30s | %-20s \n", "declaration", "access", "value");
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("| %-50s | %-30s | %-20d \n", "int variable = 1", "variable", variable);
    printf("| %-50s | %-30s | %-20p \n", "int variable = 1", "&variable", &variable);
    printf("-----------------------------------------------------------------------------------------------\n");
    int *variablePointer = &variable;

    printf("| %-50s | %-30s | %-20p \n", "int* variablePointer = &variable", "&variablePointer", &variablePointer);
    printf("| %-50s | %-30s | %-20p \n", "int* variablePointer = &variable", "variablePointer", variablePointer);
    printf("| %-50s | %-30s | %-20d \n", "int* variablePointer = &variable", "*variablePointer", *variablePointer);
    printf("-----------------------------------------------------------------------------------------------\n");
    int **variablePointerPointer = &variablePointer;

    printf("| %-50s | %-30s | %-20p \n", "int ** variablePointerPointer = &variablePointer", "&variablePointerPointer",
           &variablePointerPointer);
    printf("| %-50s | %-30s | %-20p \n", "int ** variablePointerPointer = &variablePointer", "variablePointerPointer",
           variablePointerPointer);
    printf("| %-50s | %-30s | %-20d \n", "int ** variablePointerPointer = &variablePointer", "**variablePointerPointer",
           **variablePointerPointer);
    printf("| %-50s | %-30s | %-20p \n", "int ** variablePointerPointer = &variablePointer", "*variablePointerPointer",
           *variablePointerPointer);
    printf("\n\n\n\n");
}

