#include <stdio.h>

struct Student
{
    int studentCode;      
    char name[60];
    float marks;
};

int main()
{
    struct Student students[] =
    {
        {1, "JIYA NAMDEO", 47.3},
        {2, "AMIT KUMAR", 88.5},
        {4, "TRIPTI PATEL", 58.9},
        {5, "ALOK DUBEY", 76.2},
        {6, "NAGESH KUMAR RAJAK", 36.6},
        {7, "SNEH SINGH", 40.1},
        {8, "SHRIYASH GUPTA", 44.3},
        {9, "GUNGUN LAHGEER", 28.0},
        {10, "RISHI KUMAR TRIPATHI", 39.3},
        {11, "KOMAL CHAUDHARY", 42.9},
        {12, "ADITYA SONI", 55.2},
        {13, "SHUBHDEEP SAMAJHDAR", 54.9},
        {14, "ADITYA NARAYAN KUSHWAHA", 67.5},
        {15, "BHUMIKA PRAJAPATI", 77.1},
        {16, "VAISHNAVI VINOD SINGH", 82.8},
        {17, "KUNAL MATTRE", 79.3},
        {18, "RAVISHANKAR DAHAYAT", 67.8},
        {19, "PRIYANKA SINGH", 95.4},
        {20, "ABHISHEK SINGH", 31.5},
        {21, "TEJRAJ KUSHWAHA", 86.5},
        {22, "HIMANSHU KUMAR RAVI", 66.7},
        {23, "AKSHRA AHIRWAR", 84.0},
        {24, "ANCHAL YADAV", 56.9},
        {25, "DUSHYANT PRATAP SINGH", 81.8},
        {26, "AMIT VERMA", 44.5},
        {27, "KHUSHI KESARWANI", 46.4},
        {28, "DHRUV SHARMA", 90.1},
        {29, "KHUSHI KUSHWAHA", 40.5},
        {30, "SARTHAK SHUKLA", 66.4},
        {31, "NITYA KUSHWAHA", 82.0},
        {32, "VIPIN KUMAR CHAURASIYA", 60.8},
        {33, "PRASHANT SAKET", 85.6},
        {34, "OM DAHIYA", 55.8},
        {35, "ARPITA YADAV", 39.1},
        {36, "ANSHIK KUSHWAHA", 63.7},
        {37, "SHUBHAM PAL", 82.4},
        {38, "HARSHIT TAMRAKAR", 58.2},
        {39, "AYUSH SATNAMI", 65.4},
        {40, "UTKARSH PATHAK", 54.0},
        {41, "EKTA SONI", 53.3},
        {42, "SHIVANK DWIVEDI", 36.0},
        {43, "SUMIT SINGH", 45.9},
        {44, "ROSHNI VISHWAKARMA", 46.2},
        {45, "NANDANI VERMA", 30.0},
        {46, "MANOJ KUSHWAHA", 89.4},
        {47, "HARSHITA PATEL",77.8},
        {48, "ANUBHAV TAMRAKAR", 97.3},
        {49, "UMESH CHADDAR", 97.4},
        {50, "OM GUPTA", 88.3},
        {51, "SHIVA TIWARI", 45.3},
        {52, "DIVYANSH SINGH", 78.7},
        {53, "ANURAG SAKET", 49.0},
        {54, "ANSHMAN SINGRAUL", 56.5},
        {55, "SHIVANSH YADAV", 90.5},
        {56, "ANIMESH AWASTHI", 83.6},
        {57, "AVNI AWASTHI", 90.6},
        {58, "PREM MISHRA", 95.3},
        {59, "SAGAR AGNIHOTRI", 78.5},
        {60, "DEV SHEKHAR MISHRA", 74.2},
        {61, "PRINCE PANDEY", 80.9},
        {62, "RAJ SEN", 63.4},
        {63, "PRANJALI JOSHI", 81.0},
        {64, "KRISHNA SINGH", 94.9},
        {65, "DASHMESH DWIVEDI", 40.0},
        {66, "VEER VIKRAM PATEL", 44.7},
        {122, "KAYNAT KHAN", 37.2},
        {124, "KARTIKEY KHATIK", 80.6},
        {67, "SAHIL AHIRWAR", 70.6},
        {68, "PRATIKSHA PRADEEP DUBEY", 73.8},
        {69, "ANUJ DWIVEDI", 32.0},
        {70, "DEEPAK KUSHAWAHA", 94.6},
        {71, "DIMPAL MITTAL", 84.2},
        {72, "PAYAL RAJ HARIJAN", 91.5},
        {73, "SHRISHTI KASHYAP", 89.6},
        {74, "LAXMI SHUKLA", 97.2},
        {75, "PRABHUSHARAN PATEL", 44.5},
        {76, "PRIYANSHU KUMAR", 69.4},
        {77, "ARPIT SONI", 97.3},
        {78, "RENU KUSHWAHA", 55.6},
        {79, "DIVYANSH SINGH PRATAP", 92.6},
        {80, "SACHIN DAHIYA", 76.5},
        {81, "KHUSHBU MISHRA", 96.2},
        {82, "YAGYA NARAYAN PANDEY", 26.5},
        {83, "LAVKUSH SAKET", 72.5},
        {84, "SACHIN BUNKAR", 83.0},
        {85, "ARJU KUSHWAHA", 60.8},
        {86, "SHWETA SONI", 85.8},
        {88, "HARSHITA CHATURVEDI", 59.5},
        {89, "ANAND VISHWAKARMA", 39.1},
        {90, "SAMEER AGNIHOTRI", 84.2},
        {91, "SHWETA PRAJAPATI", 42.6},
        {92, "SHIVI SAHU", 50.7},
        {93, "GEETA BELDER", 84.9},
        {94, "MUSKAN AHIRWAR", 44.3},
        {95, "ROHIT AHIRWAR", 58.0},
        {96, "DIVYANSHI SRIVASTAVA", 88.1},
        {97, "HIMANSHU VISHWAKARMA", 29.0},
        {98, "PRINCY MISHRA", 92.6},
        {99, "HARSHITA NAMDEV", 95.0},
        {100, "SARASWATI CHAUDHARY", 56.5},
        {101, "ANAND SEN", 49.3},
        {102, "KESHAV SINGH", 90.3},
        {103, "NARENDRA KEWAT", 96.2},
        {104, "AMBER MOR", 61.9},
        {105, "SHAURABH KUMAR VERMA", 76.6},
        {106, "ABHIGYA TRIPATHI", 57.4},
        {107, "HARDIK SEWANEE", 94.3},
        {108, "SHIKHA SINGH KUSHWAHA", 93.2},
        {109, "KRISHNA HATHATHEL", 37.3},
        {110, "RITEE DAHIYA", 24.0},
        {111, "SWATI SAHU", 40.2},
        {112, "DEEPANSHU PRAJAPATI", 49.0},
        {113, "DEVENDRA KUMAR YADAV", 88.6},
        {114, "ABHAYRAJ CHAUDHARY", 54.3},
        {115, "SHREYA DWIVEDI", 78.4},
        {116, "ARZOO MISHRA", 58.9},
        {117, "RAVI SONI", 55.0},
        {118, "PRACHI KUSHWAHA", 69.8},
        {119, "AYUSH KUSHWAHA", 31.0},
        {120, "SHIVANK KUSHWAHA", 47.3},
        {121, "RAJ JAIN", 76.6},
        {125, "VAISHNAVI SHARMA", 39.0},
        {126, "ARPITA PANDEY", 70.7},
        {127, "VANSHIKA PANDEY", 65.7}
    };

    int code, i;
    int total = sizeof(students) / sizeof(students[0]);
    int found;
    int choice;

    do
    {
        printf("\n========================================\n");
        printf("       STUDENT MANAGEMENT SYSTEM\n");
        printf("========================================\n");
        printf("Enter Student Code (last 3 digits): ");

        if (scanf("%d", &code) != 1)
        {
            printf("\nInvalid input. Please enter numbers only.\n");
            return 1;
        }

        found = 0;

        for (i = 0; i < total; i++)
        {
            if (students[i].studentCode == code)
            {
                found = 1;

                printf("\n---------- STUDENT DETAILS ----------\n");
                printf("Student Code : %03d\n", students[i].studentCode);
                printf("Student Name : %s\n", students[i].name);
                printf("Marks        : %.1f / 100\n", students[i].marks);

                if (students[i].marks >= 90)
                    printf("Grade        : A+\n");
                else if (students[i].marks >= 80)
                    printf("Grade        : A\n");
                else if (students[i].marks >= 70)
                    printf("Grade        : B\n");
                else if (students[i].marks >= 60)
                    printf("Grade        : C\n");
                else if (students[i].marks >= 33)
                    printf("Grade        : D\n");
                else
                    printf("Grade        : F\n");

                if (students[i].marks >= 33)
                    printf("Result       : PASS\n");
                else
                    printf("Result       : FAIL\n");

                printf("-------------------------------------\n");
                break;
            }
        }

        if (found == 0)
        {
            printf("\nStudent Record Not Found!\n");
            printf("Please check the last three digits and try again.\n");
        }

        printf("\nEnter 1 to search another student.");
        printf("\nEnter 0 to exit.");
        printf("\nYour choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid choice. Exiting program.\n");
            break;
        }

    } while (choice == 1);

    printf("\nThank you for using Student Management System!\n");
    return 0;
}
