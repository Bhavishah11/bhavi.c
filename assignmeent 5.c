#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    do
    {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Reverse string\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf("%99s", str1);
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                scanf("%99s", str1);
                strcpy(str2, str1);
                printf("Copied string = %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%99s", str1);
                printf("Enter second string: ");
                scanf("%99s", str2);
                strcat(str1, str2);
                printf("Concatenated string = %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%99s", str1);
                printf("Enter second string: ");
                scanf("%99s", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Enter a string: ");
                scanf("%99s", str1);

                for(int i = 0, j = strlen(str1) - 1;
                    i < j; i++, j--)
                {
                    char temp = str1[i];
                    str1[i] = str1[j];
                    str1[j] = temp;
                }

                printf("Reversed string = %s\n", str1);
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 6);

    return 0;
}
