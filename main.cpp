#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 unsigned int
 double
 float
 char
 bool
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int age = 70;
    int score = 95;
    int repetition = 8;

    float taxRate = 9.5f;
    float weightInOunces = 3.5f;
    float costOfCheese = 4.5f;

    double pi = 3.14;
    double distanceInKm = 2.20;
    double gramsOfGold = 15.77;

    unsigned int numberOfYears = 20;
    unsigned int carMileage = 5760;
    unsigned int salesProfit = 3550;

    char grade = 'A';
    char fuelTank = 'E';
    char shirtSize = 'M';

    bool isPossible = true;
    bool isWellWritten = true;
    bool isHealthy = false;
    
    ignoreUnused(number, age, score, repetition, taxRate, weightInOunces, costOfCheese,
        pi, distanceInKm, gramsOfGold, numberOfYears, carMileage, salesProfit, grade, fuelTank, shirtSize, isPossible, isWellWritten, isHealthy); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1) 
 */
void attendSchool (int amountInYears = 4, bool livesOnCampus = 1 )
{
    ignoreUnused (amountInYears, livesOnCampus);
}

/*
 2) 
 */
void babysit (int costPerHour = 50, int numOfHours = 8)
{
    ignoreUnused (costPerHour, numOfHours);
}

/*
 3) 
 */
int goToTheGym (int numOfDays = 5, int targetWeight = 155)
{
    ignoreUnused (numOfDays, targetWeight);

    return {};
}

/*
 4) 
 */
double subscribeToProgram (double annualPrice = 199.99, double serviceFee = 3.99)
{
    ignoreUnused (annualPrice, serviceFee);

    return{};
}

/*
 5) 
 */
int driveToSchool (int numOfMiles = 17, bool traffic = 1)
{
    ignoreUnused (numOfMiles, traffic);

    return {};
}

/*
 6) 
 */
double offerSale (double originalCost = 19.99, double promoSale = 0.5)
{
    ignoreUnused (originalCost, promoSale);

    return{};
}

/*
 7) 
 */
void manageProject ( int teamMembers = 9, int dueDateInWeeks = 8)
{
    ignoreUnused (teamMembers, dueDateInWeeks);
}

/*
 8) 
 */
double buyProperties (int yearBuilt = 1989, double sizeOfLandInSqFt = 5367.98)
{
    ignoreUnused (yearBuilt, sizeOfLandInSqFt);

    return {};
}

/*
 9) 
 */
int bookStudio (int numOfChannels = 16, bool phantomPower = 1)
{
ignoreUnused (numOfChannels, phantomPower);

    return {};
}

/*
 10)
 */
void passTheClass (int quizScore = 100, char passingGrade = 'A')
{
    ignoreUnused (quizScore, passingGrade);

}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1) 
    attendSchool (4, 1);
    //2) 
    babysit (50, 8);
    //3) 
    auto exercise = goToTheGym (5, 155);
    //4) 
    auto learnProgramming = subscribeToProgram (199.99, 3.99); 
    //5) 
    auto leaveEarly = driveToSchool (17, 1); 
    //6)
    auto buyClearanceItems = offerSale (19.99, 0.5);
    //7)
    manageProject (9, 8);
    //8)
    auto investFunds = buyProperties (1989, 5367.98);
    //9)
    auto recordMusic = bookStudio (16, 1);
    //10)
    
        
    
    ignoreUnused(carRented, attendSchool, babysit, exercise, learnProgramming, leaveEarly, buyClearanceItems, manageProject, investFunds, recordMusic);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
