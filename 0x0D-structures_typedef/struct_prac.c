#include <stdlib.h>
#include <stdio.h>

struct Users
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	return user;
}

int main(void)
{
	struct User *user;

	user = new_user("Foo", "foo@foo.bar", 98);
	if (user == NULL)
		return (1);

