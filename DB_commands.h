class command
{
public:
    const char* get_command(char*);
};

class create_table_command
{
public:
    void create_table(char*);
};

class drop_table_command
{
public:
    void drop_table(char*);
};

class display_table_command
{
public:
    void display_table(char*);
};

class select_command
{
public:
    void select(char*);
};

class insert_command
{
public:
    void insert(char*);
};

class delete_command
{
public:
    void delete_table(char*);
};

class update_command
{
public:
    void update(char*);
};

