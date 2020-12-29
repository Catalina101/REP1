#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>
using namespace std;

class command
{
public:
    const char* get_command(char* comm)
    {
        char delimiter[] = " ";
        char* firstWord;
        char* secondWord;

        int inputLength = strlen(comm);
        char* inputCopy = (char*)calloc(inputLength + 1, sizeof(char));
        strncpy(inputCopy, comm, inputLength);
        char* str = strtok_s(inputCopy, delimiter, &firstWord);

        if (strcmp(firstWord, "CREATE") == 0)
            return "CREATE";
        if (strcmp(firstWord, "DROP") == 0)
            return "DROP";
        if (strcmp(firstWord, "DISPLAY") == 0)
            return "DISPLAY";
        if (strcmp(firstWord, "SELECT") == 0)
            return "SELECT";
        if (strcmp(firstWord, "INSERT") == 0)
            return "INSERT";
        if (strcmp(firstWord, "UPDATE") == 0)
            return "UPDATE";
        if (strcmp(firstWord, "DELETE") == 0)
            return "DELETE";
        else
            return "Error! This command does not exist!";
    }
};

class create_table_command
{
public:
    void create_table(char* comm)
    {
        char* token = NULL;
        char* str = strtok_s(comm, " ", &token);
        vector<string> vect;

        while (token != NULL)
        {
            string s = "";
            for (int i = 0; i < strlen(token); i++)
            {
                s = s + token[i];
            }
            vect.push_back(s);
            char* token = NULL;
            char* str = strtok_s(comm, " ", &token);
        }

        vector<string>::iterator it = vect.begin();
        int counter = 0;
        string file;
        while (it != vect.end())
        {
            if (counter == 1)
            {
                if ((*it).compare("TABLE") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }

            }

            counter++;
            it++;
        }
    }
};

class drop_table_command
{
public:
    void drop_table(char* comm)
    {
        char* token = NULL;
        char* str = strtok_s(comm, " ", &token);
        vector<string> vect;

        while (token != NULL)
        {
            string s = "";
            for (int i = 0; i < strlen(token); i++)
            {
                s = s + token[i];
            }
            vect.push_back(s);
            token = strtok(NULL, " ");
        }

        vector<string>::iterator it = vect.begin();
        int counter = 0;
        while (it != vect.end())
        {
            if (counter == 1)
            {
                if ((*it).compare("TABLE") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }

            }
            counter++;
            it++;
        }
    }
};

class display_table_command
{
public:
    void display_table(char* comm)
    {
        char* token = NULL;
        char* str = strtok_s(comm, " ", &token);
        vector<string> vect;

        while (token != NULL)
        {
            string s = "";
            for (int i = 0; i < strlen(token); i++)
            {
                s = s + token[i];
            }
            vect.push_back(s);
            token = strtok(NULL, " ");
        }

        vector<string>::iterator it = vect.begin();
        int counter = 0;
        while (it != vect.end())
        {
            if (counter == 1)
            {
                if ((*it).compare("TABLE") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }

            }
            counter++;
            it++;
        }
    }
};

class select_command
{
public:
    void select(char* comm)
    {
        char* token = NULL;
        char* str = strtok_s(comm, " ", &token);
        vector<string> vect;

        while (token != NULL)
        {
            string s = "";
            for (int i = 0; i < strlen(token); i++)
            {
                s = s + token[i];
            }
            vect.push_back(s);
            token = strtok(NULL, " ");
        }

        vector<string>::iterator it = vect.begin();
        int counter = 0;
        while (it != vect.end())
        {
            if (counter == 1)
            {
                if ((*it).compare("*") == 0)
                {
                    // cout<<"The command is correct"<<endl;
                }
                else
                {
                    // cautare pe prima linie a fisierului specificat la argumentul 4 in vederea gasirii coloanei
                }

            }

            if (counter == 2)
            {
                if ((*it).compare("FROM") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }

            }

            if (counter == 3)
            {
                // cautare in folderul de fisiere
            }


            counter++;
            it++;
        }
    }
};

class insert_command
{
public:
    void insert(char* comm)
    {
        char* token = NULL;
        char* str = strtok_s(comm, " ", &token);
        vector<string> vect;

        while (token != NULL)
        {
            string s = "";
            for (int i = 0; i < strlen(token); i++)
            {
                s = s + token[i];
            }
            vect.push_back(s);
            token = strtok(NULL, " ");
        }

        vector<string>::iterator it = vect.begin();
        int counter = 0;
        while (it != vect.end())
        {
            if (counter == 1)
            {
                if ((*it).compare("INTO") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }

            }

            if (counter == 2)
            {
                // verificare existenta fisier in folderul /db/
            }

            if (counter == 3)
            {
                if ((*it).compare("VALUES") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    // trebuie verificat cumva numarul de parametri din VALUES
                }

            }
            counter++;
            it++;
        }
    }
};

class delete_command
{
public:
    void delete_table(char* comm)
    {
        char* token = NULL;
        char* str = strtok_s(comm, " ", &token);
        vector<string> vect;

        while (token != NULL)
        {
            string s = "";
            for (int i = 0; i < strlen(token); i++)
            {
                s = s + token[i];
            }
            vect.push_back(s);
            token = strtok(NULL, " ");
        }

        vector<string>::iterator it = vect.begin();
        int counter = 0;
        while (it != vect.end())
        {
            if (counter == 1)
            {
                if ((*it).compare("FROM") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }

            }

            if (counter == 2)
            {
                // verificare existenta fisier
            }

            if (counter == 3)
            {
                if ((*it).compare("WHERE") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }
            }

            if (counter == 4)
            {
                //evaluare conditie delete
            }


            counter++;
            it++;
        }
    }
};

class update_command
{
public:
    void update(char* comm)
    {
        char* token = NULL;
        char* str = strtok_s(comm, " ", &token);
        vector<string> vect;

        while (token != NULL)
        {
            string s = "";
            for (int i = 0; i < strlen(token); i++)
            {
                s = s + token[i];
            }
            vect.push_back(s);
            token = strtok(NULL, " ");
        }

        vector<string>::iterator it = vect.begin();
        int counter = 0;
        while (it != vect.end())
        {
            if (counter == 1)
            {
                //verificare existenta fisier

            }

            if (counter == 2)
            {
                if ((*it).compare("SET") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }
            }

            if (counter == 3)
            {
                //evaluare cerere modificare
            }

            if (counter == 4)
            {
                if ((*it).compare("WHERE") == 0)
                {
                    cout << "The command is correct" << endl;
                }
                else
                {
                    cout << "The command is NOT correct" << endl;
                }
            }

            if (counter == 5)
            {
                //evaluare conditie modificare
            }
            counter++;
            it++;
        }
    }
};

int main()
{
    command d;
    char comm[100];
    printf("Please introduce a command for DB: ");
    fgets(comm, 100, stdin);
    if (strcmp(d.get_command(comm), "Error! This command does not exist!") != 0)
    {
        printf("The command type is: %s", d.get_command(comm));
        printf("\n");
    }
    else
    {
        printf("%s", d.get_command(comm));
        return 0;
    }

    if (strcmp(d.get_command(comm), "CREATE") == 0)
    {
        create_table_command c;
        c.create_table(comm);
    }

    if (strcmp(d.get_command(comm), "DROP") == 0)
    {
        drop_table_command c;
        c.drop_table(comm);
    }

    if (strcmp(d.get_command(comm), "SELECT") == 0)
    {
        select_command c;
        c.select(comm);
    }

    if (strcmp(d.get_command(comm), "DISPLAY") == 0)
    {
        display_table_command c;
        c.display_table(comm);
    }


    return 0;
}