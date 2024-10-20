#include <stdio.h>
//
enum arifOperation
{
    addOutInt,        // argA+argB
    addOutFloat,      // argA+argB
    subtractOutInt,   // argA-argB
    subtractOutFloat, // argA-argA
    multiplyOutInt,   // argA*argB
    multiplyOutFloat, // argA*argB
    divideOutInt,     // argA / argB
    divideOutFloat,   // argA / argB
};
//
void ExecutorArifmetic(enum arifOperation arifOperation, float argA, float argB);
void consoleWriteData(char str[]);
//
int main()
{
    printf("DZ5 Executor\n\n");
    ExecutorArifmetic(addOutInt, 25, 35);
    ExecutorArifmetic(addOutFloat, 12.78, 18.22);
    ExecutorArifmetic(addOutFloat, 21.35, 15);
    ExecutorArifmetic(subtractOutInt, 17, 6);
    ExecutorArifmetic(subtractOutInt, 25, 42);
    ExecutorArifmetic(subtractOutFloat, 21, 13.54);
    ExecutorArifmetic(multiplyOutInt, 65, 3);
    ExecutorArifmetic(multiplyOutFloat, 3.14, 2.71);
    ExecutorArifmetic(multiplyOutFloat, 9.8, 4);
    ExecutorArifmetic(divideOutInt, 32, 2);
    ExecutorArifmetic(divideOutFloat, 35, 2);
    ExecutorArifmetic(divideOutFloat, 16.8, 4);
    ExecutorArifmetic(divideOutFloat, 20, 2.5);
    ExecutorArifmetic(divideOutInt, 12, 4);     //
    ExecutorArifmetic(divideOutInt, 15, 4);     //
    ExecutorArifmetic(divideOutInt, 27, 3);     //
    ExecutorArifmetic(divideOutFloat, 21.4, 4); //
    return 0;
}
//
void ExecutorArifmetic(enum arifOperation arifOperation, float argA, float argB)
{
    //float A = argA, B = argB;
    char rezult[20] = {};
    int rezultInt = 0;
    float rezultFloat = 0;

    if (argA == 0)
    {
        argA = 1;
    }

    if (argB == 0)
    {
        argB = 1;
    }

    switch (arifOperation)
    {
    case addOutInt:
        rezultInt = argA + argB;
        sprintf(rezult, "%i = %i + %i\n", rezultInt, (int)argA, (int)argB);
        consoleWriteData(rezult);
        break;
    case addOutFloat:
        rezultFloat = argA + argB;
        sprintf(rezult, "%f = %f + %f\n", rezultFloat, argA, argB);
        consoleWriteData(rezult);
        break;
    case subtractOutInt:
        rezultInt = argA - argB;
        sprintf(rezult, "%i = %i - %i\n", rezultInt, (int)argA, (int)argB);
        consoleWriteData(rezult);
        break;
    case subtractOutFloat:
        rezultFloat = argA - argB;
        sprintf(rezult, "%f = %f - %f\n", rezultFloat, argA, argB);
        consoleWriteData(rezult);
        break;
    case multiplyOutInt:
        rezultInt = argA * argB;
        sprintf(rezult, "%i = %i x %i\n", rezultInt, (int)argA, (int)argB);
        consoleWriteData(rezult);
        break;
    case multiplyOutFloat:
        rezultFloat = argA * argB;
        sprintf(rezult, "%f = %f x %f\n", rezultFloat, argA, argB);
        consoleWriteData(rezult);
        break;
    case divideOutInt:
        rezultInt = argA / argB;
        sprintf(rezult, "%i = %i / %i", rezultInt, (int)argA, (int)argB);
        consoleWriteData(rezult);
        rezultInt = (int)argA % (int)argB;
        sprintf(rezult, "remainder = %i\n", rezultInt);
        consoleWriteData(rezult);
        break;
    case divideOutFloat:
        rezultFloat = argA / argB;
        sprintf(rezult, "%f = %f / %f", rezultFloat, argA, argB);
        consoleWriteData(rezult);
        rezultInt = (int)argA % (int)argB;
        sprintf(rezult, "remainder = %i\n", rezultInt);
        consoleWriteData(rezult);
        break;
    default:
        break;
    }
}

void consoleWriteData(char str[])
{
    printf("%s\n", str);
}
