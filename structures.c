# include <stdio.h>
# include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_color;
    char name[34];
} tyro, dev, mahi;

// struct Student tyro, dev, mahi;  // Def as global variable...
void print()
{
    printf("%s", tyro.name);
}

int main()
{
    // struct Student tyro, dev, mahi;
    tyro.id = 1;
    dev.id = 2;
    mahi.id = 3;
    
    tyro.marks = 137;
    dev.marks = 866;
    mahi.marks = 724;
    
    tyro.fav_color = 'a';
    dev.fav_color = 'r';
    mahi.fav_color = 'd';

    strcpy(tyro.name, "Tyron Steven student of decade..!");
    strcpy(dev.name, "Devashish");
    strcpy(mahi.name, "Maheshwar");


    printf("Tyro got %d marks\n", tyro.marks);
    printf("Tyro's name is: %s\n", tyro.name);

    // printf("Dev got %d marks\n", dev.marks);
    // printf("Dev's name is: %s\n", dev.name);

    // printf("Mahi got %d marks\n", mahi.marks);
    // printf("Mahi's name is: %s\n", mahi.name);

    print();
    
    return 0;
}
