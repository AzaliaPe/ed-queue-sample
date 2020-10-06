class Book
{
    private:
        const char* name;
        const char* author;
    public:
        Book(const char*, const char*);
        ~Book();

        const char* GetName() const;
        const char* GetAuthor() const;
};