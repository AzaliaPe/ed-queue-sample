#include<Book.hh>

Book::Book(const char* name, const char* author)
{
    this->name = name;
    this->author = author;
}

Book::~Book(){}

const char* Book::GetName() const
{
    return name;
}

const char* Book::GetAuthor() const
{
    return author;
}