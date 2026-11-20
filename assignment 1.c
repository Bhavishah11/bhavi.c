#include <stdio.h>
#include <string.h>

int main()
{
    char email[50], password[50];

    printf("Enter email address: ");
    scanf("%s", email);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(email, "user@gmail.com") == 0 &&
        strcmp(password, "1234") == 0)
    {
        printf("Login Successful! Welcome to Gmail.\n");
    }
    else
    {
        printf("Invalid email or password.\n");
    }

    return 0;
}
