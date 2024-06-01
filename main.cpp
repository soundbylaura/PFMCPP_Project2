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
 double
 bool
 float
 unsigned int
 char
 
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

    int shoes = 33;
    int violins = 40;
    int ports = 2;

    float height = 33.3f;
    float weight = 94.8f;
    float temperature = 98.5f;

    bool areOpen = false;
    bool canBeRemoved = true;
    bool isVisible = false;

    double bagels = 6004; 
    double creamCheese = 884403;
    double coffeeCups = 393939;

    char grade = 'B';
    char knob = 'H';
    char view = 's';

    unsigned int blackPants = 7;
    unsigned int greenJackets = 5;
    unsigned int shoulderPads = 567;

    ignoreUnused(shoes, violins, ports, height, weight, temperature, areOpen, canBeRemoved, isVisible, bagels, creamCheese, coffeeCups, grade, knob, view, blackPants, greenJackets, shoulderPads);

}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */


int countClothing(unsigned int blackPants, unsigned int greenJackets, unsigned int shoulderPads)
{
    ignoreUnused(blackPants, greenJackets, shoulderPads);
    return { };
}

float eatFood(double bagels, double creamCheese)
{
    ignoreUnused(bagels, creamCheese);
    return { };
}

bool unmuteChannel(int volume, bool isMuted)
{
    ignoreUnused(volume, isMuted);
    return { };
}

float calculateStatus(float weight, float height, float temperature, int active, int orientation)
{
    ignoreUnused(weight, height, temperature, active, orientation);
    return { };
}

double getNumberOfSamples (float getSamples)
{
    ignoreUnused(getSamples);
    return { };
}

int makePhoneCall (int phoneNumber, int areaCode, int countryCode, int unlockPhoneCode)
{
    ignoreUnused(phoneNumber, areaCode, countryCode, unlockPhoneCode);
    return { };
}

char getAddress(int streetNumber, int suiteNumber, char streetName, char nameOfCity, char nameOfState, int zipCode)
{
    ignoreUnused(streetNumber, suiteNumber, streetName, nameOfCity, nameOfState, zipCode);
    return { };
}

int mailLetter(int envelope, float stamp, int mailbox, int letter)
{
    ignoreUnused(envelope, stamp, mailbox, letter);
    return { };
}
                                                                   
double buyStamps(bool postOfficeOpen)
{
    ignoreUnused(postOfficeOpen);
    return { };
}

int cookDinner(int oven, int airFryer, int chicken, int brownRice, int chocolateCake, bool isHungry)
{
    ignoreUnused(oven, airFryer, chicken, brownRice, chocolateCake, isHungry);
    return { };
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
    auto dinnerCooked = cookDinner(1, 1, 4, 4, 12, false);
    
    auto haveStamps = buyStamps(true);
    
    auto letterMailed = mailLetter(1, 1.0f, 1, 1);
    
    auto addressAcquired = getAddress(1, 1, 'a', 'b', 'c', 1);

    auto phoneCallCompleted = makePhoneCall(1, 1, 1, 1);

    auto samplesPlayed = getNumberOfSamples(1.0f);
    
    auto status = calculateStatus(123.4f, 56.3f, 1.0f, 15, 1);

    auto isChannelUnmuted = unmuteChannel(0, true);

    auto haveGainedWeight = eatFood(10, 10);

    auto sizeOfWardrobe = countClothing(4, 2, 1);
     
    ignoreUnused(dinnerCooked, haveStamps, letterMailed, addressAcquired, phoneCallCompleted, samplesPlayed, status, isChannelUnmuted, haveGainedWeight, sizeOfWardrobe);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
