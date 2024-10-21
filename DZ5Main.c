#include <stdio.h>
#include <stdbool.h>
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
enum logicOperation
{
    OR,  // OR
    AND, // AND
    XOR, // XOR
    INV, // INV
};
//
void executorArifmetic(enum arifOperation arifOperation, float argA, float argB);
void executorLogic(enum logicOperation logicOperation, int argA, int argB);
void typeConverter();
void consoleWriteData(char str[]);
//
int main()
{
    printf("DZ5 Executor\n\n");

    executorArifmetic(addOutInt, 25, 35);
    executorArifmetic(addOutFloat, 12.78, 18.22);
    executorArifmetic(addOutFloat, 21.35, 15);
    executorArifmetic(subtractOutInt, 17, 6);
    executorArifmetic(subtractOutInt, 25, 42);
    executorArifmetic(subtractOutFloat, 21, 13.54);
    executorArifmetic(multiplyOutInt, 65, 3);
    executorArifmetic(multiplyOutFloat, 3.14, 2.71);
    executorArifmetic(multiplyOutFloat, 9.8, 4);
    executorArifmetic(divideOutInt, 32, 2);
    executorArifmetic(divideOutFloat, 35, 2);
    executorArifmetic(divideOutFloat, 16.8, 4);
    executorArifmetic(divideOutFloat, 20, 2.5);
    executorArifmetic(divideOutInt, 12, 4);     //
    executorArifmetic(divideOutInt, 15, 4);     //
    executorArifmetic(divideOutInt, 27, 3);     //
    executorArifmetic(divideOutFloat, 21.4, 4); //

    executorLogic(OR, 12, 5);
    executorLogic(OR, 8, 7);
    executorLogic(OR, 24, 64);
    executorLogic(AND, 27, 3);
    executorLogic(AND, 16, 0);
    executorLogic(AND, 32, 1);
    executorLogic(XOR, 5, 6);
    executorLogic(XOR, 5, 5);
    executorLogic(XOR, 8, 0);
    executorLogic(INV, 6, 1);
    executorLogic(INV, 1, 1);
    executorLogic(INV, 0, 0);

    typeConverter();
    return 0;
}
//
void executorArifmetic(enum arifOperation arifOperation, float argA, float argB)
{
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
void executorLogic(enum logicOperation logicOperation, int argA, int argB)
{

    char rezult[20] = {};
    int rezultInt = 0;
    char *rezultBool = "";
    char *rezultBoolTrue = "true";
    char *rezultBoolFalse = "false";

    switch (logicOperation)
    {
    case OR:
        rezultInt = argA | argB;

        if (argA | argB)
        {
            rezultBool = rezultBoolTrue;
        }
        else
        {
            rezultBool = rezultBoolFalse;
        }

        sprintf(rezult, "%i = %i | %i\nbool -> %s\n", rezultInt, argA, argB, rezultBool);
        consoleWriteData(rezult);
        break;
    case AND:
        rezultInt = argA & argB;

        if (argA & argB)
        {
            rezultBool = rezultBoolTrue;
        }
        else
        {
            rezultBool = rezultBoolFalse;
        }

        sprintf(rezult, "%i = %i & %i\nbool -> %s\n", rezultInt, argA, argB, rezultBool);
        consoleWriteData(rezult);
        break;
    case XOR:
        rezultInt = argA ^ argB;

        if (argA ^ argB)
        {
            rezultBool = rezultBoolTrue;
        }
        else
        {
            rezultBool = rezultBoolFalse;
        }

        sprintf(rezult, "%i = %i ^ %i\nbool -> %s\n", rezultInt, argA, argB, rezultBool);
        consoleWriteData(rezult);
        break;
    case INV:
        rezultInt = argA != argB;

        if (argA != argB)
        {
            rezultBool = rezultBoolTrue;
        }
        else
        {
            rezultBool = rezultBoolFalse;
        }

        sprintf(rezult, "%i = %i != %i\nbool -> %s\n", rezultInt, argA, argB, rezultBool);
        consoleWriteData(rezult);
        break;
    default:
        break;
    }
}
void typeConverter()
{
    char rezult[20] = {};

    float XFloat = 0;
    float YFloat = 0;
    int XInt = 0;
    int YInt = 0;

    int rezultInt = 0;
    float rezultFloat = 0;
    //
    XFloat = 72.45;
    YFloat = 84.32;
    rezultInt = (int)(XFloat + YFloat);
    sprintf(rezult, "int %i = (int) (%f + %f)\n", rezultInt, XFloat, YFloat);
    consoleWriteData(rezult);

    XFloat = 44.32;
    YFloat = 51.54;
    rezultFloat = XFloat + YFloat;
    sprintf(rezult, "float %f = %f + %f\n", rezultFloat, XFloat, YFloat);
    consoleWriteData(rezult);

    XInt = 53;
    YFloat = 2.54;
    rezultFloat = (float)XInt + YFloat;
    sprintf(rezult, "float %f = (float) %i + %f\n", rezultFloat, XInt, YFloat);
    consoleWriteData(rezult);

    XInt = 12;
    YInt = 22;
    rezultFloat = (float)(XInt + YInt);
    sprintf(rezult, "float %f = (float) (%i + %i)\n", rezultFloat, XInt, YInt);
    consoleWriteData(rezult);

    XFloat = 64.2154;
    rezultInt = (int)XFloat;
    sprintf(rezult, "int %i = (int) (%f)\n", rezultInt, XFloat);
    consoleWriteData(rezult);

    XInt = 42;
    rezultFloat = (float)XInt;
    sprintf(rezult, "float %f = (float) (%i)\n", rezultFloat, XInt);
    consoleWriteData(rezult);
}

void consoleWriteData(char str[])
{
    printf("%s\n", str);
}
